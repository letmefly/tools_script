--[[
1- 从服务器获取最新的版本号 eg. 1.1.1
2- 获取本地安装包版本号，获取更新包版本号，安装包版本号是大版本号，更新包版本号是小版本号，

如果安装包版本号大于更新包版本号或者安装包版本号等于服务端最新版本号，表明安装包本身就是最新版本，无须更新，无须从更新包读取文件，配置搜索路径不添加更新包的路径；
并且为了避免文件冲突，删除原有的所有更新数据包，并且设置更新包版本号为空

如果安装包版本号和更新版本号都不是最新版本号，表明需要从服务端更新数据包，下载数据包成功后，修改本地更新数据包版本号为最新版本号，添加更新包的路径到搜索路径；

如果安装包版本号不是最新版本，但是更新包版本是最新版本号，表明无须下载已经是最新更新包了。添加更新包的路径到搜索路径；
]]--

require "Cocos2d"
require "lfs"
require "json"

local NEED_UPDATE = true
local server = "http://127.0.0.1/version/versionList.php"

--This data must be updated when uploading version to AppStore
--Updating package can't contain 'boot' dictionary
local client_package_version = "1.0.0"

--currVersion 1.1.1, 1.1 is bigVersion, 1 is smallVersion
--key:"current-version-code" is defined in AssetManager in cpp
local client_update_version = cc.UserDefault:getInstance():getStringForKey("CLIENT_VERSION")
--just for debugging
--local client_update_version = "1.0.0"

local UpdateScene = class("UpdateScene", function()
    return cc.Scene:create()
end)

function UpdateScene:create()
    local scene = UpdateScene.new()
    scene:initM()
    return scene
end

function UpdateScene:ctor()
end

function UpdateScene:onEnter()
    self:getNewestVersion()
end

function UpdateScene:onExit()
    if self.assetsManager then
        self.assetsManager:release()
        self.assetsManager = nil
    end
end

local function string_split(input, delimiter)
    input = tostring(input)
    delimiter = tostring(delimiter)
    if (delimiter=='') then return false end
    local pos,arr = 0, {}
    -- for each divider found
    for st,sp in function() return string.find(input, delimiter, pos, true) end do
        table.insert(arr, string.sub(input, pos, st - 1))
        pos = sp + 1
    end
    table.insert(arr, string.sub(input, pos))
    return arr
end

function UpdateScene:initM()
    local function onNodeEvent(event)
        if event == "enter" then self:onEnter()
        elseif event == "exit" then self:onExit() end
    end
    self:registerScriptHandler(onNodeEvent)
    
    self.path = cc.FileUtils:getInstance():getWritablePath()
    
    --cal client current version
    self.currVersion = client_package_version
    local package_strs = string_split(client_package_version, ".")
    local package_version_big_num = tonumber(package_strs[1])*100 + tonumber(package_strs[2])*10
    local package_version_small_num = tonumber(package_strs[3])
    
    if client_update_version and client_update_version ~= "" then
        local update_strs = string_split(client_update_version, ".")
        local update_version_big_num = tonumber(update_strs[1])*100 + tonumber(update_strs[2])*10
        local update_version_small_num = tonumber(update_strs[3])
        if update_version_big_num+update_version_small_num <= package_version_big_num+package_version_small_num then
            local updateDir = cc.FileUtils:getInstance():getWritablePath().."update_package"
            self:delAllFilesInDirectory(updateDir)
            cc.UserDefault:getInstance():setStringForKey("CLIENT_VERSION", "")
        else
            self.currVersion = client_update_version
        end
    end
    print("[UpdateScene] client version "..self.currVersion)
end

function UpdateScene:delAllFilesInDirectory(path)
    if false == cc.FileUtils:getInstance():isFileExist(path) then
        print(path.." not exist")
        return
    end
    
    for file in lfs.dir(path) do
      if file ~= "." and file ~= ".." then
          local f = path..'/'..file
          local attr = lfs.attributes (f)
          assert (type(attr) == "table")
          if attr.mode == "directory" then
              self:delAllFilesInDirectory (f)
              os.remove(f)
          else
              os.remove(f)
          end
      end
    end
    os.remove(path)
end

function UpdateScene:downIndexedVersion()
    self.nowDownIndex = self.nowDownIndex or 1
    local versionUrl = self.needDownVersionList[self.nowDownIndex].versionUrl
    local packageUrl = self.needDownVersionList[self.nowDownIndex].packageUrl
    cclog("[UpdateScene]update version:"..versionUrl..", "..packageUrl)
    
    if self.nowDownIndex == 1 then
        self.assetsManager = cc.AssetsManager:new(packageUrl, versionUrl, self.path) --资源包路径，版本号路径，存储路径
        self.assetsManager:retain()
        self.assetsManager:deleteVersion()
        local function onError(errorCode)
            --cclog("[UpdateScene]assets onError:"..errorCode)
            if errorCode == 2 then end
        end
        local function onProgress(percent) end
        local function onSuccess() 
            --following code just for code robust
            local tmpVersion = self.assetsManager:getVersion()
            local tmpVersion_strs = string_split(tmpVersion, ".")
            local tmpVersion_big_num = tonumber(tmpVersion_strs[1])*100 + tonumber(tmpVersion_strs[2])*10
            local tmpVersion_small_num = tonumber(tmpVersion_strs[3])
            local clientVersion = cc.UserDefault:getInstance():getStringForKey("CLIENT_VERSION")
            if clientVersion == nil or clientVersion == "" then
                cc.UserDefault:getInstance():setStringForKey("CLIENT_VERSION", tmpVersion)
                print("Update CLIENT_VERSION:"..self.assetsManager:getVersion())
            else
                local clientVersion_strs = string_split(clientVersion, ".")
                local clientVersion_big_num = tonumber(clientVersion_strs[1])*100 + tonumber(clientVersion_strs[2])*10
                local clientVersion_small_num = tonumber(clientVersion_strs[3])
                if tmpVersion_big_num+tmpVersion_small_num > clientVersion_big_num+clientVersion_small_num then
                    cc.UserDefault:getInstance():setStringForKey("CLIENT_VERSION", tmpVersion)
                    print("Update CLIENT_VERSION:"..self.assetsManager:getVersion())
                end
            end
            
            self:downNextVersion() 
        end
        
        self.assetsManager:setDelegate(onError, cc.ASSETSMANAGER_PROTOCOL_ERROR )
        self.assetsManager:setDelegate(onProgress, cc.ASSETSMANAGER_PROTOCOL_PROGRESS)
        self.assetsManager:setDelegate(onSuccess, cc.ASSETSMANAGER_PROTOCOL_SUCCESS)
        self.assetsManager:setConnectionTimeout(10)
    else
        self.assetsManager:setVersionFileUrl(versionUrl)
        self.assetsManager:setPackageUrl(packageUrl)
        --------------just for debuging--------------
        --self.assetsManager:deleteVersion() 
    end
    
    if self.assetsManager:checkUpdate() then
        self.assetsManager:update()
    else
        self:downNextVersion() 
    end
end

function UpdateScene:getNewestVersion()
    if not NEED_UPDATE then
        cclog("[UpdateScene]current is debug version, no need for updating")
        self:startNextScene()
        return
    end
    
    local http = cc.XMLHttpRequest:new()    
    local function httpCallback()
        local result = {}
        local responseStr = http.response
        cclog("--[Http_Recv]--"..responseStr)
        if responseStr == nil or responseStr == "" then
            result.err = 1
            return
        end        
        local needDownVersions = json.decode(responseStr)
        if needDownVersions.code == 200 then
            self.needDownVersionList = needDownVersions.list         
            if #self.needDownVersionList > 0 then
                self:downIndexedVersion()
            else
                -- It means there is no newwer version in server, current client is newest version
                self:startNextScene()
            end    
        end
    end

    http.responseType = cc.XMLHTTPREQUEST_RESPONSE_STRING
    local url = server.."?clientVersion="..self.currVersion
    cclog("[UpdateScene]getNewestVersion url:"..url)
    http:open("GET", url)
    http:registerScriptHandler(httpCallback)
    http:send()
end

function UpdateScene:downNextVersion()
    if self.nowDownIndex < #self.needDownVersionList then
        self.nowDownIndex = self.nowDownIndex + 1
        self:downIndexedVersion()
    else
        cclog("[UpdateScene]update succes")
        self:startNextScene()
    end
end

function UpdateScene:startNextScene() 
    local updateDir = cc.FileUtils:getInstance():getWritablePath().."update_package"
    --self:delAllFilesInDirectory(updateDir)
    
    if cc.FileUtils:getInstance():isFileExist(updateDir) then
        cc.FileUtils:getInstance():addSearchPath(updateDir.."/src")
        cc.FileUtils:getInstance():addSearchPath(updateDir.."/res")
    end
    cc.FileUtils:getInstance():addSearchPath("src")
    cc.FileUtils:getInstance():addSearchPath("res")

    local Initialization = require("boot.Initialization")
    Initialization:start()

    cclog("[UpdateScene]enter LoginScene now.")
    local LoginScene = require("scene.login.LoginScene")
    cc.Director:getInstance():replaceScene(LoginScene:create())
end

return UpdateScene
