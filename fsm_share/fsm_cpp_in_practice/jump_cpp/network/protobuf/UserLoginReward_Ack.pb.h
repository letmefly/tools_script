// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: UserLoginReward_Ack.proto

#ifndef PROTOBUF_UserLoginReward_5fAck_2eproto__INCLUDED
#define PROTOBUF_UserLoginReward_5fAck_2eproto__INCLUDED

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
void  protobuf_AddDesc_UserLoginReward_5fAck_2eproto();
void protobuf_AssignDesc_UserLoginReward_5fAck_2eproto();
void protobuf_ShutdownFile_UserLoginReward_5fAck_2eproto();

class UserLoginReward_Ack;

// ===================================================================

class UserLoginReward_Ack : public ::google::protobuf::Message {
 public:
  UserLoginReward_Ack();
  virtual ~UserLoginReward_Ack();

  UserLoginReward_Ack(const UserLoginReward_Ack& from);

  inline UserLoginReward_Ack& operator=(const UserLoginReward_Ack& from) {
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
  static const UserLoginReward_Ack& default_instance();

  void Swap(UserLoginReward_Ack* other);

  // implements Message ----------------------------------------------

  UserLoginReward_Ack* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const UserLoginReward_Ack& from);
  void MergeFrom(const UserLoginReward_Ack& from);
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

  // optional string msgInfo = 1;
  inline bool has_msginfo() const;
  inline void clear_msginfo();
  static const int kMsgInfoFieldNumber = 1;
  inline const ::std::string& msginfo() const;
  inline void set_msginfo(const ::std::string& value);
  inline void set_msginfo(const char* value);
  inline void set_msginfo(const char* value, size_t size);
  inline ::std::string* mutable_msginfo();
  inline ::std::string* release_msginfo();
  inline void set_allocated_msginfo(::std::string* msginfo);

  // optional int32 type = 2;
  inline bool has_type() const;
  inline void clear_type();
  static const int kTypeFieldNumber = 2;
  inline ::google::protobuf::int32 type() const;
  inline void set_type(::google::protobuf::int32 value);

  // optional int32 loginNumTotal = 3;
  inline bool has_loginnumtotal() const;
  inline void clear_loginnumtotal();
  static const int kLoginNumTotalFieldNumber = 3;
  inline ::google::protobuf::int32 loginnumtotal() const;
  inline void set_loginnumtotal(::google::protobuf::int32 value);

  // optional int32 loginNum = 4;
  inline bool has_loginnum() const;
  inline void clear_loginnum();
  static const int kLoginNumFieldNumber = 4;
  inline ::google::protobuf::int32 loginnum() const;
  inline void set_loginnum(::google::protobuf::int32 value);

  // optional int32 coin = 5;
  inline bool has_coin() const;
  inline void clear_coin();
  static const int kCoinFieldNumber = 5;
  inline ::google::protobuf::int32 coin() const;
  inline void set_coin(::google::protobuf::int32 value);

  // optional int32 diamond = 6;
  inline bool has_diamond() const;
  inline void clear_diamond();
  static const int kDiamondFieldNumber = 6;
  inline ::google::protobuf::int32 diamond() const;
  inline void set_diamond(::google::protobuf::int32 value);

  // optional int32 acttime = 7;
  inline bool has_acttime() const;
  inline void clear_acttime();
  static const int kActtimeFieldNumber = 7;
  inline ::google::protobuf::int32 acttime() const;
  inline void set_acttime(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:protobuf.UserLoginReward_Ack)
 private:
  inline void set_has_msginfo();
  inline void clear_has_msginfo();
  inline void set_has_type();
  inline void clear_has_type();
  inline void set_has_loginnumtotal();
  inline void clear_has_loginnumtotal();
  inline void set_has_loginnum();
  inline void clear_has_loginnum();
  inline void set_has_coin();
  inline void clear_has_coin();
  inline void set_has_diamond();
  inline void clear_has_diamond();
  inline void set_has_acttime();
  inline void clear_has_acttime();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* msginfo_;
  ::google::protobuf::int32 type_;
  ::google::protobuf::int32 loginnumtotal_;
  ::google::protobuf::int32 loginnum_;
  ::google::protobuf::int32 coin_;
  ::google::protobuf::int32 diamond_;
  ::google::protobuf::int32 acttime_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(7 + 31) / 32];

  friend void  protobuf_AddDesc_UserLoginReward_5fAck_2eproto();
  friend void protobuf_AssignDesc_UserLoginReward_5fAck_2eproto();
  friend void protobuf_ShutdownFile_UserLoginReward_5fAck_2eproto();

  void InitAsDefaultInstance();
  static UserLoginReward_Ack* default_instance_;
};
// ===================================================================


// ===================================================================

// UserLoginReward_Ack

// optional string msgInfo = 1;
inline bool UserLoginReward_Ack::has_msginfo() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void UserLoginReward_Ack::set_has_msginfo() {
  _has_bits_[0] |= 0x00000001u;
}
inline void UserLoginReward_Ack::clear_has_msginfo() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void UserLoginReward_Ack::clear_msginfo() {
  if (msginfo_ != &::google::protobuf::internal::kEmptyString) {
    msginfo_->clear();
  }
  clear_has_msginfo();
}
inline const ::std::string& UserLoginReward_Ack::msginfo() const {
  return *msginfo_;
}
inline void UserLoginReward_Ack::set_msginfo(const ::std::string& value) {
  set_has_msginfo();
  if (msginfo_ == &::google::protobuf::internal::kEmptyString) {
    msginfo_ = new ::std::string;
  }
  msginfo_->assign(value);
}
inline void UserLoginReward_Ack::set_msginfo(const char* value) {
  set_has_msginfo();
  if (msginfo_ == &::google::protobuf::internal::kEmptyString) {
    msginfo_ = new ::std::string;
  }
  msginfo_->assign(value);
}
inline void UserLoginReward_Ack::set_msginfo(const char* value, size_t size) {
  set_has_msginfo();
  if (msginfo_ == &::google::protobuf::internal::kEmptyString) {
    msginfo_ = new ::std::string;
  }
  msginfo_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* UserLoginReward_Ack::mutable_msginfo() {
  set_has_msginfo();
  if (msginfo_ == &::google::protobuf::internal::kEmptyString) {
    msginfo_ = new ::std::string;
  }
  return msginfo_;
}
inline ::std::string* UserLoginReward_Ack::release_msginfo() {
  clear_has_msginfo();
  if (msginfo_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = msginfo_;
    msginfo_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void UserLoginReward_Ack::set_allocated_msginfo(::std::string* msginfo) {
  if (msginfo_ != &::google::protobuf::internal::kEmptyString) {
    delete msginfo_;
  }
  if (msginfo) {
    set_has_msginfo();
    msginfo_ = msginfo;
  } else {
    clear_has_msginfo();
    msginfo_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional int32 type = 2;
inline bool UserLoginReward_Ack::has_type() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void UserLoginReward_Ack::set_has_type() {
  _has_bits_[0] |= 0x00000002u;
}
inline void UserLoginReward_Ack::clear_has_type() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void UserLoginReward_Ack::clear_type() {
  type_ = 0;
  clear_has_type();
}
inline ::google::protobuf::int32 UserLoginReward_Ack::type() const {
  return type_;
}
inline void UserLoginReward_Ack::set_type(::google::protobuf::int32 value) {
  set_has_type();
  type_ = value;
}

// optional int32 loginNumTotal = 3;
inline bool UserLoginReward_Ack::has_loginnumtotal() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void UserLoginReward_Ack::set_has_loginnumtotal() {
  _has_bits_[0] |= 0x00000004u;
}
inline void UserLoginReward_Ack::clear_has_loginnumtotal() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void UserLoginReward_Ack::clear_loginnumtotal() {
  loginnumtotal_ = 0;
  clear_has_loginnumtotal();
}
inline ::google::protobuf::int32 UserLoginReward_Ack::loginnumtotal() const {
  return loginnumtotal_;
}
inline void UserLoginReward_Ack::set_loginnumtotal(::google::protobuf::int32 value) {
  set_has_loginnumtotal();
  loginnumtotal_ = value;
}

// optional int32 loginNum = 4;
inline bool UserLoginReward_Ack::has_loginnum() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void UserLoginReward_Ack::set_has_loginnum() {
  _has_bits_[0] |= 0x00000008u;
}
inline void UserLoginReward_Ack::clear_has_loginnum() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void UserLoginReward_Ack::clear_loginnum() {
  loginnum_ = 0;
  clear_has_loginnum();
}
inline ::google::protobuf::int32 UserLoginReward_Ack::loginnum() const {
  return loginnum_;
}
inline void UserLoginReward_Ack::set_loginnum(::google::protobuf::int32 value) {
  set_has_loginnum();
  loginnum_ = value;
}

// optional int32 coin = 5;
inline bool UserLoginReward_Ack::has_coin() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void UserLoginReward_Ack::set_has_coin() {
  _has_bits_[0] |= 0x00000010u;
}
inline void UserLoginReward_Ack::clear_has_coin() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void UserLoginReward_Ack::clear_coin() {
  coin_ = 0;
  clear_has_coin();
}
inline ::google::protobuf::int32 UserLoginReward_Ack::coin() const {
  return coin_;
}
inline void UserLoginReward_Ack::set_coin(::google::protobuf::int32 value) {
  set_has_coin();
  coin_ = value;
}

// optional int32 diamond = 6;
inline bool UserLoginReward_Ack::has_diamond() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void UserLoginReward_Ack::set_has_diamond() {
  _has_bits_[0] |= 0x00000020u;
}
inline void UserLoginReward_Ack::clear_has_diamond() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void UserLoginReward_Ack::clear_diamond() {
  diamond_ = 0;
  clear_has_diamond();
}
inline ::google::protobuf::int32 UserLoginReward_Ack::diamond() const {
  return diamond_;
}
inline void UserLoginReward_Ack::set_diamond(::google::protobuf::int32 value) {
  set_has_diamond();
  diamond_ = value;
}

// optional int32 acttime = 7;
inline bool UserLoginReward_Ack::has_acttime() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void UserLoginReward_Ack::set_has_acttime() {
  _has_bits_[0] |= 0x00000040u;
}
inline void UserLoginReward_Ack::clear_has_acttime() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void UserLoginReward_Ack::clear_acttime() {
  acttime_ = 0;
  clear_has_acttime();
}
inline ::google::protobuf::int32 UserLoginReward_Ack::acttime() const {
  return acttime_;
}
inline void UserLoginReward_Ack::set_acttime(::google::protobuf::int32 value) {
  set_has_acttime();
  acttime_ = value;
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

#endif  // PROTOBUF_UserLoginReward_5fAck_2eproto__INCLUDED
