// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: DeviceMessage.proto

#include "DeviceMessage.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
class DeviceMessageDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<DeviceMessage> _instance;
} _DeviceMessage_default_instance_;
static void InitDefaultsscc_info_DeviceMessage_DeviceMessage_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_DeviceMessage_default_instance_;
    new (ptr) ::DeviceMessage();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::DeviceMessage::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_DeviceMessage_DeviceMessage_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_DeviceMessage_DeviceMessage_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_DeviceMessage_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_DeviceMessage_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_DeviceMessage_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_DeviceMessage_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::DeviceMessage, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::DeviceMessage, type_),
  PROTOBUF_FIELD_OFFSET(::DeviceMessage, body_),
  PROTOBUF_FIELD_OFFSET(::DeviceMessage, created_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::DeviceMessage)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_DeviceMessage_default_instance_),
};

const char descriptor_table_protodef_DeviceMessage_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\023DeviceMessage.proto\"<\n\rDeviceMessage\022\014"
  "\n\004type\030\001 \001(\t\022\014\n\004body\030\002 \001(\014\022\017\n\007created\030\003 "
  "\001(\003B>\n(com.sdpm.smart.farming.devicemgr."
  "messageB\022DeviceMessageProtob\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_DeviceMessage_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_DeviceMessage_2eproto_sccs[1] = {
  &scc_info_DeviceMessage_DeviceMessage_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_DeviceMessage_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_DeviceMessage_2eproto = {
  false, false, descriptor_table_protodef_DeviceMessage_2eproto, "DeviceMessage.proto", 155,
  &descriptor_table_DeviceMessage_2eproto_once, descriptor_table_DeviceMessage_2eproto_sccs, descriptor_table_DeviceMessage_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_DeviceMessage_2eproto::offsets,
  file_level_metadata_DeviceMessage_2eproto, 1, file_level_enum_descriptors_DeviceMessage_2eproto, file_level_service_descriptors_DeviceMessage_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_DeviceMessage_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_DeviceMessage_2eproto)), true);

// ===================================================================

void DeviceMessage::InitAsDefaultInstance() {
}
class DeviceMessage::_Internal {
 public:
};

DeviceMessage::DeviceMessage(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:DeviceMessage)
}
DeviceMessage::DeviceMessage(const DeviceMessage& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  type_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_type().empty()) {
    type_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_type(),
      GetArena());
  }
  body_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_body().empty()) {
    body_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_body(),
      GetArena());
  }
  created_ = from.created_;
  // @@protoc_insertion_point(copy_constructor:DeviceMessage)
}

void DeviceMessage::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_DeviceMessage_DeviceMessage_2eproto.base);
  type_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  body_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  created_ = PROTOBUF_LONGLONG(0);
}

DeviceMessage::~DeviceMessage() {
  // @@protoc_insertion_point(destructor:DeviceMessage)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void DeviceMessage::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  type_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  body_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void DeviceMessage::ArenaDtor(void* object) {
  DeviceMessage* _this = reinterpret_cast< DeviceMessage* >(object);
  (void)_this;
}
void DeviceMessage::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void DeviceMessage::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const DeviceMessage& DeviceMessage::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_DeviceMessage_DeviceMessage_2eproto.base);
  return *internal_default_instance();
}


void DeviceMessage::Clear() {
// @@protoc_insertion_point(message_clear_start:DeviceMessage)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  type_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  body_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  created_ = PROTOBUF_LONGLONG(0);
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* DeviceMessage::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string type = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_type();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "DeviceMessage.type"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bytes body = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_body();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int64 created = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          created_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* DeviceMessage::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:DeviceMessage)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string type = 1;
  if (this->type().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_type().data(), static_cast<int>(this->_internal_type().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "DeviceMessage.type");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_type(), target);
  }

  // bytes body = 2;
  if (this->body().size() > 0) {
    target = stream->WriteBytesMaybeAliased(
        2, this->_internal_body(), target);
  }

  // int64 created = 3;
  if (this->created() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt64ToArray(3, this->_internal_created(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:DeviceMessage)
  return target;
}

size_t DeviceMessage::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:DeviceMessage)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string type = 1;
  if (this->type().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_type());
  }

  // bytes body = 2;
  if (this->body().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_body());
  }

  // int64 created = 3;
  if (this->created() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int64Size(
        this->_internal_created());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void DeviceMessage::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:DeviceMessage)
  GOOGLE_DCHECK_NE(&from, this);
  const DeviceMessage* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<DeviceMessage>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:DeviceMessage)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:DeviceMessage)
    MergeFrom(*source);
  }
}

void DeviceMessage::MergeFrom(const DeviceMessage& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:DeviceMessage)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.type().size() > 0) {
    _internal_set_type(from._internal_type());
  }
  if (from.body().size() > 0) {
    _internal_set_body(from._internal_body());
  }
  if (from.created() != 0) {
    _internal_set_created(from._internal_created());
  }
}

void DeviceMessage::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:DeviceMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void DeviceMessage::CopyFrom(const DeviceMessage& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:DeviceMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool DeviceMessage::IsInitialized() const {
  return true;
}

void DeviceMessage::InternalSwap(DeviceMessage* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  type_.Swap(&other->type_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  body_.Swap(&other->body_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  swap(created_, other->created_);
}

::PROTOBUF_NAMESPACE_ID::Metadata DeviceMessage::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::DeviceMessage* Arena::CreateMaybeMessage< ::DeviceMessage >(Arena* arena) {
  return Arena::CreateMessageInternal< ::DeviceMessage >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
