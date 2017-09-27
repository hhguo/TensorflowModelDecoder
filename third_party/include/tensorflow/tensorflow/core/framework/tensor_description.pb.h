// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow/core/framework/tensor_description.proto

#ifndef PROTOBUF_tensorflow_2fcore_2fframework_2ftensor_5fdescription_2eproto__INCLUDED
#define PROTOBUF_tensorflow_2fcore_2fframework_2ftensor_5fdescription_2eproto__INCLUDED

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
#include "tensorflow/core/framework/types.pb.h"
#include "tensorflow/core/framework/tensor_shape.pb.h"
#include "tensorflow/core/framework/allocation_description.pb.h"
// @@protoc_insertion_point(includes)
namespace tensorflow {
class AllocationDescription;
class AllocationDescriptionDefaultTypeInternal;
extern AllocationDescriptionDefaultTypeInternal _AllocationDescription_default_instance_;
class TensorDescription;
class TensorDescriptionDefaultTypeInternal;
extern TensorDescriptionDefaultTypeInternal _TensorDescription_default_instance_;
class TensorShapeProto;
class TensorShapeProtoDefaultTypeInternal;
extern TensorShapeProtoDefaultTypeInternal _TensorShapeProto_default_instance_;
class TensorShapeProto_Dim;
class TensorShapeProto_DimDefaultTypeInternal;
extern TensorShapeProto_DimDefaultTypeInternal _TensorShapeProto_Dim_default_instance_;
}  // namespace tensorflow

namespace tensorflow {

namespace protobuf_tensorflow_2fcore_2fframework_2ftensor_5fdescription_2eproto {
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
}  // namespace protobuf_tensorflow_2fcore_2fframework_2ftensor_5fdescription_2eproto

// ===================================================================

class TensorDescription : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:tensorflow.TensorDescription) */ {
 public:
  TensorDescription();
  virtual ~TensorDescription();

  TensorDescription(const TensorDescription& from);

  inline TensorDescription& operator=(const TensorDescription& from) {
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
  static const TensorDescription& default_instance();

  static inline const TensorDescription* internal_default_instance() {
    return reinterpret_cast<const TensorDescription*>(
               &_TensorDescription_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void UnsafeArenaSwap(TensorDescription* other);
  void Swap(TensorDescription* other);

  // implements Message ----------------------------------------------

  inline TensorDescription* New() const PROTOBUF_FINAL { return New(NULL); }

  TensorDescription* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const TensorDescription& from);
  void MergeFrom(const TensorDescription& from);
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
  void InternalSwap(TensorDescription* other);
  protected:
  explicit TensorDescription(::google::protobuf::Arena* arena);
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

  // .tensorflow.TensorShapeProto shape = 2;
  bool has_shape() const;
  void clear_shape();
  static const int kShapeFieldNumber = 2;
  private:
  void _slow_mutable_shape();
  void _slow_set_allocated_shape(
      ::google::protobuf::Arena* message_arena, ::tensorflow::TensorShapeProto** shape);
  ::tensorflow::TensorShapeProto* _slow_release_shape();
  public:
  const ::tensorflow::TensorShapeProto& shape() const;
  ::tensorflow::TensorShapeProto* mutable_shape();
  ::tensorflow::TensorShapeProto* release_shape();
  void set_allocated_shape(::tensorflow::TensorShapeProto* shape);
  ::tensorflow::TensorShapeProto* unsafe_arena_release_shape();
  void unsafe_arena_set_allocated_shape(
      ::tensorflow::TensorShapeProto* shape);

  // .tensorflow.AllocationDescription allocation_description = 4;
  bool has_allocation_description() const;
  void clear_allocation_description();
  static const int kAllocationDescriptionFieldNumber = 4;
  private:
  void _slow_mutable_allocation_description();
  void _slow_set_allocated_allocation_description(
      ::google::protobuf::Arena* message_arena, ::tensorflow::AllocationDescription** allocation_description);
  ::tensorflow::AllocationDescription* _slow_release_allocation_description();
  public:
  const ::tensorflow::AllocationDescription& allocation_description() const;
  ::tensorflow::AllocationDescription* mutable_allocation_description();
  ::tensorflow::AllocationDescription* release_allocation_description();
  void set_allocated_allocation_description(::tensorflow::AllocationDescription* allocation_description);
  ::tensorflow::AllocationDescription* unsafe_arena_release_allocation_description();
  void unsafe_arena_set_allocated_allocation_description(
      ::tensorflow::AllocationDescription* allocation_description);

  // .tensorflow.DataType dtype = 1;
  void clear_dtype();
  static const int kDtypeFieldNumber = 1;
  ::tensorflow::DataType dtype() const;
  void set_dtype(::tensorflow::DataType value);

  // @@protoc_insertion_point(class_scope:tensorflow.TensorDescription)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  friend class ::google::protobuf::Arena;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::tensorflow::TensorShapeProto* shape_;
  ::tensorflow::AllocationDescription* allocation_description_;
  int dtype_;
  mutable int _cached_size_;
  friend struct protobuf_tensorflow_2fcore_2fframework_2ftensor_5fdescription_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// TensorDescription

// .tensorflow.DataType dtype = 1;
inline void TensorDescription::clear_dtype() {
  dtype_ = 0;
}
inline ::tensorflow::DataType TensorDescription::dtype() const {
  // @@protoc_insertion_point(field_get:tensorflow.TensorDescription.dtype)
  return static_cast< ::tensorflow::DataType >(dtype_);
}
inline void TensorDescription::set_dtype(::tensorflow::DataType value) {
  
  dtype_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.TensorDescription.dtype)
}

// .tensorflow.TensorShapeProto shape = 2;
inline bool TensorDescription::has_shape() const {
  return this != internal_default_instance() && shape_ != NULL;
}
inline void TensorDescription::clear_shape() {
  if (GetArenaNoVirtual() == NULL && shape_ != NULL) delete shape_;
  shape_ = NULL;
}
inline const ::tensorflow::TensorShapeProto& TensorDescription::shape() const {
  // @@protoc_insertion_point(field_get:tensorflow.TensorDescription.shape)
  return shape_ != NULL ? *shape_
                         : *::tensorflow::TensorShapeProto::internal_default_instance();
}
inline ::tensorflow::TensorShapeProto* TensorDescription::mutable_shape() {
  
  if (shape_ == NULL) {
    _slow_mutable_shape();
  }
  // @@protoc_insertion_point(field_mutable:tensorflow.TensorDescription.shape)
  return shape_;
}
inline ::tensorflow::TensorShapeProto* TensorDescription::release_shape() {
  // @@protoc_insertion_point(field_release:tensorflow.TensorDescription.shape)
  
  if (GetArenaNoVirtual() != NULL) {
    return _slow_release_shape();
  } else {
    ::tensorflow::TensorShapeProto* temp = shape_;
    shape_ = NULL;
    return temp;
  }
}
inline  void TensorDescription::set_allocated_shape(::tensorflow::TensorShapeProto* shape) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete shape_;
  }
  if (shape != NULL) {
    _slow_set_allocated_shape(message_arena, &shape);
  }
  shape_ = shape;
  if (shape) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:tensorflow.TensorDescription.shape)
}

// .tensorflow.AllocationDescription allocation_description = 4;
inline bool TensorDescription::has_allocation_description() const {
  return this != internal_default_instance() && allocation_description_ != NULL;
}
inline void TensorDescription::clear_allocation_description() {
  if (GetArenaNoVirtual() == NULL && allocation_description_ != NULL) delete allocation_description_;
  allocation_description_ = NULL;
}
inline const ::tensorflow::AllocationDescription& TensorDescription::allocation_description() const {
  // @@protoc_insertion_point(field_get:tensorflow.TensorDescription.allocation_description)
  return allocation_description_ != NULL ? *allocation_description_
                         : *::tensorflow::AllocationDescription::internal_default_instance();
}
inline ::tensorflow::AllocationDescription* TensorDescription::mutable_allocation_description() {
  
  if (allocation_description_ == NULL) {
    _slow_mutable_allocation_description();
  }
  // @@protoc_insertion_point(field_mutable:tensorflow.TensorDescription.allocation_description)
  return allocation_description_;
}
inline ::tensorflow::AllocationDescription* TensorDescription::release_allocation_description() {
  // @@protoc_insertion_point(field_release:tensorflow.TensorDescription.allocation_description)
  
  if (GetArenaNoVirtual() != NULL) {
    return _slow_release_allocation_description();
  } else {
    ::tensorflow::AllocationDescription* temp = allocation_description_;
    allocation_description_ = NULL;
    return temp;
  }
}
inline  void TensorDescription::set_allocated_allocation_description(::tensorflow::AllocationDescription* allocation_description) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete allocation_description_;
  }
  if (allocation_description != NULL) {
    _slow_set_allocated_allocation_description(message_arena, &allocation_description);
  }
  allocation_description_ = allocation_description;
  if (allocation_description) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:tensorflow.TensorDescription.allocation_description)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace tensorflow

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_tensorflow_2fcore_2fframework_2ftensor_5fdescription_2eproto__INCLUDED
