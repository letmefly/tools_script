// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ReadMail_Ack.proto

#ifndef PROTOBUF_ReadMail_5fAck_2eproto__INCLUDED
#define PROTOBUF_ReadMail_5fAck_2eproto__INCLUDED

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
void  protobuf_AddDesc_ReadMail_5fAck_2eproto();
void protobuf_AssignDesc_ReadMail_5fAck_2eproto();
void protobuf_ShutdownFile_ReadMail_5fAck_2eproto();

class ReadMail_Ack;

// ===================================================================

class ReadMail_Ack : public ::google::protobuf::Message {
 public:
  ReadMail_Ack();
  virtual ~ReadMail_Ack();

  ReadMail_Ack(const ReadMail_Ack& from);

  inline ReadMail_Ack& operator=(const ReadMail_Ack& from) {
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
  static const ReadMail_Ack& default_instance();

  void Swap(ReadMail_Ack* other);

  // implements Message ----------------------------------------------

  ReadMail_Ack* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ReadMail_Ack& from);
  void MergeFrom(const ReadMail_Ack& from);
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

  // optional string title = 2;
  inline bool has_title() const;
  inline void clear_title();
  static const int kTitleFieldNumber = 2;
  inline const ::std::string& title() const;
  inline void set_title(const ::std::string& value);
  inline void set_title(const char* value);
  inline void set_title(const char* value, size_t size);
  inline ::std::string* mutable_title();
  inline ::std::string* release_title();
  inline void set_allocated_title(::std::string* title);

  // optional string content = 3;
  inline bool has_content() const;
  inline void clear_content();
  static const int kContentFieldNumber = 3;
  inline const ::std::string& content() const;
  inline void set_content(const ::std::string& value);
  inline void set_content(const char* value);
  inline void set_content(const char* value, size_t size);
  inline ::std::string* mutable_content();
  inline ::std::string* release_content();
  inline void set_allocated_content(::std::string* content);

  // required int32 acktime = 4;
  inline bool has_acktime() const;
  inline void clear_acktime();
  static const int kAcktimeFieldNumber = 4;
  inline ::google::protobuf::int32 acktime() const;
  inline void set_acktime(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:protobuf.ReadMail_Ack)
 private:
  inline void set_has_msginfo();
  inline void clear_has_msginfo();
  inline void set_has_title();
  inline void clear_has_title();
  inline void set_has_content();
  inline void clear_has_content();
  inline void set_has_acktime();
  inline void clear_has_acktime();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* msginfo_;
  ::std::string* title_;
  ::std::string* content_;
  ::google::protobuf::int32 acktime_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];

  friend void  protobuf_AddDesc_ReadMail_5fAck_2eproto();
  friend void protobuf_AssignDesc_ReadMail_5fAck_2eproto();
  friend void protobuf_ShutdownFile_ReadMail_5fAck_2eproto();

  void InitAsDefaultInstance();
  static ReadMail_Ack* default_instance_;
};
// ===================================================================


// ===================================================================

// ReadMail_Ack

// optional string msgInfo = 1;
inline bool ReadMail_Ack::has_msginfo() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ReadMail_Ack::set_has_msginfo() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ReadMail_Ack::clear_has_msginfo() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ReadMail_Ack::clear_msginfo() {
  if (msginfo_ != &::google::protobuf::internal::kEmptyString) {
    msginfo_->clear();
  }
  clear_has_msginfo();
}
inline const ::std::string& ReadMail_Ack::msginfo() const {
  return *msginfo_;
}
inline void ReadMail_Ack::set_msginfo(const ::std::string& value) {
  set_has_msginfo();
  if (msginfo_ == &::google::protobuf::internal::kEmptyString) {
    msginfo_ = new ::std::string;
  }
  msginfo_->assign(value);
}
inline void ReadMail_Ack::set_msginfo(const char* value) {
  set_has_msginfo();
  if (msginfo_ == &::google::protobuf::internal::kEmptyString) {
    msginfo_ = new ::std::string;
  }
  msginfo_->assign(value);
}
inline void ReadMail_Ack::set_msginfo(const char* value, size_t size) {
  set_has_msginfo();
  if (msginfo_ == &::google::protobuf::internal::kEmptyString) {
    msginfo_ = new ::std::string;
  }
  msginfo_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* ReadMail_Ack::mutable_msginfo() {
  set_has_msginfo();
  if (msginfo_ == &::google::protobuf::internal::kEmptyString) {
    msginfo_ = new ::std::string;
  }
  return msginfo_;
}
inline ::std::string* ReadMail_Ack::release_msginfo() {
  clear_has_msginfo();
  if (msginfo_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = msginfo_;
    msginfo_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void ReadMail_Ack::set_allocated_msginfo(::std::string* msginfo) {
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

// optional string title = 2;
inline bool ReadMail_Ack::has_title() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ReadMail_Ack::set_has_title() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ReadMail_Ack::clear_has_title() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ReadMail_Ack::clear_title() {
  if (title_ != &::google::protobuf::internal::kEmptyString) {
    title_->clear();
  }
  clear_has_title();
}
inline const ::std::string& ReadMail_Ack::title() const {
  return *title_;
}
inline void ReadMail_Ack::set_title(const ::std::string& value) {
  set_has_title();
  if (title_ == &::google::protobuf::internal::kEmptyString) {
    title_ = new ::std::string;
  }
  title_->assign(value);
}
inline void ReadMail_Ack::set_title(const char* value) {
  set_has_title();
  if (title_ == &::google::protobuf::internal::kEmptyString) {
    title_ = new ::std::string;
  }
  title_->assign(value);
}
inline void ReadMail_Ack::set_title(const char* value, size_t size) {
  set_has_title();
  if (title_ == &::google::protobuf::internal::kEmptyString) {
    title_ = new ::std::string;
  }
  title_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* ReadMail_Ack::mutable_title() {
  set_has_title();
  if (title_ == &::google::protobuf::internal::kEmptyString) {
    title_ = new ::std::string;
  }
  return title_;
}
inline ::std::string* ReadMail_Ack::release_title() {
  clear_has_title();
  if (title_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = title_;
    title_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void ReadMail_Ack::set_allocated_title(::std::string* title) {
  if (title_ != &::google::protobuf::internal::kEmptyString) {
    delete title_;
  }
  if (title) {
    set_has_title();
    title_ = title;
  } else {
    clear_has_title();
    title_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional string content = 3;
inline bool ReadMail_Ack::has_content() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void ReadMail_Ack::set_has_content() {
  _has_bits_[0] |= 0x00000004u;
}
inline void ReadMail_Ack::clear_has_content() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void ReadMail_Ack::clear_content() {
  if (content_ != &::google::protobuf::internal::kEmptyString) {
    content_->clear();
  }
  clear_has_content();
}
inline const ::std::string& ReadMail_Ack::content() const {
  return *content_;
}
inline void ReadMail_Ack::set_content(const ::std::string& value) {
  set_has_content();
  if (content_ == &::google::protobuf::internal::kEmptyString) {
    content_ = new ::std::string;
  }
  content_->assign(value);
}
inline void ReadMail_Ack::set_content(const char* value) {
  set_has_content();
  if (content_ == &::google::protobuf::internal::kEmptyString) {
    content_ = new ::std::string;
  }
  content_->assign(value);
}
inline void ReadMail_Ack::set_content(const char* value, size_t size) {
  set_has_content();
  if (content_ == &::google::protobuf::internal::kEmptyString) {
    content_ = new ::std::string;
  }
  content_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* ReadMail_Ack::mutable_content() {
  set_has_content();
  if (content_ == &::google::protobuf::internal::kEmptyString) {
    content_ = new ::std::string;
  }
  return content_;
}
inline ::std::string* ReadMail_Ack::release_content() {
  clear_has_content();
  if (content_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = content_;
    content_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void ReadMail_Ack::set_allocated_content(::std::string* content) {
  if (content_ != &::google::protobuf::internal::kEmptyString) {
    delete content_;
  }
  if (content) {
    set_has_content();
    content_ = content;
  } else {
    clear_has_content();
    content_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required int32 acktime = 4;
inline bool ReadMail_Ack::has_acktime() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void ReadMail_Ack::set_has_acktime() {
  _has_bits_[0] |= 0x00000008u;
}
inline void ReadMail_Ack::clear_has_acktime() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void ReadMail_Ack::clear_acktime() {
  acktime_ = 0;
  clear_has_acktime();
}
inline ::google::protobuf::int32 ReadMail_Ack::acktime() const {
  return acktime_;
}
inline void ReadMail_Ack::set_acktime(::google::protobuf::int32 value) {
  set_has_acktime();
  acktime_ = value;
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

#endif  // PROTOBUF_ReadMail_5fAck_2eproto__INCLUDED