// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow/core/util/memmapped_file_system.proto

#ifndef PROTOBUF_tensorflow_2fcore_2futil_2fmemmapped_5ffile_5fsystem_2eproto__INCLUDED
#define PROTOBUF_tensorflow_2fcore_2futil_2fmemmapped_5ffile_5fsystem_2eproto__INCLUDED

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
class MemmappedFileSystemDirectory;
class MemmappedFileSystemDirectoryDefaultTypeInternal;
extern MemmappedFileSystemDirectoryDefaultTypeInternal _MemmappedFileSystemDirectory_default_instance_;
class MemmappedFileSystemDirectoryElement;
class MemmappedFileSystemDirectoryElementDefaultTypeInternal;
extern MemmappedFileSystemDirectoryElementDefaultTypeInternal _MemmappedFileSystemDirectoryElement_default_instance_;
}  // namespace tensorflow

namespace tensorflow {

namespace protobuf_tensorflow_2fcore_2futil_2fmemmapped_5ffile_5fsystem_2eproto {
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
}  // namespace protobuf_tensorflow_2fcore_2futil_2fmemmapped_5ffile_5fsystem_2eproto

// ===================================================================

class MemmappedFileSystemDirectoryElement : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:tensorflow.MemmappedFileSystemDirectoryElement) */ {
 public:
  MemmappedFileSystemDirectoryElement();
  virtual ~MemmappedFileSystemDirectoryElement();

  MemmappedFileSystemDirectoryElement(const MemmappedFileSystemDirectoryElement& from);

  inline MemmappedFileSystemDirectoryElement& operator=(const MemmappedFileSystemDirectoryElement& from) {
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
  static const MemmappedFileSystemDirectoryElement& default_instance();

  static inline const MemmappedFileSystemDirectoryElement* internal_default_instance() {
    return reinterpret_cast<const MemmappedFileSystemDirectoryElement*>(
               &_MemmappedFileSystemDirectoryElement_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void UnsafeArenaSwap(MemmappedFileSystemDirectoryElement* other);
  void Swap(MemmappedFileSystemDirectoryElement* other);

  // implements Message ----------------------------------------------

  inline MemmappedFileSystemDirectoryElement* New() const PROTOBUF_FINAL { return New(NULL); }

  MemmappedFileSystemDirectoryElement* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const MemmappedFileSystemDirectoryElement& from);
  void MergeFrom(const MemmappedFileSystemDirectoryElement& from);
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
  void InternalSwap(MemmappedFileSystemDirectoryElement* other);
  protected:
  explicit MemmappedFileSystemDirectoryElement(::google::protobuf::Arena* arena);
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

  // string name = 2;
  void clear_name();
  static const int kNameFieldNumber = 2;
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

  // uint64 offset = 1;
  void clear_offset();
  static const int kOffsetFieldNumber = 1;
  ::google::protobuf::uint64 offset() const;
  void set_offset(::google::protobuf::uint64 value);

  // @@protoc_insertion_point(class_scope:tensorflow.MemmappedFileSystemDirectoryElement)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  friend class ::google::protobuf::Arena;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::uint64 offset_;
  mutable int _cached_size_;
  friend struct protobuf_tensorflow_2fcore_2futil_2fmemmapped_5ffile_5fsystem_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class MemmappedFileSystemDirectory : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:tensorflow.MemmappedFileSystemDirectory) */ {
 public:
  MemmappedFileSystemDirectory();
  virtual ~MemmappedFileSystemDirectory();

  MemmappedFileSystemDirectory(const MemmappedFileSystemDirectory& from);

  inline MemmappedFileSystemDirectory& operator=(const MemmappedFileSystemDirectory& from) {
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
  static const MemmappedFileSystemDirectory& default_instance();

  static inline const MemmappedFileSystemDirectory* internal_default_instance() {
    return reinterpret_cast<const MemmappedFileSystemDirectory*>(
               &_MemmappedFileSystemDirectory_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void UnsafeArenaSwap(MemmappedFileSystemDirectory* other);
  void Swap(MemmappedFileSystemDirectory* other);

  // implements Message ----------------------------------------------

  inline MemmappedFileSystemDirectory* New() const PROTOBUF_FINAL { return New(NULL); }

  MemmappedFileSystemDirectory* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const MemmappedFileSystemDirectory& from);
  void MergeFrom(const MemmappedFileSystemDirectory& from);
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
  void InternalSwap(MemmappedFileSystemDirectory* other);
  protected:
  explicit MemmappedFileSystemDirectory(::google::protobuf::Arena* arena);
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

  // repeated .tensorflow.MemmappedFileSystemDirectoryElement element = 1;
  int element_size() const;
  void clear_element();
  static const int kElementFieldNumber = 1;
  const ::tensorflow::MemmappedFileSystemDirectoryElement& element(int index) const;
  ::tensorflow::MemmappedFileSystemDirectoryElement* mutable_element(int index);
  ::tensorflow::MemmappedFileSystemDirectoryElement* add_element();
  ::google::protobuf::RepeatedPtrField< ::tensorflow::MemmappedFileSystemDirectoryElement >*
      mutable_element();
  const ::google::protobuf::RepeatedPtrField< ::tensorflow::MemmappedFileSystemDirectoryElement >&
      element() const;

  // @@protoc_insertion_point(class_scope:tensorflow.MemmappedFileSystemDirectory)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  friend class ::google::protobuf::Arena;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::google::protobuf::RepeatedPtrField< ::tensorflow::MemmappedFileSystemDirectoryElement > element_;
  mutable int _cached_size_;
  friend struct protobuf_tensorflow_2fcore_2futil_2fmemmapped_5ffile_5fsystem_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// MemmappedFileSystemDirectoryElement

// uint64 offset = 1;
inline void MemmappedFileSystemDirectoryElement::clear_offset() {
  offset_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 MemmappedFileSystemDirectoryElement::offset() const {
  // @@protoc_insertion_point(field_get:tensorflow.MemmappedFileSystemDirectoryElement.offset)
  return offset_;
}
inline void MemmappedFileSystemDirectoryElement::set_offset(::google::protobuf::uint64 value) {
  
  offset_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.MemmappedFileSystemDirectoryElement.offset)
}

// string name = 2;
inline void MemmappedFileSystemDirectoryElement::clear_name() {
  name_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline const ::std::string& MemmappedFileSystemDirectoryElement::name() const {
  // @@protoc_insertion_point(field_get:tensorflow.MemmappedFileSystemDirectoryElement.name)
  return name_.Get();
}
inline void MemmappedFileSystemDirectoryElement::set_name(const ::std::string& value) {
  
  name_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set:tensorflow.MemmappedFileSystemDirectoryElement.name)
}
inline void MemmappedFileSystemDirectoryElement::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  name_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_char:tensorflow.MemmappedFileSystemDirectoryElement.name)
}
inline void MemmappedFileSystemDirectoryElement::set_name(const char* value,
    size_t size) {
  
  name_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_pointer:tensorflow.MemmappedFileSystemDirectoryElement.name)
}
inline ::std::string* MemmappedFileSystemDirectoryElement::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:tensorflow.MemmappedFileSystemDirectoryElement.name)
  return name_.Mutable(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline ::std::string* MemmappedFileSystemDirectoryElement::release_name() {
  // @@protoc_insertion_point(field_release:tensorflow.MemmappedFileSystemDirectoryElement.name)
  
  return name_.Release(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline ::std::string* MemmappedFileSystemDirectoryElement::unsafe_arena_release_name() {
  // @@protoc_insertion_point(field_unsafe_arena_release:tensorflow.MemmappedFileSystemDirectoryElement.name)
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  
  return name_.UnsafeArenaRelease(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      GetArenaNoVirtual());
}
inline void MemmappedFileSystemDirectoryElement::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name,
      GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_allocated:tensorflow.MemmappedFileSystemDirectoryElement.name)
}
inline void MemmappedFileSystemDirectoryElement::unsafe_arena_set_allocated_name(
    ::std::string* name) {
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  if (name != NULL) {
    
  } else {
    
  }
  name_.UnsafeArenaSetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      name, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:tensorflow.MemmappedFileSystemDirectoryElement.name)
}

// -------------------------------------------------------------------

// MemmappedFileSystemDirectory

// repeated .tensorflow.MemmappedFileSystemDirectoryElement element = 1;
inline int MemmappedFileSystemDirectory::element_size() const {
  return element_.size();
}
inline void MemmappedFileSystemDirectory::clear_element() {
  element_.Clear();
}
inline const ::tensorflow::MemmappedFileSystemDirectoryElement& MemmappedFileSystemDirectory::element(int index) const {
  // @@protoc_insertion_point(field_get:tensorflow.MemmappedFileSystemDirectory.element)
  return element_.Get(index);
}
inline ::tensorflow::MemmappedFileSystemDirectoryElement* MemmappedFileSystemDirectory::mutable_element(int index) {
  // @@protoc_insertion_point(field_mutable:tensorflow.MemmappedFileSystemDirectory.element)
  return element_.Mutable(index);
}
inline ::tensorflow::MemmappedFileSystemDirectoryElement* MemmappedFileSystemDirectory::add_element() {
  // @@protoc_insertion_point(field_add:tensorflow.MemmappedFileSystemDirectory.element)
  return element_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::tensorflow::MemmappedFileSystemDirectoryElement >*
MemmappedFileSystemDirectory::mutable_element() {
  // @@protoc_insertion_point(field_mutable_list:tensorflow.MemmappedFileSystemDirectory.element)
  return &element_;
}
inline const ::google::protobuf::RepeatedPtrField< ::tensorflow::MemmappedFileSystemDirectoryElement >&
MemmappedFileSystemDirectory::element() const {
  // @@protoc_insertion_point(field_list:tensorflow.MemmappedFileSystemDirectory.element)
  return element_;
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


}  // namespace tensorflow

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_tensorflow_2fcore_2futil_2fmemmapped_5ffile_5fsystem_2eproto__INCLUDED
