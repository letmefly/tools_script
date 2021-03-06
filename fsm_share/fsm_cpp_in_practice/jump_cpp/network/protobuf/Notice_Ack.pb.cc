// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Notice_Ack.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "Notice_Ack.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace protobuf {

namespace {

const ::google::protobuf::Descriptor* Notice_Ack_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Notice_Ack_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_Notice_5fAck_2eproto() {
  protobuf_AddDesc_Notice_5fAck_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "Notice_Ack.proto");
  GOOGLE_CHECK(file != NULL);
  Notice_Ack_descriptor_ = file->message_type(0);
  static const int Notice_Ack_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Notice_Ack, msginfo_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Notice_Ack, contents_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Notice_Ack, imgurl_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Notice_Ack, acktime_),
  };
  Notice_Ack_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Notice_Ack_descriptor_,
      Notice_Ack::default_instance_,
      Notice_Ack_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Notice_Ack, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Notice_Ack, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Notice_Ack));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_Notice_5fAck_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Notice_Ack_descriptor_, &Notice_Ack::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_Notice_5fAck_2eproto() {
  delete Notice_Ack::default_instance_;
  delete Notice_Ack_reflection_;
}

void protobuf_AddDesc_Notice_5fAck_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\020Notice_Ack.proto\022\010protobuf\"P\n\nNotice_A"
    "ck\022\017\n\007msgInfo\030\001 \001(\t\022\020\n\010contents\030\002 \001(\t\022\016\n"
    "\006imgUrl\030\003 \001(\t\022\017\n\007acktime\030\004 \001(\005", 110);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "Notice_Ack.proto", &protobuf_RegisterTypes);
  Notice_Ack::default_instance_ = new Notice_Ack();
  Notice_Ack::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_Notice_5fAck_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_Notice_5fAck_2eproto {
  StaticDescriptorInitializer_Notice_5fAck_2eproto() {
    protobuf_AddDesc_Notice_5fAck_2eproto();
  }
} static_descriptor_initializer_Notice_5fAck_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int Notice_Ack::kMsgInfoFieldNumber;
const int Notice_Ack::kContentsFieldNumber;
const int Notice_Ack::kImgUrlFieldNumber;
const int Notice_Ack::kAcktimeFieldNumber;
#endif  // !_MSC_VER

Notice_Ack::Notice_Ack()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void Notice_Ack::InitAsDefaultInstance() {
}

Notice_Ack::Notice_Ack(const Notice_Ack& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void Notice_Ack::SharedCtor() {
  _cached_size_ = 0;
  msginfo_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  contents_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  imgurl_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  acktime_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Notice_Ack::~Notice_Ack() {
  SharedDtor();
}

void Notice_Ack::SharedDtor() {
  if (msginfo_ != &::google::protobuf::internal::kEmptyString) {
    delete msginfo_;
  }
  if (contents_ != &::google::protobuf::internal::kEmptyString) {
    delete contents_;
  }
  if (imgurl_ != &::google::protobuf::internal::kEmptyString) {
    delete imgurl_;
  }
  if (this != default_instance_) {
  }
}

void Notice_Ack::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Notice_Ack::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Notice_Ack_descriptor_;
}

const Notice_Ack& Notice_Ack::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_Notice_5fAck_2eproto();
  return *default_instance_;
}

Notice_Ack* Notice_Ack::default_instance_ = NULL;

Notice_Ack* Notice_Ack::New() const {
  return new Notice_Ack;
}

void Notice_Ack::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_msginfo()) {
      if (msginfo_ != &::google::protobuf::internal::kEmptyString) {
        msginfo_->clear();
      }
    }
    if (has_contents()) {
      if (contents_ != &::google::protobuf::internal::kEmptyString) {
        contents_->clear();
      }
    }
    if (has_imgurl()) {
      if (imgurl_ != &::google::protobuf::internal::kEmptyString) {
        imgurl_->clear();
      }
    }
    acktime_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Notice_Ack::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string msgInfo = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_msginfo()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->msginfo().data(), this->msginfo().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_contents;
        break;
      }

      // optional string contents = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_contents:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_contents()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->contents().data(), this->contents().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_imgUrl;
        break;
      }

      // optional string imgUrl = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_imgUrl:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_imgurl()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->imgurl().data(), this->imgurl().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_acktime;
        break;
      }

      // optional int32 acktime = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_acktime:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &acktime_)));
          set_has_acktime();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void Notice_Ack::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional string msgInfo = 1;
  if (has_msginfo()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->msginfo().data(), this->msginfo().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->msginfo(), output);
  }

  // optional string contents = 2;
  if (has_contents()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->contents().data(), this->contents().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->contents(), output);
  }

  // optional string imgUrl = 3;
  if (has_imgurl()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->imgurl().data(), this->imgurl().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      3, this->imgurl(), output);
  }

  // optional int32 acktime = 4;
  if (has_acktime()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->acktime(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* Notice_Ack::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional string msgInfo = 1;
  if (has_msginfo()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->msginfo().data(), this->msginfo().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->msginfo(), target);
  }

  // optional string contents = 2;
  if (has_contents()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->contents().data(), this->contents().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->contents(), target);
  }

  // optional string imgUrl = 3;
  if (has_imgurl()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->imgurl().data(), this->imgurl().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->imgurl(), target);
  }

  // optional int32 acktime = 4;
  if (has_acktime()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(4, this->acktime(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int Notice_Ack::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional string msgInfo = 1;
    if (has_msginfo()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->msginfo());
    }

    // optional string contents = 2;
    if (has_contents()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->contents());
    }

    // optional string imgUrl = 3;
    if (has_imgurl()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->imgurl());
    }

    // optional int32 acktime = 4;
    if (has_acktime()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->acktime());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Notice_Ack::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Notice_Ack* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Notice_Ack*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Notice_Ack::MergeFrom(const Notice_Ack& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_msginfo()) {
      set_msginfo(from.msginfo());
    }
    if (from.has_contents()) {
      set_contents(from.contents());
    }
    if (from.has_imgurl()) {
      set_imgurl(from.imgurl());
    }
    if (from.has_acktime()) {
      set_acktime(from.acktime());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Notice_Ack::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Notice_Ack::CopyFrom(const Notice_Ack& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Notice_Ack::IsInitialized() const {

  return true;
}

void Notice_Ack::Swap(Notice_Ack* other) {
  if (other != this) {
    std::swap(msginfo_, other->msginfo_);
    std::swap(contents_, other->contents_);
    std::swap(imgurl_, other->imgurl_);
    std::swap(acktime_, other->acktime_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Notice_Ack::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Notice_Ack_descriptor_;
  metadata.reflection = Notice_Ack_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace protobuf

// @@protoc_insertion_point(global_scope)
