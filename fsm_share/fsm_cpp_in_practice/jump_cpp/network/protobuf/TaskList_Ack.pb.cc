// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: TaskList_Ack.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "TaskList_Ack.pb.h"

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

const ::google::protobuf::Descriptor* TaskList_Ack_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  TaskList_Ack_reflection_ = NULL;
const ::google::protobuf::Descriptor* TaskList_Ack_TaskList_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  TaskList_Ack_TaskList_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_TaskList_5fAck_2eproto() {
  protobuf_AddDesc_TaskList_5fAck_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "TaskList_Ack.proto");
  GOOGLE_CHECK(file != NULL);
  TaskList_Ack_descriptor_ = file->message_type(0);
  static const int TaskList_Ack_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TaskList_Ack, msginfo_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TaskList_Ack, tasklist_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TaskList_Ack, acktime_),
  };
  TaskList_Ack_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      TaskList_Ack_descriptor_,
      TaskList_Ack::default_instance_,
      TaskList_Ack_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TaskList_Ack, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TaskList_Ack, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(TaskList_Ack));
  TaskList_Ack_TaskList_descriptor_ = TaskList_Ack_descriptor_->nested_type(0);
  static const int TaskList_Ack_TaskList_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TaskList_Ack_TaskList, taskid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TaskList_Ack_TaskList, tasktype_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TaskList_Ack_TaskList, present_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TaskList_Ack_TaskList, total_),
  };
  TaskList_Ack_TaskList_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      TaskList_Ack_TaskList_descriptor_,
      TaskList_Ack_TaskList::default_instance_,
      TaskList_Ack_TaskList_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TaskList_Ack_TaskList, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TaskList_Ack_TaskList, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(TaskList_Ack_TaskList));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_TaskList_5fAck_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    TaskList_Ack_descriptor_, &TaskList_Ack::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    TaskList_Ack_TaskList_descriptor_, &TaskList_Ack_TaskList::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_TaskList_5fAck_2eproto() {
  delete TaskList_Ack::default_instance_;
  delete TaskList_Ack_reflection_;
  delete TaskList_Ack_TaskList::default_instance_;
  delete TaskList_Ack_TaskList_reflection_;
}

void protobuf_AddDesc_TaskList_5fAck_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\022TaskList_Ack.proto\022\010protobuf\"\261\001\n\014TaskL"
    "ist_Ack\022\017\n\007msgInfo\030\001 \001(\t\0221\n\010tasklist\030\002 \003"
    "(\0132\037.protobuf.TaskList_Ack.TaskList\022\017\n\007a"
    "cktime\030\003 \002(\005\032L\n\010TaskList\022\016\n\006taskid\030\001 \001(\005"
    "\022\020\n\010tasktype\030\002 \001(\005\022\017\n\007present\030\003 \001(\005\022\r\n\005t"
    "otal\030\004 \001(\005", 210);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "TaskList_Ack.proto", &protobuf_RegisterTypes);
  TaskList_Ack::default_instance_ = new TaskList_Ack();
  TaskList_Ack_TaskList::default_instance_ = new TaskList_Ack_TaskList();
  TaskList_Ack::default_instance_->InitAsDefaultInstance();
  TaskList_Ack_TaskList::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_TaskList_5fAck_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_TaskList_5fAck_2eproto {
  StaticDescriptorInitializer_TaskList_5fAck_2eproto() {
    protobuf_AddDesc_TaskList_5fAck_2eproto();
  }
} static_descriptor_initializer_TaskList_5fAck_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int TaskList_Ack_TaskList::kTaskidFieldNumber;
const int TaskList_Ack_TaskList::kTasktypeFieldNumber;
const int TaskList_Ack_TaskList::kPresentFieldNumber;
const int TaskList_Ack_TaskList::kTotalFieldNumber;
#endif  // !_MSC_VER

TaskList_Ack_TaskList::TaskList_Ack_TaskList()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void TaskList_Ack_TaskList::InitAsDefaultInstance() {
}

TaskList_Ack_TaskList::TaskList_Ack_TaskList(const TaskList_Ack_TaskList& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void TaskList_Ack_TaskList::SharedCtor() {
  _cached_size_ = 0;
  taskid_ = 0;
  tasktype_ = 0;
  present_ = 0;
  total_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

TaskList_Ack_TaskList::~TaskList_Ack_TaskList() {
  SharedDtor();
}

void TaskList_Ack_TaskList::SharedDtor() {
  if (this != default_instance_) {
  }
}

void TaskList_Ack_TaskList::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* TaskList_Ack_TaskList::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return TaskList_Ack_TaskList_descriptor_;
}

const TaskList_Ack_TaskList& TaskList_Ack_TaskList::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_TaskList_5fAck_2eproto();
  return *default_instance_;
}

TaskList_Ack_TaskList* TaskList_Ack_TaskList::default_instance_ = NULL;

TaskList_Ack_TaskList* TaskList_Ack_TaskList::New() const {
  return new TaskList_Ack_TaskList;
}

void TaskList_Ack_TaskList::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    taskid_ = 0;
    tasktype_ = 0;
    present_ = 0;
    total_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool TaskList_Ack_TaskList::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 taskid = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &taskid_)));
          set_has_taskid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_tasktype;
        break;
      }

      // optional int32 tasktype = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_tasktype:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &tasktype_)));
          set_has_tasktype();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_present;
        break;
      }

      // optional int32 present = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_present:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &present_)));
          set_has_present();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_total;
        break;
      }

      // optional int32 total = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_total:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &total_)));
          set_has_total();
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

void TaskList_Ack_TaskList::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 taskid = 1;
  if (has_taskid()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->taskid(), output);
  }

  // optional int32 tasktype = 2;
  if (has_tasktype()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->tasktype(), output);
  }

  // optional int32 present = 3;
  if (has_present()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->present(), output);
  }

  // optional int32 total = 4;
  if (has_total()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->total(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* TaskList_Ack_TaskList::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int32 taskid = 1;
  if (has_taskid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->taskid(), target);
  }

  // optional int32 tasktype = 2;
  if (has_tasktype()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->tasktype(), target);
  }

  // optional int32 present = 3;
  if (has_present()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->present(), target);
  }

  // optional int32 total = 4;
  if (has_total()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(4, this->total(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int TaskList_Ack_TaskList::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 taskid = 1;
    if (has_taskid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->taskid());
    }

    // optional int32 tasktype = 2;
    if (has_tasktype()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->tasktype());
    }

    // optional int32 present = 3;
    if (has_present()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->present());
    }

    // optional int32 total = 4;
    if (has_total()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->total());
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

void TaskList_Ack_TaskList::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const TaskList_Ack_TaskList* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const TaskList_Ack_TaskList*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void TaskList_Ack_TaskList::MergeFrom(const TaskList_Ack_TaskList& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_taskid()) {
      set_taskid(from.taskid());
    }
    if (from.has_tasktype()) {
      set_tasktype(from.tasktype());
    }
    if (from.has_present()) {
      set_present(from.present());
    }
    if (from.has_total()) {
      set_total(from.total());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void TaskList_Ack_TaskList::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void TaskList_Ack_TaskList::CopyFrom(const TaskList_Ack_TaskList& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TaskList_Ack_TaskList::IsInitialized() const {

  return true;
}

void TaskList_Ack_TaskList::Swap(TaskList_Ack_TaskList* other) {
  if (other != this) {
    std::swap(taskid_, other->taskid_);
    std::swap(tasktype_, other->tasktype_);
    std::swap(present_, other->present_);
    std::swap(total_, other->total_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata TaskList_Ack_TaskList::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = TaskList_Ack_TaskList_descriptor_;
  metadata.reflection = TaskList_Ack_TaskList_reflection_;
  return metadata;
}


// -------------------------------------------------------------------

#ifndef _MSC_VER
const int TaskList_Ack::kMsgInfoFieldNumber;
const int TaskList_Ack::kTasklistFieldNumber;
const int TaskList_Ack::kAcktimeFieldNumber;
#endif  // !_MSC_VER

TaskList_Ack::TaskList_Ack()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void TaskList_Ack::InitAsDefaultInstance() {
}

TaskList_Ack::TaskList_Ack(const TaskList_Ack& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void TaskList_Ack::SharedCtor() {
  _cached_size_ = 0;
  msginfo_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  acktime_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

TaskList_Ack::~TaskList_Ack() {
  SharedDtor();
}

void TaskList_Ack::SharedDtor() {
  if (msginfo_ != &::google::protobuf::internal::kEmptyString) {
    delete msginfo_;
  }
  if (this != default_instance_) {
  }
}

void TaskList_Ack::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* TaskList_Ack::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return TaskList_Ack_descriptor_;
}

const TaskList_Ack& TaskList_Ack::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_TaskList_5fAck_2eproto();
  return *default_instance_;
}

TaskList_Ack* TaskList_Ack::default_instance_ = NULL;

TaskList_Ack* TaskList_Ack::New() const {
  return new TaskList_Ack;
}

void TaskList_Ack::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_msginfo()) {
      if (msginfo_ != &::google::protobuf::internal::kEmptyString) {
        msginfo_->clear();
      }
    }
    acktime_ = 0;
  }
  tasklist_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool TaskList_Ack::MergePartialFromCodedStream(
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
        if (input->ExpectTag(18)) goto parse_tasklist;
        break;
      }

      // repeated .protobuf.TaskList_Ack.TaskList tasklist = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_tasklist:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_tasklist()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_tasklist;
        if (input->ExpectTag(24)) goto parse_acktime;
        break;
      }

      // required int32 acktime = 3;
      case 3: {
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

void TaskList_Ack::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional string msgInfo = 1;
  if (has_msginfo()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->msginfo().data(), this->msginfo().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->msginfo(), output);
  }

  // repeated .protobuf.TaskList_Ack.TaskList tasklist = 2;
  for (int i = 0; i < this->tasklist_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->tasklist(i), output);
  }

  // required int32 acktime = 3;
  if (has_acktime()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->acktime(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* TaskList_Ack::SerializeWithCachedSizesToArray(
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

  // repeated .protobuf.TaskList_Ack.TaskList tasklist = 2;
  for (int i = 0; i < this->tasklist_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        2, this->tasklist(i), target);
  }

  // required int32 acktime = 3;
  if (has_acktime()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->acktime(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int TaskList_Ack::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional string msgInfo = 1;
    if (has_msginfo()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->msginfo());
    }

    // required int32 acktime = 3;
    if (has_acktime()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->acktime());
    }

  }
  // repeated .protobuf.TaskList_Ack.TaskList tasklist = 2;
  total_size += 1 * this->tasklist_size();
  for (int i = 0; i < this->tasklist_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->tasklist(i));
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

void TaskList_Ack::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const TaskList_Ack* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const TaskList_Ack*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void TaskList_Ack::MergeFrom(const TaskList_Ack& from) {
  GOOGLE_CHECK_NE(&from, this);
  tasklist_.MergeFrom(from.tasklist_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_msginfo()) {
      set_msginfo(from.msginfo());
    }
    if (from.has_acktime()) {
      set_acktime(from.acktime());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void TaskList_Ack::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void TaskList_Ack::CopyFrom(const TaskList_Ack& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TaskList_Ack::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000004) != 0x00000004) return false;

  return true;
}

void TaskList_Ack::Swap(TaskList_Ack* other) {
  if (other != this) {
    std::swap(msginfo_, other->msginfo_);
    tasklist_.Swap(&other->tasklist_);
    std::swap(acktime_, other->acktime_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata TaskList_Ack::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = TaskList_Ack_descriptor_;
  metadata.reflection = TaskList_Ack_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace protobuf

// @@protoc_insertion_point(global_scope)