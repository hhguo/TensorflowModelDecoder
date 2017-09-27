// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow/core/framework/function.proto

#ifndef PROTOBUF_tensorflow_2fcore_2fframework_2ffunction_2eproto__INCLUDED
#define PROTOBUF_tensorflow_2fcore_2fframework_2ffunction_2eproto__INCLUDED

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
#include <google/protobuf/map.h>  // IWYU pragma: export
#include <google/protobuf/map_field_inl.h>
#include <google/protobuf/unknown_field_set.h>
#include "tensorflow/core/framework/attr_value.pb.h"
#include "tensorflow/core/framework/node_def.pb.h"
#include "tensorflow/core/framework/op_def.pb.h"
// @@protoc_insertion_point(includes)
namespace tensorflow {
class AttrValue;
class AttrValueDefaultTypeInternal;
extern AttrValueDefaultTypeInternal _AttrValue_default_instance_;
class AttrValue_ListValue;
class AttrValue_ListValueDefaultTypeInternal;
extern AttrValue_ListValueDefaultTypeInternal _AttrValue_ListValue_default_instance_;
class FunctionDef;
class FunctionDefDefaultTypeInternal;
extern FunctionDefDefaultTypeInternal _FunctionDef_default_instance_;
class FunctionDefLibrary;
class FunctionDefLibraryDefaultTypeInternal;
extern FunctionDefLibraryDefaultTypeInternal _FunctionDefLibrary_default_instance_;
class FunctionDef_AttrEntry;
class FunctionDef_AttrEntryDefaultTypeInternal;
extern FunctionDef_AttrEntryDefaultTypeInternal _FunctionDef_AttrEntry_default_instance_;
class FunctionDef_RetEntry;
class FunctionDef_RetEntryDefaultTypeInternal;
extern FunctionDef_RetEntryDefaultTypeInternal _FunctionDef_RetEntry_default_instance_;
class GradientDef;
class GradientDefDefaultTypeInternal;
extern GradientDefDefaultTypeInternal _GradientDef_default_instance_;
class NameAttrList;
class NameAttrListDefaultTypeInternal;
extern NameAttrListDefaultTypeInternal _NameAttrList_default_instance_;
class NameAttrList_AttrEntry;
class NameAttrList_AttrEntryDefaultTypeInternal;
extern NameAttrList_AttrEntryDefaultTypeInternal _NameAttrList_AttrEntry_default_instance_;
class NodeDef;
class NodeDefDefaultTypeInternal;
extern NodeDefDefaultTypeInternal _NodeDef_default_instance_;
class NodeDef_AttrEntry;
class NodeDef_AttrEntryDefaultTypeInternal;
extern NodeDef_AttrEntryDefaultTypeInternal _NodeDef_AttrEntry_default_instance_;
class OpDef;
class OpDefDefaultTypeInternal;
extern OpDefDefaultTypeInternal _OpDef_default_instance_;
class OpDef_ArgDef;
class OpDef_ArgDefDefaultTypeInternal;
extern OpDef_ArgDefDefaultTypeInternal _OpDef_ArgDef_default_instance_;
class OpDef_AttrDef;
class OpDef_AttrDefDefaultTypeInternal;
extern OpDef_AttrDefDefaultTypeInternal _OpDef_AttrDef_default_instance_;
class OpDeprecation;
class OpDeprecationDefaultTypeInternal;
extern OpDeprecationDefaultTypeInternal _OpDeprecation_default_instance_;
class OpList;
class OpListDefaultTypeInternal;
extern OpListDefaultTypeInternal _OpList_default_instance_;
}  // namespace tensorflow

namespace tensorflow {

namespace protobuf_tensorflow_2fcore_2fframework_2ffunction_2eproto {
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
}  // namespace protobuf_tensorflow_2fcore_2fframework_2ffunction_2eproto

// ===================================================================

class FunctionDefLibrary : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:tensorflow.FunctionDefLibrary) */ {
 public:
  FunctionDefLibrary();
  virtual ~FunctionDefLibrary();

  FunctionDefLibrary(const FunctionDefLibrary& from);

  inline FunctionDefLibrary& operator=(const FunctionDefLibrary& from) {
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
  static const FunctionDefLibrary& default_instance();

  static inline const FunctionDefLibrary* internal_default_instance() {
    return reinterpret_cast<const FunctionDefLibrary*>(
               &_FunctionDefLibrary_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void UnsafeArenaSwap(FunctionDefLibrary* other);
  void Swap(FunctionDefLibrary* other);

  // implements Message ----------------------------------------------

  inline FunctionDefLibrary* New() const PROTOBUF_FINAL { return New(NULL); }

  FunctionDefLibrary* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const FunctionDefLibrary& from);
  void MergeFrom(const FunctionDefLibrary& from);
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
  void InternalSwap(FunctionDefLibrary* other);
  protected:
  explicit FunctionDefLibrary(::google::protobuf::Arena* arena);
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

  // repeated .tensorflow.FunctionDef function = 1;
  int function_size() const;
  void clear_function();
  static const int kFunctionFieldNumber = 1;
  const ::tensorflow::FunctionDef& function(int index) const;
  ::tensorflow::FunctionDef* mutable_function(int index);
  ::tensorflow::FunctionDef* add_function();
  ::google::protobuf::RepeatedPtrField< ::tensorflow::FunctionDef >*
      mutable_function();
  const ::google::protobuf::RepeatedPtrField< ::tensorflow::FunctionDef >&
      function() const;

  // repeated .tensorflow.GradientDef gradient = 2;
  int gradient_size() const;
  void clear_gradient();
  static const int kGradientFieldNumber = 2;
  const ::tensorflow::GradientDef& gradient(int index) const;
  ::tensorflow::GradientDef* mutable_gradient(int index);
  ::tensorflow::GradientDef* add_gradient();
  ::google::protobuf::RepeatedPtrField< ::tensorflow::GradientDef >*
      mutable_gradient();
  const ::google::protobuf::RepeatedPtrField< ::tensorflow::GradientDef >&
      gradient() const;

  // @@protoc_insertion_point(class_scope:tensorflow.FunctionDefLibrary)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  friend class ::google::protobuf::Arena;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::google::protobuf::RepeatedPtrField< ::tensorflow::FunctionDef > function_;
  ::google::protobuf::RepeatedPtrField< ::tensorflow::GradientDef > gradient_;
  mutable int _cached_size_;
  friend struct protobuf_tensorflow_2fcore_2fframework_2ffunction_2eproto::TableStruct;
};
// -------------------------------------------------------------------


// -------------------------------------------------------------------


// -------------------------------------------------------------------

class FunctionDef : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:tensorflow.FunctionDef) */ {
 public:
  FunctionDef();
  virtual ~FunctionDef();

  FunctionDef(const FunctionDef& from);

  inline FunctionDef& operator=(const FunctionDef& from) {
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
  static const FunctionDef& default_instance();

  static inline const FunctionDef* internal_default_instance() {
    return reinterpret_cast<const FunctionDef*>(
               &_FunctionDef_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    3;

  void UnsafeArenaSwap(FunctionDef* other);
  void Swap(FunctionDef* other);

  // implements Message ----------------------------------------------

  inline FunctionDef* New() const PROTOBUF_FINAL { return New(NULL); }

  FunctionDef* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const FunctionDef& from);
  void MergeFrom(const FunctionDef& from);
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
  void InternalSwap(FunctionDef* other);
  protected:
  explicit FunctionDef(::google::protobuf::Arena* arena);
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

  // repeated .tensorflow.NodeDef node_def = 3;
  int node_def_size() const;
  void clear_node_def();
  static const int kNodeDefFieldNumber = 3;
  const ::tensorflow::NodeDef& node_def(int index) const;
  ::tensorflow::NodeDef* mutable_node_def(int index);
  ::tensorflow::NodeDef* add_node_def();
  ::google::protobuf::RepeatedPtrField< ::tensorflow::NodeDef >*
      mutable_node_def();
  const ::google::protobuf::RepeatedPtrField< ::tensorflow::NodeDef >&
      node_def() const;

  // map<string, string> ret = 4;
  int ret_size() const;
  void clear_ret();
  static const int kRetFieldNumber = 4;
  const ::google::protobuf::Map< ::std::string, ::std::string >&
      ret() const;
  ::google::protobuf::Map< ::std::string, ::std::string >*
      mutable_ret();

  // map<string, .tensorflow.AttrValue> attr = 5;
  int attr_size() const;
  void clear_attr();
  static const int kAttrFieldNumber = 5;
  const ::google::protobuf::Map< ::std::string, ::tensorflow::AttrValue >&
      attr() const;
  ::google::protobuf::Map< ::std::string, ::tensorflow::AttrValue >*
      mutable_attr();

  // .tensorflow.OpDef signature = 1;
  bool has_signature() const;
  void clear_signature();
  static const int kSignatureFieldNumber = 1;
  private:
  void _slow_mutable_signature();
  void _slow_set_allocated_signature(
      ::google::protobuf::Arena* message_arena, ::tensorflow::OpDef** signature);
  ::tensorflow::OpDef* _slow_release_signature();
  public:
  const ::tensorflow::OpDef& signature() const;
  ::tensorflow::OpDef* mutable_signature();
  ::tensorflow::OpDef* release_signature();
  void set_allocated_signature(::tensorflow::OpDef* signature);
  ::tensorflow::OpDef* unsafe_arena_release_signature();
  void unsafe_arena_set_allocated_signature(
      ::tensorflow::OpDef* signature);

  // @@protoc_insertion_point(class_scope:tensorflow.FunctionDef)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  friend class ::google::protobuf::Arena;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::google::protobuf::RepeatedPtrField< ::tensorflow::NodeDef > node_def_;
  public:
  class FunctionDef_RetEntry : public ::google::protobuf::internal::MapEntry<FunctionDef_RetEntry, 
      ::std::string, ::std::string,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      0 > {
  public:
    typedef ::google::protobuf::internal::MapEntry<FunctionDef_RetEntry, 
      ::std::string, ::std::string,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      0 > SuperType;
    FunctionDef_RetEntry();
    FunctionDef_RetEntry(::google::protobuf::Arena* arena);
    void MergeFrom(const ::google::protobuf::Message& other) PROTOBUF_FINAL;
    void MergeFrom(const FunctionDef_RetEntry& other);
    static const Message* internal_default_instance() { return reinterpret_cast<const Message*>(&_FunctionDef_RetEntry_default_instance_); }
    ::google::protobuf::Metadata GetMetadata() const;
  };
  ::google::protobuf::internal::MapField<
      FunctionDef_RetEntry,
      ::std::string, ::std::string,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      0 > ret_;
  private:
  public:
  class FunctionDef_AttrEntry : public ::google::protobuf::internal::MapEntry<FunctionDef_AttrEntry, 
      ::std::string, ::tensorflow::AttrValue,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      ::google::protobuf::internal::WireFormatLite::TYPE_MESSAGE,
      0 > {
  public:
    typedef ::google::protobuf::internal::MapEntry<FunctionDef_AttrEntry, 
      ::std::string, ::tensorflow::AttrValue,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      ::google::protobuf::internal::WireFormatLite::TYPE_MESSAGE,
      0 > SuperType;
    FunctionDef_AttrEntry();
    FunctionDef_AttrEntry(::google::protobuf::Arena* arena);
    void MergeFrom(const ::google::protobuf::Message& other) PROTOBUF_FINAL;
    void MergeFrom(const FunctionDef_AttrEntry& other);
    static const Message* internal_default_instance() { return reinterpret_cast<const Message*>(&_FunctionDef_AttrEntry_default_instance_); }
    ::google::protobuf::Metadata GetMetadata() const;
  };
  ::google::protobuf::internal::MapField<
      FunctionDef_AttrEntry,
      ::std::string, ::tensorflow::AttrValue,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      ::google::protobuf::internal::WireFormatLite::TYPE_MESSAGE,
      0 > attr_;
  private:
  ::tensorflow::OpDef* signature_;
  mutable int _cached_size_;
  friend struct protobuf_tensorflow_2fcore_2fframework_2ffunction_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class GradientDef : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:tensorflow.GradientDef) */ {
 public:
  GradientDef();
  virtual ~GradientDef();

  GradientDef(const GradientDef& from);

  inline GradientDef& operator=(const GradientDef& from) {
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
  static const GradientDef& default_instance();

  static inline const GradientDef* internal_default_instance() {
    return reinterpret_cast<const GradientDef*>(
               &_GradientDef_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    4;

  void UnsafeArenaSwap(GradientDef* other);
  void Swap(GradientDef* other);

  // implements Message ----------------------------------------------

  inline GradientDef* New() const PROTOBUF_FINAL { return New(NULL); }

  GradientDef* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const GradientDef& from);
  void MergeFrom(const GradientDef& from);
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
  void InternalSwap(GradientDef* other);
  protected:
  explicit GradientDef(::google::protobuf::Arena* arena);
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

  // string function_name = 1;
  void clear_function_name();
  static const int kFunctionNameFieldNumber = 1;
  const ::std::string& function_name() const;
  void set_function_name(const ::std::string& value);
  void set_function_name(const char* value);
  void set_function_name(const char* value, size_t size);
  ::std::string* mutable_function_name();
  ::std::string* release_function_name();
  void set_allocated_function_name(::std::string* function_name);
  ::std::string* unsafe_arena_release_function_name();
  void unsafe_arena_set_allocated_function_name(
      ::std::string* function_name);

  // string gradient_func = 2;
  void clear_gradient_func();
  static const int kGradientFuncFieldNumber = 2;
  const ::std::string& gradient_func() const;
  void set_gradient_func(const ::std::string& value);
  void set_gradient_func(const char* value);
  void set_gradient_func(const char* value, size_t size);
  ::std::string* mutable_gradient_func();
  ::std::string* release_gradient_func();
  void set_allocated_gradient_func(::std::string* gradient_func);
  ::std::string* unsafe_arena_release_gradient_func();
  void unsafe_arena_set_allocated_gradient_func(
      ::std::string* gradient_func);

  // @@protoc_insertion_point(class_scope:tensorflow.GradientDef)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  friend class ::google::protobuf::Arena;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::google::protobuf::internal::ArenaStringPtr function_name_;
  ::google::protobuf::internal::ArenaStringPtr gradient_func_;
  mutable int _cached_size_;
  friend struct protobuf_tensorflow_2fcore_2fframework_2ffunction_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// FunctionDefLibrary

// repeated .tensorflow.FunctionDef function = 1;
inline int FunctionDefLibrary::function_size() const {
  return function_.size();
}
inline void FunctionDefLibrary::clear_function() {
  function_.Clear();
}
inline const ::tensorflow::FunctionDef& FunctionDefLibrary::function(int index) const {
  // @@protoc_insertion_point(field_get:tensorflow.FunctionDefLibrary.function)
  return function_.Get(index);
}
inline ::tensorflow::FunctionDef* FunctionDefLibrary::mutable_function(int index) {
  // @@protoc_insertion_point(field_mutable:tensorflow.FunctionDefLibrary.function)
  return function_.Mutable(index);
}
inline ::tensorflow::FunctionDef* FunctionDefLibrary::add_function() {
  // @@protoc_insertion_point(field_add:tensorflow.FunctionDefLibrary.function)
  return function_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::tensorflow::FunctionDef >*
FunctionDefLibrary::mutable_function() {
  // @@protoc_insertion_point(field_mutable_list:tensorflow.FunctionDefLibrary.function)
  return &function_;
}
inline const ::google::protobuf::RepeatedPtrField< ::tensorflow::FunctionDef >&
FunctionDefLibrary::function() const {
  // @@protoc_insertion_point(field_list:tensorflow.FunctionDefLibrary.function)
  return function_;
}

// repeated .tensorflow.GradientDef gradient = 2;
inline int FunctionDefLibrary::gradient_size() const {
  return gradient_.size();
}
inline void FunctionDefLibrary::clear_gradient() {
  gradient_.Clear();
}
inline const ::tensorflow::GradientDef& FunctionDefLibrary::gradient(int index) const {
  // @@protoc_insertion_point(field_get:tensorflow.FunctionDefLibrary.gradient)
  return gradient_.Get(index);
}
inline ::tensorflow::GradientDef* FunctionDefLibrary::mutable_gradient(int index) {
  // @@protoc_insertion_point(field_mutable:tensorflow.FunctionDefLibrary.gradient)
  return gradient_.Mutable(index);
}
inline ::tensorflow::GradientDef* FunctionDefLibrary::add_gradient() {
  // @@protoc_insertion_point(field_add:tensorflow.FunctionDefLibrary.gradient)
  return gradient_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::tensorflow::GradientDef >*
FunctionDefLibrary::mutable_gradient() {
  // @@protoc_insertion_point(field_mutable_list:tensorflow.FunctionDefLibrary.gradient)
  return &gradient_;
}
inline const ::google::protobuf::RepeatedPtrField< ::tensorflow::GradientDef >&
FunctionDefLibrary::gradient() const {
  // @@protoc_insertion_point(field_list:tensorflow.FunctionDefLibrary.gradient)
  return gradient_;
}

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// FunctionDef

// .tensorflow.OpDef signature = 1;
inline bool FunctionDef::has_signature() const {
  return this != internal_default_instance() && signature_ != NULL;
}
inline void FunctionDef::clear_signature() {
  if (GetArenaNoVirtual() == NULL && signature_ != NULL) delete signature_;
  signature_ = NULL;
}
inline const ::tensorflow::OpDef& FunctionDef::signature() const {
  // @@protoc_insertion_point(field_get:tensorflow.FunctionDef.signature)
  return signature_ != NULL ? *signature_
                         : *::tensorflow::OpDef::internal_default_instance();
}
inline ::tensorflow::OpDef* FunctionDef::mutable_signature() {
  
  if (signature_ == NULL) {
    _slow_mutable_signature();
  }
  // @@protoc_insertion_point(field_mutable:tensorflow.FunctionDef.signature)
  return signature_;
}
inline ::tensorflow::OpDef* FunctionDef::release_signature() {
  // @@protoc_insertion_point(field_release:tensorflow.FunctionDef.signature)
  
  if (GetArenaNoVirtual() != NULL) {
    return _slow_release_signature();
  } else {
    ::tensorflow::OpDef* temp = signature_;
    signature_ = NULL;
    return temp;
  }
}
inline  void FunctionDef::set_allocated_signature(::tensorflow::OpDef* signature) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete signature_;
  }
  if (signature != NULL) {
    _slow_set_allocated_signature(message_arena, &signature);
  }
  signature_ = signature;
  if (signature) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:tensorflow.FunctionDef.signature)
}

// map<string, .tensorflow.AttrValue> attr = 5;
inline int FunctionDef::attr_size() const {
  return attr_.size();
}
inline void FunctionDef::clear_attr() {
  attr_.Clear();
}
inline const ::google::protobuf::Map< ::std::string, ::tensorflow::AttrValue >&
FunctionDef::attr() const {
  // @@protoc_insertion_point(field_map:tensorflow.FunctionDef.attr)
  return attr_.GetMap();
}
inline ::google::protobuf::Map< ::std::string, ::tensorflow::AttrValue >*
FunctionDef::mutable_attr() {
  // @@protoc_insertion_point(field_mutable_map:tensorflow.FunctionDef.attr)
  return attr_.MutableMap();
}

// repeated .tensorflow.NodeDef node_def = 3;
inline int FunctionDef::node_def_size() const {
  return node_def_.size();
}
inline void FunctionDef::clear_node_def() {
  node_def_.Clear();
}
inline const ::tensorflow::NodeDef& FunctionDef::node_def(int index) const {
  // @@protoc_insertion_point(field_get:tensorflow.FunctionDef.node_def)
  return node_def_.Get(index);
}
inline ::tensorflow::NodeDef* FunctionDef::mutable_node_def(int index) {
  // @@protoc_insertion_point(field_mutable:tensorflow.FunctionDef.node_def)
  return node_def_.Mutable(index);
}
inline ::tensorflow::NodeDef* FunctionDef::add_node_def() {
  // @@protoc_insertion_point(field_add:tensorflow.FunctionDef.node_def)
  return node_def_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::tensorflow::NodeDef >*
FunctionDef::mutable_node_def() {
  // @@protoc_insertion_point(field_mutable_list:tensorflow.FunctionDef.node_def)
  return &node_def_;
}
inline const ::google::protobuf::RepeatedPtrField< ::tensorflow::NodeDef >&
FunctionDef::node_def() const {
  // @@protoc_insertion_point(field_list:tensorflow.FunctionDef.node_def)
  return node_def_;
}

// map<string, string> ret = 4;
inline int FunctionDef::ret_size() const {
  return ret_.size();
}
inline void FunctionDef::clear_ret() {
  ret_.Clear();
}
inline const ::google::protobuf::Map< ::std::string, ::std::string >&
FunctionDef::ret() const {
  // @@protoc_insertion_point(field_map:tensorflow.FunctionDef.ret)
  return ret_.GetMap();
}
inline ::google::protobuf::Map< ::std::string, ::std::string >*
FunctionDef::mutable_ret() {
  // @@protoc_insertion_point(field_mutable_map:tensorflow.FunctionDef.ret)
  return ret_.MutableMap();
}

// -------------------------------------------------------------------

// GradientDef

// string function_name = 1;
inline void GradientDef::clear_function_name() {
  function_name_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline const ::std::string& GradientDef::function_name() const {
  // @@protoc_insertion_point(field_get:tensorflow.GradientDef.function_name)
  return function_name_.Get();
}
inline void GradientDef::set_function_name(const ::std::string& value) {
  
  function_name_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set:tensorflow.GradientDef.function_name)
}
inline void GradientDef::set_function_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  function_name_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_char:tensorflow.GradientDef.function_name)
}
inline void GradientDef::set_function_name(const char* value,
    size_t size) {
  
  function_name_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_pointer:tensorflow.GradientDef.function_name)
}
inline ::std::string* GradientDef::mutable_function_name() {
  
  // @@protoc_insertion_point(field_mutable:tensorflow.GradientDef.function_name)
  return function_name_.Mutable(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline ::std::string* GradientDef::release_function_name() {
  // @@protoc_insertion_point(field_release:tensorflow.GradientDef.function_name)
  
  return function_name_.Release(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline ::std::string* GradientDef::unsafe_arena_release_function_name() {
  // @@protoc_insertion_point(field_unsafe_arena_release:tensorflow.GradientDef.function_name)
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  
  return function_name_.UnsafeArenaRelease(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      GetArenaNoVirtual());
}
inline void GradientDef::set_allocated_function_name(::std::string* function_name) {
  if (function_name != NULL) {
    
  } else {
    
  }
  function_name_.SetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), function_name,
      GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_allocated:tensorflow.GradientDef.function_name)
}
inline void GradientDef::unsafe_arena_set_allocated_function_name(
    ::std::string* function_name) {
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  if (function_name != NULL) {
    
  } else {
    
  }
  function_name_.UnsafeArenaSetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      function_name, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:tensorflow.GradientDef.function_name)
}

// string gradient_func = 2;
inline void GradientDef::clear_gradient_func() {
  gradient_func_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline const ::std::string& GradientDef::gradient_func() const {
  // @@protoc_insertion_point(field_get:tensorflow.GradientDef.gradient_func)
  return gradient_func_.Get();
}
inline void GradientDef::set_gradient_func(const ::std::string& value) {
  
  gradient_func_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set:tensorflow.GradientDef.gradient_func)
}
inline void GradientDef::set_gradient_func(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  gradient_func_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_char:tensorflow.GradientDef.gradient_func)
}
inline void GradientDef::set_gradient_func(const char* value,
    size_t size) {
  
  gradient_func_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_pointer:tensorflow.GradientDef.gradient_func)
}
inline ::std::string* GradientDef::mutable_gradient_func() {
  
  // @@protoc_insertion_point(field_mutable:tensorflow.GradientDef.gradient_func)
  return gradient_func_.Mutable(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline ::std::string* GradientDef::release_gradient_func() {
  // @@protoc_insertion_point(field_release:tensorflow.GradientDef.gradient_func)
  
  return gradient_func_.Release(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline ::std::string* GradientDef::unsafe_arena_release_gradient_func() {
  // @@protoc_insertion_point(field_unsafe_arena_release:tensorflow.GradientDef.gradient_func)
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  
  return gradient_func_.UnsafeArenaRelease(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      GetArenaNoVirtual());
}
inline void GradientDef::set_allocated_gradient_func(::std::string* gradient_func) {
  if (gradient_func != NULL) {
    
  } else {
    
  }
  gradient_func_.SetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), gradient_func,
      GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_allocated:tensorflow.GradientDef.gradient_func)
}
inline void GradientDef::unsafe_arena_set_allocated_gradient_func(
    ::std::string* gradient_func) {
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  if (gradient_func != NULL) {
    
  } else {
    
  }
  gradient_func_.UnsafeArenaSetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      gradient_func, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:tensorflow.GradientDef.gradient_func)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


}  // namespace tensorflow

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_tensorflow_2fcore_2fframework_2ffunction_2eproto__INCLUDED