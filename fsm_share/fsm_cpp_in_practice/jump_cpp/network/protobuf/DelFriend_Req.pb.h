// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: DelFriend_Req.proto

#ifndef PROTOBUF_DelFriend_5fReq_2eproto__INCLUDED
#define PROTOBUF_DelFriend_5fReq_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace protobuf {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_DelFriend_5fReq_2eproto();
void protobuf_AssignDesc_DelFriend_5fReq_2eproto();
void protobuf_ShutdownFile_DelFriend_5fReq_2eproto();

class DelFriend_Req;

// ===================================================================

class DelFriend_Req : public ::google::protobuf::Message {
 public:
  DelFriend_Req();
  virtual ~DelFriend_Req();

  DelFriend_Req(const DelFriend_Req& from);

  inline DelFriend_Req& operator=(const DelFriend_Req& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const DelFriend_Req& default_instance();

  void Swap(DelFriend_Req* other);

  // implements Message ----------------------------------------------

  DelFriend_Req* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const DelFriend_Req& from);
  void MergeFrom(const DelFriend_Req& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required string token = 1;
  inline bool has_token() const;
  inline void clear_token();
  static const int kTokenFieldNumber = 1;
  inline const ::std::string& token() const;
  inline void set_token(const ::std::string& value);
  inline void set_token(const char* value);
  inline void set_token(const char* value, size_t size);
  inline ::std::string* mutable_token();
  inline ::std::string* release_token();
  inline void set_allocated_token(::std::string* token);

  // required int32 playerId = 2;
  inline bool has_playerid() const;
  inline void clear_playerid();
  static const int kPlayerIdFieldNumber = 2;
  inline ::google::protobuf::int32 playerid() const;
  inline void set_playerid(::google::protobuf::int32 value);

  // required int32 type = 3;
  inline bool has_type() const;
  inline void clear_type();
  static const int kTypeFieldNumber = 3;
  inline ::google::protobuf::int32 type() const;
  inline void set_type(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:protobuf.DelFriend_Req)
 private:
  inline void set_has_token();
  inline void clear_has_token();
  inline void set_has_playerid();
  inline void clear_has_playerid();
  inline void set_has_type();
  inline void clear_has_type();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* token_;
  ::google::protobuf::int32 playerid_;
  ::google::protobuf::int32 type_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  friend void  protobuf_AddDesc_DelFriend_5fReq_2eproto();
  friend void protobuf_AssignDesc_DelFriend_5fReq_2eproto();
  friend void protobuf_ShutdownFile_DelFriend_5fReq_2eproto();

  void InitAsDefaultInstance();
  static DelFriend_Req* default_instance_;
};
// ===================================================================


// ===================================================================

// DelFriend_Req

// required string token = 1;
inline bool DelFriend_Req::has_token() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void DelFriend_Req::set_has_token() {
  _has_bits_[0] |= 0x00000001u;
}
inline void DelFriend_Req::clear_has_token() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void DelFriend_Req::clear_token() {
  if (token_ != &::google::protobuf::internal::kEmptyString) {
    token_->clear();
  }
  clear_has_token();
}
inline const ::std::string& DelFriend_Req::token() const {
  return *token_;
}
inline void DelFriend_Req::set_token(const ::std::string& value) {
  set_has_token();
  if (token_ == &::google::protobuf::internal::kEmptyString) {
    token_ = new ::std::string;
  }
  token_->assign(value);
}
inline void DelFriend_Req::set_token(const char* value) {
  set_has_token();
  if (token_ == &::google::protobuf::internal::kEmptyString) {
    token_ = new ::std::string;
  }
  token_->assign(value);
}
inline void DelFriend_Req::set_token(const char* value, size_t size) {
  set_has_token();
  if (token_ == &::google::protobuf::internal::kEmptyString) {
    token_ = new ::std::string;
  }
  token_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* DelFriend_Req::mutable_token() {
  set_has_token();
  if (token_ == &::google::protobuf::internal::kEmptyString) {
    token_ = new ::std::string;
  }
  return token_;
}
inline ::std::string* DelFriend_Req::release_token() {
  clear_has_token();
  if (token_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = token_;
    token_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void DelFriend_Req::set_allocated_token(::std::string* token) {
  if (token_ != &::google::protobuf::internal::kEmptyString) {
    delete token_;
  }
  if (token) {
    set_has_token();
    token_ = token;
  } else {
    clear_has_token();
    token_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required int32 playerId = 2;
inline bool DelFriend_Req::has_playerid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void DelFriend_Req::set_has_playerid() {
  _has_bits_[0] |= 0x00000002u;
}
inline void DelFriend_Req::clear_has_playerid() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void DelFriend_Req::clear_playerid() {
  playerid_ = 0;
  clear_has_playerid();
}
inline ::google::protobuf::int32 DelFriend_Req::playerid() const {
  return playerid_;
}
inline void DelFriend_Req::set_playerid(::google::protobuf::int32 value) {
  set_has_playerid();
  playerid_ = value;
}

// required int32 type = 3;
inline bool DelFriend_Req::has_type() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void DelFriend_Req::set_has_type() {
  _has_bits_[0] |= 0x00000004u;
}
inline void DelFriend_Req::clear_has_type() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void DelFriend_Req::clear_type() {
  type_ = 0;
  clear_has_type();
}
inline ::google::protobuf::int32 DelFriend_Req::type() const {
  return type_;
}
inline void DelFriend_Req::set_type(::google::protobuf::int32 value) {
  set_has_type();
  type_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace protobuf

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_DelFriend_5fReq_2eproto__INCLUDED