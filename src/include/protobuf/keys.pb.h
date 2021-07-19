// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: keys.proto

#ifndef PROTOBUF_keys_2eproto__INCLUDED
#define PROTOBUF_keys_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace com {
namespace collaborative {
namespace ml {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_keys_2eproto();
void protobuf_AssignDesc_keys_2eproto();
void protobuf_ShutdownFile_keys_2eproto();

class PB_Keys;
class PB_PublicN;

// ===================================================================

class PB_Keys : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:com.collaborative.ml.PB_Keys) */ {
 public:
  PB_Keys();
  virtual ~PB_Keys();

  PB_Keys(const PB_Keys& from);

  inline PB_Keys& operator=(const PB_Keys& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const PB_Keys& default_instance();

  void Swap(PB_Keys* other);

  // implements Message ----------------------------------------------

  inline PB_Keys* New() const { return New(NULL); }

  PB_Keys* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PB_Keys& from);
  void MergeFrom(const PB_Keys& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(PB_Keys* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional int32 public_key_s = 1;
  void clear_public_key_s();
  static const int kPublicKeySFieldNumber = 1;
  ::google::protobuf::int32 public_key_s() const;
  void set_public_key_s(::google::protobuf::int32 value);

  // optional int32 public_key_w = 2;
  void clear_public_key_w();
  static const int kPublicKeyWFieldNumber = 2;
  ::google::protobuf::int32 public_key_w() const;
  void set_public_key_w(::google::protobuf::int32 value);

  // optional int32 public_key_l = 3;
  void clear_public_key_l();
  static const int kPublicKeyLFieldNumber = 3;
  ::google::protobuf::int32 public_key_l() const;
  void set_public_key_l(::google::protobuf::int32 value);

  // repeated .com.collaborative.ml.PB_PublicN public_key_n = 4;
  int public_key_n_size() const;
  void clear_public_key_n();
  static const int kPublicKeyNFieldNumber = 4;
  const ::com::collaborative::ml::PB_PublicN& public_key_n(int index) const;
  ::com::collaborative::ml::PB_PublicN* mutable_public_key_n(int index);
  ::com::collaborative::ml::PB_PublicN* add_public_key_n();
  ::google::protobuf::RepeatedPtrField< ::com::collaborative::ml::PB_PublicN >*
      mutable_public_key_n();
  const ::google::protobuf::RepeatedPtrField< ::com::collaborative::ml::PB_PublicN >&
      public_key_n() const;

  // optional string public_key_g = 5;
  void clear_public_key_g();
  static const int kPublicKeyGFieldNumber = 5;
  const ::std::string& public_key_g() const;
  void set_public_key_g(const ::std::string& value);
  void set_public_key_g(const char* value);
  void set_public_key_g(const char* value, size_t size);
  ::std::string* mutable_public_key_g();
  ::std::string* release_public_key_g();
  void set_allocated_public_key_g(::std::string* public_key_g);

  // optional string public_key_delta = 6;
  void clear_public_key_delta();
  static const int kPublicKeyDeltaFieldNumber = 6;
  const ::std::string& public_key_delta() const;
  void set_public_key_delta(const ::std::string& value);
  void set_public_key_delta(const char* value);
  void set_public_key_delta(const char* value, size_t size);
  ::std::string* mutable_public_key_delta();
  ::std::string* release_public_key_delta();
  void set_allocated_public_key_delta(::std::string* public_key_delta);

  // optional int32 auth_server_i = 7;
  void clear_auth_server_i();
  static const int kAuthServerIFieldNumber = 7;
  ::google::protobuf::int32 auth_server_i() const;
  void set_auth_server_i(::google::protobuf::int32 value);

  // optional string auth_server_si = 8;
  void clear_auth_server_si();
  static const int kAuthServerSiFieldNumber = 8;
  const ::std::string& auth_server_si() const;
  void set_auth_server_si(const ::std::string& value);
  void set_auth_server_si(const char* value);
  void set_auth_server_si(const char* value, size_t size);
  ::std::string* mutable_auth_server_si();
  ::std::string* release_auth_server_si();
  void set_allocated_auth_server_si(::std::string* auth_server_si);

  // @@protoc_insertion_point(class_scope:com.collaborative.ml.PB_Keys)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::int32 public_key_s_;
  ::google::protobuf::int32 public_key_w_;
  ::google::protobuf::RepeatedPtrField< ::com::collaborative::ml::PB_PublicN > public_key_n_;
  ::google::protobuf::internal::ArenaStringPtr public_key_g_;
  ::google::protobuf::int32 public_key_l_;
  ::google::protobuf::int32 auth_server_i_;
  ::google::protobuf::internal::ArenaStringPtr public_key_delta_;
  ::google::protobuf::internal::ArenaStringPtr auth_server_si_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_keys_2eproto();
  friend void protobuf_AssignDesc_keys_2eproto();
  friend void protobuf_ShutdownFile_keys_2eproto();

  void InitAsDefaultInstance();
  static PB_Keys* default_instance_;
};
// -------------------------------------------------------------------

class PB_PublicN : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:com.collaborative.ml.PB_PublicN) */ {
 public:
  PB_PublicN();
  virtual ~PB_PublicN();

  PB_PublicN(const PB_PublicN& from);

  inline PB_PublicN& operator=(const PB_PublicN& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const PB_PublicN& default_instance();

  void Swap(PB_PublicN* other);

  // implements Message ----------------------------------------------

  inline PB_PublicN* New() const { return New(NULL); }

  PB_PublicN* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PB_PublicN& from);
  void MergeFrom(const PB_PublicN& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(PB_PublicN* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string n = 1;
  void clear_n();
  static const int kNFieldNumber = 1;
  const ::std::string& n() const;
  void set_n(const ::std::string& value);
  void set_n(const char* value);
  void set_n(const char* value, size_t size);
  ::std::string* mutable_n();
  ::std::string* release_n();
  void set_allocated_n(::std::string* n);

  // @@protoc_insertion_point(class_scope:com.collaborative.ml.PB_PublicN)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::internal::ArenaStringPtr n_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_keys_2eproto();
  friend void protobuf_AssignDesc_keys_2eproto();
  friend void protobuf_ShutdownFile_keys_2eproto();

  void InitAsDefaultInstance();
  static PB_PublicN* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// PB_Keys

// optional int32 public_key_s = 1;
inline void PB_Keys::clear_public_key_s() {
  public_key_s_ = 0;
}
inline ::google::protobuf::int32 PB_Keys::public_key_s() const {
  // @@protoc_insertion_point(field_get:com.collaborative.ml.PB_Keys.public_key_s)
  return public_key_s_;
}
inline void PB_Keys::set_public_key_s(::google::protobuf::int32 value) {
  
  public_key_s_ = value;
  // @@protoc_insertion_point(field_set:com.collaborative.ml.PB_Keys.public_key_s)
}

// optional int32 public_key_w = 2;
inline void PB_Keys::clear_public_key_w() {
  public_key_w_ = 0;
}
inline ::google::protobuf::int32 PB_Keys::public_key_w() const {
  // @@protoc_insertion_point(field_get:com.collaborative.ml.PB_Keys.public_key_w)
  return public_key_w_;
}
inline void PB_Keys::set_public_key_w(::google::protobuf::int32 value) {
  
  public_key_w_ = value;
  // @@protoc_insertion_point(field_set:com.collaborative.ml.PB_Keys.public_key_w)
}

// optional int32 public_key_l = 3;
inline void PB_Keys::clear_public_key_l() {
  public_key_l_ = 0;
}
inline ::google::protobuf::int32 PB_Keys::public_key_l() const {
  // @@protoc_insertion_point(field_get:com.collaborative.ml.PB_Keys.public_key_l)
  return public_key_l_;
}
inline void PB_Keys::set_public_key_l(::google::protobuf::int32 value) {
  
  public_key_l_ = value;
  // @@protoc_insertion_point(field_set:com.collaborative.ml.PB_Keys.public_key_l)
}

// repeated .com.collaborative.ml.PB_PublicN public_key_n = 4;
inline int PB_Keys::public_key_n_size() const {
  return public_key_n_.size();
}
inline void PB_Keys::clear_public_key_n() {
  public_key_n_.Clear();
}
inline const ::com::collaborative::ml::PB_PublicN& PB_Keys::public_key_n(int index) const {
  // @@protoc_insertion_point(field_get:com.collaborative.ml.PB_Keys.public_key_n)
  return public_key_n_.Get(index);
}
inline ::com::collaborative::ml::PB_PublicN* PB_Keys::mutable_public_key_n(int index) {
  // @@protoc_insertion_point(field_mutable:com.collaborative.ml.PB_Keys.public_key_n)
  return public_key_n_.Mutable(index);
}
inline ::com::collaborative::ml::PB_PublicN* PB_Keys::add_public_key_n() {
  // @@protoc_insertion_point(field_add:com.collaborative.ml.PB_Keys.public_key_n)
  return public_key_n_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::com::collaborative::ml::PB_PublicN >*
PB_Keys::mutable_public_key_n() {
  // @@protoc_insertion_point(field_mutable_list:com.collaborative.ml.PB_Keys.public_key_n)
  return &public_key_n_;
}
inline const ::google::protobuf::RepeatedPtrField< ::com::collaborative::ml::PB_PublicN >&
PB_Keys::public_key_n() const {
  // @@protoc_insertion_point(field_list:com.collaborative.ml.PB_Keys.public_key_n)
  return public_key_n_;
}

// optional string public_key_g = 5;
inline void PB_Keys::clear_public_key_g() {
  public_key_g_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& PB_Keys::public_key_g() const {
  // @@protoc_insertion_point(field_get:com.collaborative.ml.PB_Keys.public_key_g)
  return public_key_g_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void PB_Keys::set_public_key_g(const ::std::string& value) {
  
  public_key_g_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:com.collaborative.ml.PB_Keys.public_key_g)
}
inline void PB_Keys::set_public_key_g(const char* value) {
  
  public_key_g_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:com.collaborative.ml.PB_Keys.public_key_g)
}
inline void PB_Keys::set_public_key_g(const char* value, size_t size) {
  
  public_key_g_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:com.collaborative.ml.PB_Keys.public_key_g)
}
inline ::std::string* PB_Keys::mutable_public_key_g() {
  
  // @@protoc_insertion_point(field_mutable:com.collaborative.ml.PB_Keys.public_key_g)
  return public_key_g_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* PB_Keys::release_public_key_g() {
  // @@protoc_insertion_point(field_release:com.collaborative.ml.PB_Keys.public_key_g)
  
  return public_key_g_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void PB_Keys::set_allocated_public_key_g(::std::string* public_key_g) {
  if (public_key_g != NULL) {
    
  } else {
    
  }
  public_key_g_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), public_key_g);
  // @@protoc_insertion_point(field_set_allocated:com.collaborative.ml.PB_Keys.public_key_g)
}

// optional string public_key_delta = 6;
inline void PB_Keys::clear_public_key_delta() {
  public_key_delta_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& PB_Keys::public_key_delta() const {
  // @@protoc_insertion_point(field_get:com.collaborative.ml.PB_Keys.public_key_delta)
  return public_key_delta_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void PB_Keys::set_public_key_delta(const ::std::string& value) {
  
  public_key_delta_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:com.collaborative.ml.PB_Keys.public_key_delta)
}
inline void PB_Keys::set_public_key_delta(const char* value) {
  
  public_key_delta_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:com.collaborative.ml.PB_Keys.public_key_delta)
}
inline void PB_Keys::set_public_key_delta(const char* value, size_t size) {
  
  public_key_delta_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:com.collaborative.ml.PB_Keys.public_key_delta)
}
inline ::std::string* PB_Keys::mutable_public_key_delta() {
  
  // @@protoc_insertion_point(field_mutable:com.collaborative.ml.PB_Keys.public_key_delta)
  return public_key_delta_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* PB_Keys::release_public_key_delta() {
  // @@protoc_insertion_point(field_release:com.collaborative.ml.PB_Keys.public_key_delta)
  
  return public_key_delta_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void PB_Keys::set_allocated_public_key_delta(::std::string* public_key_delta) {
  if (public_key_delta != NULL) {
    
  } else {
    
  }
  public_key_delta_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), public_key_delta);
  // @@protoc_insertion_point(field_set_allocated:com.collaborative.ml.PB_Keys.public_key_delta)
}

// optional int32 auth_server_i = 7;
inline void PB_Keys::clear_auth_server_i() {
  auth_server_i_ = 0;
}
inline ::google::protobuf::int32 PB_Keys::auth_server_i() const {
  // @@protoc_insertion_point(field_get:com.collaborative.ml.PB_Keys.auth_server_i)
  return auth_server_i_;
}
inline void PB_Keys::set_auth_server_i(::google::protobuf::int32 value) {
  
  auth_server_i_ = value;
  // @@protoc_insertion_point(field_set:com.collaborative.ml.PB_Keys.auth_server_i)
}

// optional string auth_server_si = 8;
inline void PB_Keys::clear_auth_server_si() {
  auth_server_si_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& PB_Keys::auth_server_si() const {
  // @@protoc_insertion_point(field_get:com.collaborative.ml.PB_Keys.auth_server_si)
  return auth_server_si_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void PB_Keys::set_auth_server_si(const ::std::string& value) {
  
  auth_server_si_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:com.collaborative.ml.PB_Keys.auth_server_si)
}
inline void PB_Keys::set_auth_server_si(const char* value) {
  
  auth_server_si_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:com.collaborative.ml.PB_Keys.auth_server_si)
}
inline void PB_Keys::set_auth_server_si(const char* value, size_t size) {
  
  auth_server_si_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:com.collaborative.ml.PB_Keys.auth_server_si)
}
inline ::std::string* PB_Keys::mutable_auth_server_si() {
  
  // @@protoc_insertion_point(field_mutable:com.collaborative.ml.PB_Keys.auth_server_si)
  return auth_server_si_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* PB_Keys::release_auth_server_si() {
  // @@protoc_insertion_point(field_release:com.collaborative.ml.PB_Keys.auth_server_si)
  
  return auth_server_si_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void PB_Keys::set_allocated_auth_server_si(::std::string* auth_server_si) {
  if (auth_server_si != NULL) {
    
  } else {
    
  }
  auth_server_si_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), auth_server_si);
  // @@protoc_insertion_point(field_set_allocated:com.collaborative.ml.PB_Keys.auth_server_si)
}

// -------------------------------------------------------------------

// PB_PublicN

// optional string n = 1;
inline void PB_PublicN::clear_n() {
  n_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& PB_PublicN::n() const {
  // @@protoc_insertion_point(field_get:com.collaborative.ml.PB_PublicN.n)
  return n_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void PB_PublicN::set_n(const ::std::string& value) {
  
  n_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:com.collaborative.ml.PB_PublicN.n)
}
inline void PB_PublicN::set_n(const char* value) {
  
  n_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:com.collaborative.ml.PB_PublicN.n)
}
inline void PB_PublicN::set_n(const char* value, size_t size) {
  
  n_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:com.collaborative.ml.PB_PublicN.n)
}
inline ::std::string* PB_PublicN::mutable_n() {
  
  // @@protoc_insertion_point(field_mutable:com.collaborative.ml.PB_PublicN.n)
  return n_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* PB_PublicN::release_n() {
  // @@protoc_insertion_point(field_release:com.collaborative.ml.PB_PublicN.n)
  
  return n_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void PB_PublicN::set_allocated_n(::std::string* n) {
  if (n != NULL) {
    
  } else {
    
  }
  n_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), n);
  // @@protoc_insertion_point(field_set_allocated:com.collaborative.ml.PB_PublicN.n)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace ml
}  // namespace collaborative
}  // namespace com

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_keys_2eproto__INCLUDED