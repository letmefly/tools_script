// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: DelFriend_Req.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "DelFriend_Req.pb.h"

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

const ::google::protobuf::Descriptor* DelFriend_Req_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  DelFriend_Req_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_DelFriend_5fReq_2eproto() {
  protobuf_AddDesc_DelFriend_5fReq_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "DelFriend_Req.proto");
  GOOGLE_CHECK(file != NULL);
  DelFriend_Req_descriptor_ = file->message_type(0);
  static const int DelFriend_Req_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DelFriend_Req, token_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DelFriend_Req, playerid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DelFriend_Req, type_),
  };
  DelFriend_Req_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      DelFriend_Req_descriptor_,
      DelFriend_Req::default_instance_,
      DelFriend_Req_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DelFriend_Req, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DelFriend_Req, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(DelFriend_Req));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_DelFriend_5fReq_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    DelFriend_Req_descriptor_, &DelFriend_Req::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_DelFriend_5fReq_2eproto() {
  delete DelFriend_Req::default_instance_;
  delete DelFriend_Req_reflection_;
}

void protobuf_AddDesc_DelFriend_5fReq_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\023DelFriend_Req.proto\022\010protobuf\">\n\rDelFr"
    "iend_Req\022\r\n\005token\030\001 \002(\t\022\020\n\010playerId\030\002 \002("
    "\005\022\014\n\004type\030\003 \002(\005", 95);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "DelFriend_Req.proto", &protobuf_RegisterTypes);
  DelFriend_Req::default_instance_ = new DelFriend_Req();
  DelFriend_Req::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_DelFriend_5fReq_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_DelFriend_5fReq_2eproto {
  StaticDescriptorInitializer_DelFriend_5fReq_2eproto() {
    protobuf_AddDesc_DelFriend_5fReq_2eproto();
  }
} static_descriptor_initializer_DelFriend_5fReq_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int DelFriend_Req::kTokenFieldNumber;
const int DelFriend_Req::kPlayerIdFieldNumber;
const int DelFriend_Req::kTypeFieldNumber;
#endif  // !_MSC_VER

DelFriend_Req::DelFriend_Req()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void DelFriend_Req::InitAsDefaultInstance() {
}

DelFriend_Req::DelFriend_Req(const DelFriend_Req& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void DelFriend_Req::SharedCtor() {
  _cached_size_ = 0;
  token_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  playerid_ = 0;
  type_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

DelFriend_Req::~DelFriend_Req() {
  SharedDtor();
}

void DelFriend_Req::SharedDtor() {
  if (token_ != &::google::protobuf::internal::kEmptyString) {
    delete token_;
  }
  if (this != default_instance_) {
  }
}

void DelFriend_Req::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* DelFriend_Req::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return DelFriend_Req_descriptor_;
}

const DelFriend_Req& DelFriend_Req::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_DelFriend_5fReq_2eproto();
  return *default_instance_;
}

DelFriend_Req* DelFriend_Req::default_instance_ = NULL;

DelFriend_Req* DelFriend_Req::New() const {
  return new DelFriend_Req;
}

void DelFriend_Req::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_token()) {
      if (token_ != &::google::protobuf::internal::kEmptyString) {
        token_->clear();
      }
    }
    playerid_ = 0;
    type_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool DelFriend_Req::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string token = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_token()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->token().data(), this->token().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_playerId;
        break;
      }

      // required int32 playerId = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_playerId:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &playerid_)));
          set_has_playerid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_type;
        break;
      }

      // required int32 type = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_type:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &type_)));
          set_has_type();
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

void DelFriend_Req::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required string token = 1;
  if (has_token()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->token().data(), this->token().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->token(), output);
  }

  // required int32 playerId = 2;
  if (has_playerid()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->playerid(), output);
  }

  // required int32 type = 3;
  if (has_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->type(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* DelFriend_Req::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required string token = 1;
  if (has_token()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->token().data(), this->token().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->token(), target);
  }

  // required int32 playerId = 2;
  if (has_playerid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->playerid(), target);
  }

  // required int32 type = 3;
  if (has_type()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->type(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int DelFriend_Req::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string token = 1;
    if (has_token()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->token());
    }

    // required int32 playerId = 2;
    if (has_playerid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->playerid());
    }

    // required int32 type = 3;
    if (has_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->type());
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

void DelFriend_Req::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const DelFriend_Req* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const DelFriend_Req*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void DelFriend_Req::MergeFrom(const DelFriend_Req& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_token()) {
      set_token(from.token());
    }
    if (from.has_playerid()) {
      set_playerid(from.playerid());
    }
    if (from.has_type()) {
      set_type(from.type());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void DelFriend_Req::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void DelFriend_Req::CopyFrom(const DelFriend_Req& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool DelFriend_Req::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000007) != 0x00000007) return false;

  return true;
}

void DelFriend_Req::Swap(DelFriend_Req* other) {
  if (other != this) {
    std::swap(token_, other->token_);
    std::swap(playerid_, other->playerid_);
    std::swap(type_, other->type_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata DelFriend_Req::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = DelFriend_Req_descriptor_;
  metadata.reflection = DelFriend_Req_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace protobuf

// @@protoc_insertion_point(global_scope)
