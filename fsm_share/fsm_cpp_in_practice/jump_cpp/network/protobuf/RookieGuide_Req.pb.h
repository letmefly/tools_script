// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: RookieGuide_Req.proto

#ifndef PROTOBUF_RookieGuide_5fReq_2eproto__INCLUDED
#define PROTOBUF_RookieGuide_5fReq_2eproto__INCLUDED

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
void  protobuf_AddDesc_RookieGuide_5fReq_2eproto();
void protobuf_AssignDesc_RookieGuide_5fReq_2eproto();
void protobuf_ShutdownFile_RookieGuide_5fReq_2eproto();

class RookieGuide_Req;

// ===================================================================

class RookieGuide_Req : public ::google::protobuf::Message {
 public:
  RookieGuide_Req();
  virtual ~RookieGuide_Req();

  RookieGuide_Req(const RookieGuide_Req& from);

  inline RookieGuide_Req& operator=(const RookieGuide_Req& from) {
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
  static const RookieGuide_Req& default_instance();

  void Swap(RookieGuide_Req* other);

  // implements Message ----------------------------------------------

  RookieGuide_Req* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const RookieGuide_Req& from);
  void MergeFrom(const RookieGuide_Req& from);
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

  // required int32 guideId = 2;
  inline bool has_guideid() const;
  inline void clear_guideid();
  static const int kGuideIdFieldNumber = 2;
  inline ::google::protobuf::int32 guideid() const;
  inline void set_guideid(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:protobuf.RookieGuide_Req)
 private:
  inline void set_has_token();
  inline void clear_has_token();
  inline void set_has_guideid();
  inline void clear_has_guideid();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* token_;
  ::google::protobuf::int32 guideid_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_RookieGuide_5fReq_2eproto();
  friend void protobuf_AssignDesc_RookieGuide_5fReq_2eproto();
  friend void protobuf_ShutdownFile_RookieGuide_5fReq_2eproto();

  void InitAsDefaultInstance();
  static RookieGuide_Req* default_instance_;
};
// ===================================================================


// ===================================================================

// RookieGuide_Req

// required string token = 1;
inline bool RookieGuide_Req::has_token() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void RookieGuide_Req::set_has_token() {
  _has_bits_[0] |= 0x00000001u;
}
inline void RookieGuide_Req::clear_has_token() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void RookieGuide_Req::clear_token() {
  if (token_ != &::google::protobuf::internal::kEmptyString) {
    token_->clear();
  }
  clear_has_token();
}
inline const ::std::string& RookieGuide_Req::token() const {
  return *token_;
}
inline void RookieGuide_Req::set_token(const ::std::string& value) {
  set_has_token();
  if (token_ == &::google::protobuf::internal::kEmptyString) {
    token_ = new ::std::string;
  }
  token_->assign(value);
}
inline void RookieGuide_Req::set_token(const char* value) {
  set_has_token();
  if (token_ == &::google::protobuf::internal::kEmptyString) {
    token_ = new ::std::string;
  }
  token_->assign(value);
}
inline void RookieGuide_Req::set_token(const char* value, size_t size) {
  set_has_token();
  if (token_ == &::google::protobuf::internal::kEmptyString) {
    token_ = new ::std::string;
  }
  token_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* RookieGuide_Req::mutable_token() {
  set_has_token();
  if (token_ == &::google::protobuf::internal::kEmptyString) {
    token_ = new ::std::string;
  }
  return token_;
}
inline ::std::string* RookieGuide_Req::release_token() {
  clear_has_token();
  if (token_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = token_;
    token_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void RookieGuide_Req::set_allocated_token(::std::string* token) {
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

// required int32 guideId = 2;
inline bool RookieGuide_Req::has_guideid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void RookieGuide_Req::set_has_guideid() {
  _has_bits_[0] |= 0x00000002u;
}
inline void RookieGuide_Req::clear_has_guideid() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void RookieGuide_Req::clear_guideid() {
  guideid_ = 0;
  clear_has_guideid();
}
inline ::google::protobuf::int32 RookieGuide_Req::guideid() const {
  return guideid_;
}
inline void RookieGuide_Req::set_guideid(::google::protobuf::int32 value) {
  set_has_guideid();
  guideid_ = value;
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

#endif  // PROTOBUF_RookieGuide_5fReq_2eproto__INCLUDED