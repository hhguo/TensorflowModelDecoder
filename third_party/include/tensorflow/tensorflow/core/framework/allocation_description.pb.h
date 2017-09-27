// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow/core/framework/allocation_description.proto

#ifndef PROTOBUF_tensorflow_2fcore_2fframework_2fallocation_5fdescription_2eproto__INCLUDED
#define PROTOBUF_tensorflow_2fcore_2fframework_2fallocation_5fdescription_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3003000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3003002 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
namespace tensorflow {
class AllocationDescription;
class AllocationDescriptionDefaultTypeInternal;
extern AllocationDescriptionDefaultTypeInternal _AllocationDescription_default_instance_;
}  // namespace tensorflow

namespace tensorflow {

namespace protobuf_tensorflow_2fcore_2fframework_2fallocation_5fdescription_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[];
  static const ::google::protobuf::uint32 offsets[];
  static void InitDefaultsImpl();
  static void Shutdown();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_tensorflow_2fcore_2fframework_2fallocation_5fdescription_2eproto

// ===================================================================

class AllocationDescription : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:tensorflow.AllocationDescription) */ {
 public:
  AllocationDescription();
  virtual ~AllocationDescription();

  AllocationDescription(const AllocationDescription& from);

  inline AllocationDescription& operator=(const AllocationDescription& from) {
    CopyFrom(from);
    return *this;
  }

  inline ::google::protobuf::Arena* GetArena() const PROTOBUF_FINAL {
    return GetArenaNoVirtual();
  }
  inline void* GetMaybeArenaPointer() const PROTOBUF_FINAL {
    return MaybeArenaPtr();
  }
  static const ::google::protobuf::Descriptor* descriptor();
  static const AllocationDescription& default_instance();

  static inline const AllocationDescription* internal_default_instance() {
    return reinterpret_cast<const AllocationDescription*>(
               &_AllocationDescription_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void UnsafeArenaSwap(AllocationDescription* other);
  void Swap(AllocationDescription* other);

  // implements Message ----------------------------------------------

  inline AllocationDescription* New() const PROTOBUF_FINAL { return New(NULL); }

  AllocationDescription* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const AllocationDescription& from);
  void MergeFrom(const AllocationDescription& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(AllocationDescription* other);
  protected:
  explicit AllocationDescription(::google::protobuf::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::google::protobuf::Arena* arena);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string allocator_name = 3;
  void clear_allocator_name();
  static const int kAllocatorNameFieldNumber = 3;
  const ::std::string& allocator_name() const;
  void set_allocator_name(const ::std::string& value);
  void set_allocator_name(const char* value);
  void set_allocator_name(const char* value, size_t size);
  ::std::string* mutable_allocator_name();
  ::std::string* release_allocator_name();
  void set_allocated_allocator_name(::std::string* allocator_name);
  ::std::string* unsafe_arena_release_allocator_name();
  void unsafe_arena_set_allocated_allocator_name(
      ::std::string* allocator_name);

  // int64 requested_bytes = 1;
  void clear_requested_bytes();
  static const int kRequestedBytesFieldNumber = 1;
  ::google::protobuf::int64 requested_bytes() const;
  void set_requested_bytes(::google::protobuf::int64 value);

  // int64 allocated_bytes = 2;
  void clear_allocated_bytes();
  static const int kAllocatedBytesFieldNumber = 2;
  ::google::protobuf::int64 allocated_bytes() const;
  void set_allocated_bytes(::google::protobuf::int64 value);

  // int64 allocation_id = 4;
  void clear_allocation_id();
  static const int kAllocationIdFieldNumber = 4;
  ::google::protobuf::int64 allocation_id() const;
  void set_allocation_id(::google::protobuf::int64 value);

  // uint64 ptr = 6;
  void clear_ptr();
  static const int kPtrFieldNumber = 6;
  ::google::protobuf::uint64 ptr() const;
  void set_ptr(::google::protobuf::uint64 value);

  // bool has_single_reference = 5;
  void clear_has_single_reference();
  static const int kHasSingleReferenceFieldNumber = 5;
  bool has_single_reference() const;
  void set_has_single_reference(bool value);

  // @@protoc_insertion_point(class_scope:tensorflow.AllocationDescription)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  friend class ::google::protobuf::Arena;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::google::protobuf::internal::ArenaStringPtr allocator_name_;
  ::google::protobuf::int64 requested_bytes_;
  ::google::protobuf::int64 allocated_bytes_;
  ::google::protobuf::int64 allocation_id_;
  ::google::protobuf::uint64 ptr_;
  bool has_single_reference_;
  mutable int _cached_size_;
  friend struct protobuf_tensorflow_2fcore_2fframework_2fallocation_5fdescription_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// AllocationDescription

// int64 requested_bytes = 1;
inline void AllocationDescription::clear_requested_bytes() {
  requested_bytes_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 AllocationDescription::requested_bytes() const {
  // @@protoc_insertion_point(field_get:tensorflow.AllocationDescription.requested_bytes)
  return requested_bytes_;
}
inline void AllocationDescription::set_requested_bytes(::google::protobuf::int64 value) {
  
  requested_bytes_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.AllocationDescription.requested_bytes)
}

// int64 allocated_bytes = 2;
inline void AllocationDescription::clear_allocated_bytes() {
  allocated_bytes_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 AllocationDescription::allocated_bytes() const {
  // @@protoc_insertion_point(field_get:tensorflow.AllocationDescription.allocated_bytes)
  return allocated_bytes_;
}
inline void AllocationDescription::set_allocated_bytes(::google::protobuf::int64 value) {
  
  allocated_bytes_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.AllocationDescription.allocated_bytes)
}

// string allocator_name = 3;
inline void AllocationDescription::clear_allocator_name() {
  allocator_name_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline const ::std::string& AllocationDescription::allocator_name() const {
  // @@protoc_insertion_point(field_get:tensorflow.AllocationDescription.allocator_name)
  return allocator_name_.Get();
}
inline void AllocationDescription::set_allocator_name(const ::std::string& value) {
  
  allocator_name_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set:tensorflow.AllocationDescription.allocator_name)
}
inline void AllocationDescription::set_allocator_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  allocator_name_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_char:tensorflow.AllocationDescription.allocator_name)
}
inline void AllocationDescription::set_allocator_name(const char* value,
    size_t size) {
  
  allocator_name_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_pointer:tensorflow.AllocationDescription.allocator_name)
}
inline ::std::string* AllocationDescription::mutable_allocator_name() {
  
  // @@protoc_insertion_point(field_mutable:tensorflow.AllocationDescription.allocator_name)
  return allocator_name_.Mutable(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline ::std::string* AllocationDescription::release_allocator_name() {
  // @@protoc_insertion_point(field_release:tensorflow.AllocationDescription.allocator_name)
  
  return allocator_name_.Release(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline ::std::string* AllocationDescription::unsafe_arena_release_allocator_name() {
  // @@protoc_insertion_point(field_unsafe_arena_release:tensorflow.AllocationDescription.allocator_name)
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  
  return allocator_name_.UnsafeArenaRelease(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      GetArenaNoVirtual());
}
inline void AllocationDescription::set_allocated_allocator_name(::std::string* allocator_name) {
  if (allocator_name != NULL) {
    
  } else {
    
  }
  allocator_name_.SetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), allocator_name,
      GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_allocated:tensorflow.AllocationDescription.allocator_name)
}
inline void AllocationDescription::unsafe_arena_set_allocated_allocator_name(
    ::std::string* allocator_name) {
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  if (allocator_name != NULL) {
    
  } else {
    
  }
  allocator_name_.UnsafeArenaSetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      allocator_name, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:tensorflow.AllocationDescription.allocator_name)
}

// int64 allocation_id = 4;
inline void AllocationDescription::clear_allocation_id() {
  allocation_id_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 AllocationDescription::allocation_id() const {
  // @@protoc_insertion_point(field_get:tensorflow.AllocationDescription.allocation_id)
  return allocation_id_;
}
inline void AllocationDescription::set_allocation_id(::google::protobuf::int64 value) {
  
  allocation_id_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.AllocationDescription.allocation_id)
}

// bool has_single_reference = 5;
inline void AllocationDescription::clear_has_single_reference() {
  has_single_reference_ = false;
}
inline bool AllocationDescription::has_single_reference() const {
  // @@protoc_insertion_point(field_get:tensorflow.AllocationDescription.has_single_reference)
  return has_single_reference_;
}
inline void AllocationDescription::set_has_single_reference(bool value) {
  
  has_single_reference_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.AllocationDescription.has_single_reference)
}

// uint64 ptr = 6;
inline void AllocationDescription::clear_ptr() {
  ptr_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 AllocationDescription::ptr() const {
  // @@protoc_insertion_point(field_get:tensorflow.AllocationDescription.ptr)
  return ptr_;
}
inline void AllocationDescription::set_ptr(::google::protobuf::uint64 value) {
  
  ptr_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.AllocationDescription.ptr)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace tensorflow

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_tensorflow_2fcore_2fframework_2fallocation_5fdescription_2eproto__INCLUDED
