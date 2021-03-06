// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: FriendList_Req.proto

#ifndef PROTOBUF_FriendList_5fReq_2eproto__INCLUDED
#define PROTOBUF_FriendList_5fReq_2eproto__INCLUDED

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
void  protobuf_AddDesc_FriendList_5fReq_2eproto();
void protobuf_AssignDesc_FriendList_5fReq_2eproto();
void protobuf_ShutdownFile_FriendList_5fReq_2eproto();

class FriendList_Req;

// ===================================================================

class FriendList_Req : public ::google::protobuf::Message {
 public:
  FriendList_Req();
  virtual ~FriendList_Req();

  FriendList_Req(const FriendList_Req& from);

  inline FriendList_Req& operator=(const FriendList_Req& from) {
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
  static const FriendList_Req& default_instance();

  void Swap(FriendList_Req* other);

  // implements Message ----------------------------------------------

  FriendList_Req* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const FriendList_Req& from);
  void MergeFrom(const FriendList_Req& from);
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

  // optional string token = 1;
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

  // optional string longitude = 2;
  inline bool has_longitude() const;
  inline void clear_longitude();
  static const int kLongitudeFieldNumber = 2;
  inline const ::std::string& longitude() const;
  inline void set_longitude(const ::std::string& value);
  inline void set_longitude(const char* value);
  inline void set_longitude(const char* value, size_t size);
  inline ::std::string* mutable_longitude();
  inline ::std::string* release_longitude();
  inline void set_allocated_longitude(::std::string* longitude);

  // optional string latitude = 3;
  inline bool has_latitude() const;
  inline void clear_latitude();
  static const int kLatitudeFieldNumber = 3;
  inline const ::std::string& latitude() const;
  inline void set_latitude(const ::std::string& value);
  inline void set_latitude(const char* value);
  inline void set_latitude(const char* value, size_t size);
  inline ::std::string* mutable_latitude();
  inline ::std::string* release_latitude();
  inline void set_allocated_latitude(::std::string* latitude);

  // optional int32 pageType = 4;
  inline bool has_pagetype() const;
  inline void clear_pagetype();
  static const int kPageTypeFieldNumber = 4;
  inline ::google::protobuf::int32 pagetype() const;
  inline void set_pagetype(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:protobuf.FriendList_Req)
 private:
  inline void set_has_token();
  inline void clear_has_token();
  inline void set_has_longitude();
  inline void clear_has_longitude();
  inline void set_has_latitude();
  inline void clear_has_latitude();
  inline void set_has_pagetype();
  inline void clear_has_pagetype();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* token_;
  ::std::string* longitude_;
  ::std::string* latitude_;
  ::google::protobuf::int32 pagetype_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];

  friend void  protobuf_AddDesc_FriendList_5fReq_2eproto();
  friend void protobuf_AssignDesc_FriendList_5fReq_2eproto();
  friend void protobuf_ShutdownFile_FriendList_5fReq_2eproto();

  void InitAsDefaultInstance();
  static FriendList_Req* default_instance_;
};
// ===================================================================


// ===================================================================

// FriendList_Req

// optional string token = 1;
inline bool FriendList_Req::has_token() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void FriendList_Req::set_has_token() {
  _has_bits_[0] |= 0x00000001u;
}
inline void FriendList_Req::clear_has_token() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void FriendList_Req::clear_token() {
  if (token_ != &::google::protobuf::internal::kEmptyString) {
    token_->clear();
  }
  clear_has_token();
}
inline const ::std::string& FriendList_Req::token() const {
  return *token_;
}
inline void FriendList_Req::set_token(const ::std::string& value) {
  set_has_token();
  if (token_ == &::google::protobuf::internal::kEmptyString) {
    token_ = new ::std::string;
  }
  token_->assign(value);
}
inline void FriendList_Req::set_token(const char* value) {
  set_has_token();
  if (token_ == &::google::protobuf::internal::kEmptyString) {
    token_ = new ::std::string;
  }
  token_->assign(value);
}
inline void FriendList_Req::set_token(const char* value, size_t size) {
  set_has_token();
  if (token_ == &::google::protobuf::internal::kEmptyString) {
    token_ = new ::std::string;
  }
  token_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* FriendList_Req::mutable_token() {
  set_has_token();
  if (token_ == &::google::protobuf::internal::kEmptyString) {
    token_ = new ::std::string;
  }
  return token_;
}
inline ::std::string* FriendList_Req::release_token() {
  clear_has_token();
  if (token_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = token_;
    token_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void FriendList_Req::set_allocated_token(::std::string* token) {
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

// optional string longitude = 2;
inline bool FriendList_Req::has_longitude() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void FriendList_Req::set_has_longitude() {
  _has_bits_[0] |= 0x00000002u;
}
inline void FriendList_Req::clear_has_longitude() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void FriendList_Req::clear_longitude() {
  if (longitude_ != &::google::protobuf::internal::kEmptyString) {
    longitude_->clear();
  }
  clear_has_longitude();
}
inline const ::std::string& FriendList_Req::longitude() const {
  return *longitude_;
}
inline void FriendList_Req::set_longitude(const ::std::string& value) {
  set_has_longitude();
  if (longitude_ == &::google::protobuf::internal::kEmptyString) {
    longitude_ = new ::std::string;
  }
  longitude_->assign(value);
}
inline void FriendList_Req::set_longitude(const char* value) {
  set_has_longitude();
  if (longitude_ == &::google::protobuf::internal::kEmptyString) {
    longitude_ = new ::std::string;
  }
  longitude_->assign(value);
}
inline void FriendList_Req::set_longitude(const char* value, size_t size) {
  set_has_longitude();
  if (longitude_ == &::google::protobuf::internal::kEmptyString) {
    longitude_ = new ::std::string;
  }
  longitude_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* FriendList_Req::mutable_longitude() {
  set_has_longitude();
  if (longitude_ == &::google::protobuf::internal::kEmptyString) {
    longitude_ = new ::std::string;
  }
  return longitude_;
}
inline ::std::string* FriendList_Req::release_longitude() {
  clear_has_longitude();
  if (longitude_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = longitude_;
    longitude_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void FriendList_Req::set_allocated_longitude(::std::string* longitude) {
  if (longitude_ != &::google::protobuf::internal::kEmptyString) {
    delete longitude_;
  }
  if (longitude) {
    set_has_longitude();
    longitude_ = longitude;
  } else {
    clear_has_longitude();
    longitude_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional string latitude = 3;
inline bool FriendList_Req::has_latitude() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void FriendList_Req::set_has_latitude() {
  _has_bits_[0] |= 0x00000004u;
}
inline void FriendList_Req::clear_has_latitude() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void FriendList_Req::clear_latitude() {
  if (latitude_ != &::google::protobuf::internal::kEmptyString) {
    latitude_->clear();
  }
  clear_has_latitude();
}
inline const ::std::string& FriendList_Req::latitude() const {
  return *latitude_;
}
inline void FriendList_Req::set_latitude(const ::std::string& value) {
  set_has_latitude();
  if (latitude_ == &::google::protobuf::internal::kEmptyString) {
    latitude_ = new ::std::string;
  }
  latitude_->assign(value);
}
inline void FriendList_Req::set_latitude(const char* value) {
  set_has_latitude();
  if (latitude_ == &::google::protobuf::internal::kEmptyString) {
    latitude_ = new ::std::string;
  }
  latitude_->assign(value);
}
inline void FriendList_Req::set_latitude(const char* value, size_t size) {
  set_has_latitude();
  if (latitude_ == &::google::protobuf::internal::kEmptyString) {
    latitude_ = new ::std::string;
  }
  latitude_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* FriendList_Req::mutable_latitude() {
  set_has_latitude();
  if (latitude_ == &::google::protobuf::internal::kEmptyString) {
    latitude_ = new ::std::string;
  }
  return latitude_;
}
inline ::std::string* FriendList_Req::release_latitude() {
  clear_has_latitude();
  if (latitude_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = latitude_;
    latitude_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void FriendList_Req::set_allocated_latitude(::std::string* latitude) {
  if (latitude_ != &::google::protobuf::internal::kEmptyString) {
    delete latitude_;
  }
  if (latitude) {
    set_has_latitude();
    latitude_ = latitude;
  } else {
    clear_has_latitude();
    latitude_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional int32 pageType = 4;
inline bool FriendList_Req::has_pagetype() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void FriendList_Req::set_has_pagetype() {
  _has_bits_[0] |= 0x00000008u;
}
inline void FriendList_Req::clear_has_pagetype() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void FriendList_Req::clear_pagetype() {
  pagetype_ = 0;
  clear_has_pagetype();
}
inline ::google::protobuf::int32 FriendList_Req::pagetype() const {
  return pagetype_;
}
inline void FriendList_Req::set_pagetype(::google::protobuf::int32 value) {
  set_has_pagetype();
  pagetype_ = value;
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

#endif  // PROTOBUF_FriendList_5fReq_2eproto__INCLUDED
