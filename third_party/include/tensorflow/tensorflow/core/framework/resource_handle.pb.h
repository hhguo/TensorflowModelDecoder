// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow/core/framework/resource_handle.proto

#ifndef PROTOBUF_tensorflow_2fcore_2fframework_2fresource_5fhandle_2eproto__INCLUDED
#define PROTOBUF_tensorflow_2fcore_2fframework_2fresource_5fhandle_2eproto__INCLUDED

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
class ResourceHandleProto;
class ResourceHandleProtoDefaultTypeInternal;
extern ResourceHandleProtoDefaultTypeInternal _ResourceHandleProto_default_instance_;
}  // namespace tensorflow

namespace tensorflow {

namespace protobuf_tensorflow_2fcore_2fframework_2fresource_5fhandle_2eproto {
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
}  // namespace protobuf_tensorflow_2fcore_2fframework_2fresource_5fhandle_2eproto

// ===================================================================

class ResourceHandleProto : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:tensorflow.ResourceHandleProto) */ {
 public:
  ResourceHandleProto();
  virtual ~ResourceHandleProto();

  ResourceHandleProto(const ResourceHandleProto& from);

  inline ResourceHandleProto& operator=(const ResourceHandleProto& from) {
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
  static const ResourceHandleProto& default_instance();

  static inline const ResourceHandleProto* internal_default_instance() {
    return reinterpret_cast<const ResourceHandleProto*>(
               &_ResourceHandleProto_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void UnsafeArenaSwap(ResourceHandleProto* other);
  void Swap(ResourceHandleProto* other);

  // implements Message ----------------------------------------------

  inline ResourceHandleProto* New() const PROTOBUF_FINAL { return New(NULL); }

  ResourceHandleProto* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const ResourceHandleProto& from);
  void MergeFrom(const ResourceHandleProto& from);
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
  void InternalSwap(ResourceHandleProto* other);
  protected:
  explicit ResourceHandleProto(::google::protobuf::Arena* arena);
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

  // string device = 1;
  void clear_device();
  static const int kDeviceFieldNumber = 1;
  const ::std::string& device() const;
  void set_device(const ::std::string& value);
  void set_device(const char* value);
  void set_device(const char* value, size_t size);
  ::std::string* mutable_device();
  ::std::string* release_device();
  void set_allocated_device(::std::string* device);
  ::std::string* unsafe_arena_release_device();
  void unsafe_arena_set_allocated_device(
      ::std::string* device);

  // string container = 2;
  void clear_container();
  static const int kContainerFieldNumber = 2;
  const ::std::string& container() const;
  void set_container(const ::std::string& value);
  void set_container(const char* value);
  void set_container(const char* value, size_t size);
  ::std::string* mutable_container();
  ::std::string* release_container();
  void set_allocated_container(::std::string* container);
  ::std::string* unsafe_arena_release_container();
  void unsafe_arena_set_allocated_container(
      ::std::string* container);

  // string name = 3;
  void clear_name();
  static const int kNameFieldNumber = 3;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);
  ::std::string* unsafe_arena_release_name();
  void unsafe_arena_set_allocated_name(
      ::std::string* name);

  // string maybe_type_name = 5;
  void clear_maybe_type_name();
  static const int kMaybeTypeNameFieldNumber = 5;
  const ::std::string& maybe_type_name() const;
  void set_maybe_type_name(const ::std::string& value);
  void set_maybe_type_name(const char* value);
  void set_maybe_type_name(const char* value, size_t size);
  ::std::string* mutable_maybe_type_name();
  ::std::string* release_maybe_type_name();
  void set_allocated_maybe_type_name(::std::string* maybe_type_name);
  ::std::string* unsafe_arena_release_maybe_type_name();
  void unsafe_arena_set_allocated_maybe_type_name(
      ::std::string* maybe_type_name);

  // uint64 hash_code = 4;
  void clear_hash_code();
  static const int kHashCodeFieldNumber = 4;
  ::google::protobuf::uint64 hash_code() const;
  void set_hash_code(::google::protobuf::uint64 value);

  // @@protoc_insertion_point(class_scope:tensorflow.ResourceHandleProto)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  friend class ::google::protobuf::Arena;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::google::protobuf::internal::ArenaStringPtr device_;
  ::google::protobuf::internal::ArenaStringPtr container_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::internal::ArenaStringPtr maybe_type_name_;
  ::google::protobuf::uint64 hash_code_;
  mutable int _cached_size_;
  friend struct protobuf_tensorflow_2fcore_2fframework_2fresource_5fhandle_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// ResourceHandleProto

// string device = 1;
inline void ResourceHandleProto::clear_device() {
  device_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline const ::std::string& ResourceHandleProto::device() const {
  // @@protoc_insertion_point(field_get:tensorflow.ResourceHandleProto.device)
  return device_.Get();
}
inline void ResourceHandleProto::set_device(const ::std::string& value) {
  
  device_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set:tensorflow.ResourceHandleProto.device)
}
inline void ResourceHandleProto::set_device(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  device_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_char:tensorflow.ResourceHandleProto.device)
}
inline void ResourceHandleProto::set_device(const char* value,
    size_t size) {
  
  device_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_pointer:tensorflow.ResourceHandleProto.device)
}
inline ::std::string* ResourceHandleProto::mutable_device() {
  
  // @@protoc_insertion_point(field_mutable:tensorflow.ResourceHandleProto.device)
  return device_.Mutable(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline ::std::string* ResourceHandleProto::release_device() {
  // @@protoc_insertion_point(field_release:tensorflow.ResourceHandleProto.device)
  
  return device_.Release(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline ::std::string* ResourceHandleProto::unsafe_arena_release_device() {
  // @@protoc_insertion_point(field_unsafe_arena_release:tensorflow.ResourceHandleProto.device)
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  
  return device_.UnsafeArenaRelease(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      GetArenaNoVirtual());
}
inline void ResourceHandleProto::set_allocated_device(::std::string* device) {
  if (device != NULL) {
    
  } else {
    
  }
  device_.SetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), device,
      GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_allocated:tensorflow.ResourceHandleProto.device)
}
inline void ResourceHandleProto::unsafe_arena_set_allocated_device(
    ::std::string* device) {
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  if (device != NULL) {
    
  } else {
    
  }
  device_.UnsafeArenaSetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      device, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:tensorflow.ResourceHandleProto.device)
}

// string container = 2;
inline void ResourceHandleProto::clear_container() {
  container_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline const ::std::string& ResourceHandleProto::container() const {
  // @@protoc_insertion_point(field_get:tensorflow.ResourceHandleProto.container)
  return container_.Get();
}
inline void ResourceHandleProto::set_container(const ::std::string& value) {
  
  container_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set:tensorflow.ResourceHandleProto.container)
}
inline void ResourceHandleProto::set_container(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  container_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_char:tensorflow.ResourceHandleProto.container)
}
inline void ResourceHandleProto::set_container(const char* value,
    size_t size) {
  
  container_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_pointer:tensorflow.ResourceHandleProto.container)
}
inline ::std::string* ResourceHandleProto::mutable_container() {
  
  // @@protoc_insertion_point(field_mutable:tensorflow.ResourceHandleProto.container)
  return container_.Mutable(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline ::std::string* ResourceHandleProto::release_container() {
  // @@protoc_insertion_point(field_release:tensorflow.ResourceHandleProto.container)
  
  return container_.Release(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline ::std::string* ResourceHandleProto::unsafe_arena_release_container() {
  // @@protoc_insertion_point(field_unsafe_arena_release:tensorflow.ResourceHandleProto.container)
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  
  return container_.UnsafeArenaRelease(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      GetArenaNoVirtual());
}
inline void ResourceHandleProto::set_allocated_container(::std::string* container) {
  if (container != NULL) {
    
  } else {
    
  }
  container_.SetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), container,
      GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_allocated:tensorflow.ResourceHandleProto.container)
}
inline void ResourceHandleProto::unsafe_arena_set_allocated_container(
    ::std::string* container) {
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  if (container != NULL) {
    
  } else {
    
  }
  container_.UnsafeArenaSetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      container, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:tensorflow.ResourceHandleProto.container)
}

// string name = 3;
inline void ResourceHandleProto::clear_name() {
  name_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline const ::std::string& ResourceHandleProto::name() const {
  // @@protoc_insertion_point(field_get:tensorflow.ResourceHandleProto.name)
  return name_.Get();
}
inline void ResourceHandleProto::set_name(const ::std::string& value) {
  
  name_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set:tensorflow.ResourceHandleProto.name)
}
inline void ResourceHandleProto::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  name_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_char:tensorflow.ResourceHandleProto.name)
}
inline void ResourceHandleProto::set_name(const char* value,
    size_t size) {
  
  name_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_pointer:tensorflow.ResourceHandleProto.name)
}
inline ::std::string* ResourceHandleProto::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:tensorflow.ResourceHandleProto.name)
  return name_.Mutable(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline ::std::string* ResourceHandleProto::release_name() {
  // @@protoc_insertion_point(field_release:tensorflow.ResourceHandleProto.name)
  
  return name_.Release(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline ::std::string* ResourceHandleProto::unsafe_arena_release_name() {
  // @@protoc_insertion_point(field_unsafe_arena_release:tensorflow.ResourceHandleProto.name)
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  
  return name_.UnsafeArenaRelease(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      GetArenaNoVirtual());
}
inline void ResourceHandleProto::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name,
      GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_allocated:tensorflow.ResourceHandleProto.name)
}
inline void ResourceHandleProto::unsafe_arena_set_allocated_name(
    ::std::string* name) {
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  if (name != NULL) {
    
  } else {
    
  }
  name_.UnsafeArenaSetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      name, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:tensorflow.ResourceHandleProto.name)
}

// uint64 hash_code = 4;
inline void ResourceHandleProto::clear_hash_code() {
  hash_code_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 ResourceHandleProto::hash_code() const {
  // @@protoc_insertion_point(field_get:tensorflow.ResourceHandleProto.hash_code)
  return hash_code_;
}
inline void ResourceHandleProto::set_hash_code(::google::protobuf::uint64 value) {
  
  hash_code_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.ResourceHandleProto.hash_code)
}

// string maybe_type_name = 5;
inline void ResourceHandleProto::clear_maybe_type_name() {
  maybe_type_name_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline const ::std::string& ResourceHandleProto::maybe_type_name() const {
  // @@protoc_insertion_point(field_get:tensorflow.ResourceHandleProto.maybe_type_name)
  return maybe_type_name_.Get();
}
inline void ResourceHandleProto::set_maybe_type_name(const ::std::string& value) {
  
  maybe_type_name_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set:tensorflow.ResourceHandleProto.maybe_type_name)
}
inline void ResourceHandleProto::set_maybe_type_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  maybe_type_name_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_char:tensorflow.ResourceHandleProto.maybe_type_name)
}
inline void ResourceHandleProto::set_maybe_type_name(const char* value,
    size_t size) {
  
  maybe_type_name_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_pointer:tensorflow.ResourceHandleProto.maybe_type_name)
}
inline ::std::string* ResourceHandleProto::mutable_maybe_type_name() {
  
  // @@protoc_insertion_point(field_mutable:tensorflow.ResourceHandleProto.maybe_type_name)
  return maybe_type_name_.Mutable(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline ::std::string* ResourceHandleProto::release_maybe_type_name() {
  // @@protoc_insertion_point(field_release:tensorflow.ResourceHandleProto.maybe_type_name)
  
  return maybe_type_name_.Release(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline ::std::string* ResourceHandleProto::unsafe_arena_release_maybe_type_name() {
  // @@protoc_insertion_point(field_unsafe_arena_release:tensorflow.ResourceHandleProto.maybe_type_name)
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  
  return maybe_type_name_.UnsafeArenaRelease(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      GetArenaNoVirtual());
}
inline void ResourceHandleProto::set_allocated_maybe_type_name(::std::string* maybe_type_name) {
  if (maybe_type_name != NULL) {
    
  } else {
    
  }
  maybe_type_name_.SetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), maybe_type_name,
      GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_allocated:tensorflow.ResourceHandleProto.maybe_type_name)
}
inline void ResourceHandleProto::unsafe_arena_set_allocated_maybe_type_name(
    ::std::string* maybe_type_name) {
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  if (maybe_type_name != NULL) {
    
  } else {
    
  }
  maybe_type_name_.UnsafeArenaSetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      maybe_type_name, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:tensorflow.ResourceHandleProto.maybe_type_name)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace tensorflow

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_tensorflow_2fcore_2fframework_2fresource_5fhandle_2eproto__INCLUDED
