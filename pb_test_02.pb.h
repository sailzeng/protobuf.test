// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: pb_test_02.proto

#ifndef PROTOBUF_pb_5ftest_5f02_2eproto__INCLUDED
#define PROTOBUF_pb_5ftest_5f02_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace N01 {
namespace N02 {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_pb_5ftest_5f02_2eproto();
void protobuf_AssignDesc_pb_5ftest_5f02_2eproto();
void protobuf_ShutdownFile_pb_5ftest_5f02_2eproto();

class S1;
class S2;
class S3;
class S3_S4;

enum S3_E1 {
  S3_E1_E1_A = 0,
  S3_E1_E1_B = 1,
  S3_E1_E1_C = 2
};
bool S3_E1_IsValid(int value);
const S3_E1 S3_E1_E1_MIN = S3_E1_E1_A;
const S3_E1 S3_E1_E1_MAX = S3_E1_E1_C;
const int S3_E1_E1_ARRAYSIZE = S3_E1_E1_MAX + 1;

const ::google::protobuf::EnumDescriptor* S3_E1_descriptor();
inline const ::std::string& S3_E1_Name(S3_E1 value) {
  return ::google::protobuf::internal::NameOfEnum(
    S3_E1_descriptor(), value);
}
inline bool S3_E1_Parse(
    const ::std::string& name, S3_E1* value) {
  return ::google::protobuf::internal::ParseNamedEnum<S3_E1>(
    S3_E1_descriptor(), name, value);
}
// ===================================================================

class S1 : public ::google::protobuf::Message {
 public:
  S1();
  virtual ~S1();

  S1(const S1& from);

  inline S1& operator=(const S1& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const S1& default_instance();

  void Swap(S1* other);

  // implements Message ----------------------------------------------

  S1* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const S1& from);
  void MergeFrom(const S1& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int32 s1_a = 1;
  inline bool has_s1_a() const;
  inline void clear_s1_a();
  static const int kS1AFieldNumber = 1;
  inline ::google::protobuf::int32 s1_a() const;
  inline void set_s1_a(::google::protobuf::int32 value);

  // required int32 s1_b = 2;
  inline bool has_s1_b() const;
  inline void clear_s1_b();
  static const int kS1BFieldNumber = 2;
  inline ::google::protobuf::int32 s1_b() const;
  inline void set_s1_b(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:N01.N02.S1)
 private:
  inline void set_has_s1_a();
  inline void clear_has_s1_a();
  inline void set_has_s1_b();
  inline void clear_has_s1_b();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::int32 s1_a_;
  ::google::protobuf::int32 s1_b_;
  friend void  protobuf_AddDesc_pb_5ftest_5f02_2eproto();
  friend void protobuf_AssignDesc_pb_5ftest_5f02_2eproto();
  friend void protobuf_ShutdownFile_pb_5ftest_5f02_2eproto();

  void InitAsDefaultInstance();
  static S1* default_instance_;
};
// -------------------------------------------------------------------

class S2 : public ::google::protobuf::Message {
 public:
  S2();
  virtual ~S2();

  S2(const S2& from);

  inline S2& operator=(const S2& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const S2& default_instance();

  void Swap(S2* other);

  // implements Message ----------------------------------------------

  S2* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const S2& from);
  void MergeFrom(const S2& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int32 s2_a = 1;
  inline bool has_s2_a() const;
  inline void clear_s2_a();
  static const int kS2AFieldNumber = 1;
  inline ::google::protobuf::int32 s2_a() const;
  inline void set_s2_a(::google::protobuf::int32 value);

  // repeated string s2_b = 2;
  inline int s2_b_size() const;
  inline void clear_s2_b();
  static const int kS2BFieldNumber = 2;
  inline const ::std::string& s2_b(int index) const;
  inline ::std::string* mutable_s2_b(int index);
  inline void set_s2_b(int index, const ::std::string& value);
  inline void set_s2_b(int index, const char* value);
  inline void set_s2_b(int index, const char* value, size_t size);
  inline ::std::string* add_s2_b();
  inline void add_s2_b(const ::std::string& value);
  inline void add_s2_b(const char* value);
  inline void add_s2_b(const char* value, size_t size);
  inline const ::google::protobuf::RepeatedPtrField< ::std::string>& s2_b() const;
  inline ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_s2_b();

  // @@protoc_insertion_point(class_scope:N01.N02.S2)
 private:
  inline void set_has_s2_a();
  inline void clear_has_s2_a();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::std::string> s2_b_;
  ::google::protobuf::int32 s2_a_;
  friend void  protobuf_AddDesc_pb_5ftest_5f02_2eproto();
  friend void protobuf_AssignDesc_pb_5ftest_5f02_2eproto();
  friend void protobuf_ShutdownFile_pb_5ftest_5f02_2eproto();

  void InitAsDefaultInstance();
  static S2* default_instance_;
};
// -------------------------------------------------------------------

class S3_S4 : public ::google::protobuf::Message {
 public:
  S3_S4();
  virtual ~S3_S4();

  S3_S4(const S3_S4& from);

  inline S3_S4& operator=(const S3_S4& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const S3_S4& default_instance();

  void Swap(S3_S4* other);

  // implements Message ----------------------------------------------

  S3_S4* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const S3_S4& from);
  void MergeFrom(const S3_S4& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional .N01.N02.S3.E1 s4_a = 1 [default = E1_A];
  inline bool has_s4_a() const;
  inline void clear_s4_a();
  static const int kS4AFieldNumber = 1;
  inline ::N01::N02::S3_E1 s4_a() const;
  inline void set_s4_a(::N01::N02::S3_E1 value);

  // required string s4_b = 2;
  inline bool has_s4_b() const;
  inline void clear_s4_b();
  static const int kS4BFieldNumber = 2;
  inline const ::std::string& s4_b() const;
  inline void set_s4_b(const ::std::string& value);
  inline void set_s4_b(const char* value);
  inline void set_s4_b(const char* value, size_t size);
  inline ::std::string* mutable_s4_b();
  inline ::std::string* release_s4_b();
  inline void set_allocated_s4_b(::std::string* s4_b);

  // @@protoc_insertion_point(class_scope:N01.N02.S3.S4)
 private:
  inline void set_has_s4_a();
  inline void clear_has_s4_a();
  inline void set_has_s4_b();
  inline void clear_has_s4_b();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* s4_b_;
  int s4_a_;
  friend void  protobuf_AddDesc_pb_5ftest_5f02_2eproto();
  friend void protobuf_AssignDesc_pb_5ftest_5f02_2eproto();
  friend void protobuf_ShutdownFile_pb_5ftest_5f02_2eproto();

  void InitAsDefaultInstance();
  static S3_S4* default_instance_;
};
// -------------------------------------------------------------------

class S3 : public ::google::protobuf::Message {
 public:
  S3();
  virtual ~S3();

  S3(const S3& from);

  inline S3& operator=(const S3& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const S3& default_instance();

  void Swap(S3* other);

  // implements Message ----------------------------------------------

  S3* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const S3& from);
  void MergeFrom(const S3& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  typedef S3_S4 S4;

  typedef S3_E1 E1;
  static const E1 E1_A = S3_E1_E1_A;
  static const E1 E1_B = S3_E1_E1_B;
  static const E1 E1_C = S3_E1_E1_C;
  static inline bool E1_IsValid(int value) {
    return S3_E1_IsValid(value);
  }
  static const E1 E1_MIN =
    S3_E1_E1_MIN;
  static const E1 E1_MAX =
    S3_E1_E1_MAX;
  static const int E1_ARRAYSIZE =
    S3_E1_E1_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  E1_descriptor() {
    return S3_E1_descriptor();
  }
  static inline const ::std::string& E1_Name(E1 value) {
    return S3_E1_Name(value);
  }
  static inline bool E1_Parse(const ::std::string& name,
      E1* value) {
    return S3_E1_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // required int32 s3_a = 1;
  inline bool has_s3_a() const;
  inline void clear_s3_a();
  static const int kS3AFieldNumber = 1;
  inline ::google::protobuf::int32 s3_a() const;
  inline void set_s3_a(::google::protobuf::int32 value);

  // required string s3_b = 2;
  inline bool has_s3_b() const;
  inline void clear_s3_b();
  static const int kS3BFieldNumber = 2;
  inline const ::std::string& s3_b() const;
  inline void set_s3_b(const ::std::string& value);
  inline void set_s3_b(const char* value);
  inline void set_s3_b(const char* value, size_t size);
  inline ::std::string* mutable_s3_b();
  inline ::std::string* release_s3_b();
  inline void set_allocated_s3_b(::std::string* s3_b);

  // optional string s3_c = 3;
  inline bool has_s3_c() const;
  inline void clear_s3_c();
  static const int kS3CFieldNumber = 3;
  inline const ::std::string& s3_c() const;
  inline void set_s3_c(const ::std::string& value);
  inline void set_s3_c(const char* value);
  inline void set_s3_c(const char* value, size_t size);
  inline ::std::string* mutable_s3_c();
  inline ::std::string* release_s3_c();
  inline void set_allocated_s3_c(::std::string* s3_c);

  // repeated int64 s3_d = 4;
  inline int s3_d_size() const;
  inline void clear_s3_d();
  static const int kS3DFieldNumber = 4;
  inline ::google::protobuf::int64 s3_d(int index) const;
  inline void set_s3_d(int index, ::google::protobuf::int64 value);
  inline void add_s3_d(::google::protobuf::int64 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::int64 >&
      s3_d() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::int64 >*
      mutable_s3_d();

  // repeated .N01.N02.S1 s3_e = 5;
  inline int s3_e_size() const;
  inline void clear_s3_e();
  static const int kS3EFieldNumber = 5;
  inline const ::N01::N02::S1& s3_e(int index) const;
  inline ::N01::N02::S1* mutable_s3_e(int index);
  inline ::N01::N02::S1* add_s3_e();
  inline const ::google::protobuf::RepeatedPtrField< ::N01::N02::S1 >&
      s3_e() const;
  inline ::google::protobuf::RepeatedPtrField< ::N01::N02::S1 >*
      mutable_s3_e();

  // required .N01.N02.S2 s3_f = 6;
  inline bool has_s3_f() const;
  inline void clear_s3_f();
  static const int kS3FFieldNumber = 6;
  inline const ::N01::N02::S2& s3_f() const;
  inline ::N01::N02::S2* mutable_s3_f();
  inline ::N01::N02::S2* release_s3_f();
  inline void set_allocated_s3_f(::N01::N02::S2* s3_f);

  // repeated .N01.N02.S3.S4 s3_g = 7;
  inline int s3_g_size() const;
  inline void clear_s3_g();
  static const int kS3GFieldNumber = 7;
  inline const ::N01::N02::S3_S4& s3_g(int index) const;
  inline ::N01::N02::S3_S4* mutable_s3_g(int index);
  inline ::N01::N02::S3_S4* add_s3_g();
  inline const ::google::protobuf::RepeatedPtrField< ::N01::N02::S3_S4 >&
      s3_g() const;
  inline ::google::protobuf::RepeatedPtrField< ::N01::N02::S3_S4 >*
      mutable_s3_g();

  // @@protoc_insertion_point(class_scope:N01.N02.S3)
 private:
  inline void set_has_s3_a();
  inline void clear_has_s3_a();
  inline void set_has_s3_b();
  inline void clear_has_s3_b();
  inline void set_has_s3_c();
  inline void clear_has_s3_c();
  inline void set_has_s3_f();
  inline void clear_has_s3_f();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* s3_b_;
  ::std::string* s3_c_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int64 > s3_d_;
  ::google::protobuf::RepeatedPtrField< ::N01::N02::S1 > s3_e_;
  ::N01::N02::S2* s3_f_;
  ::google::protobuf::RepeatedPtrField< ::N01::N02::S3_S4 > s3_g_;
  ::google::protobuf::int32 s3_a_;
  friend void  protobuf_AddDesc_pb_5ftest_5f02_2eproto();
  friend void protobuf_AssignDesc_pb_5ftest_5f02_2eproto();
  friend void protobuf_ShutdownFile_pb_5ftest_5f02_2eproto();

  void InitAsDefaultInstance();
  static S3* default_instance_;
};
// ===================================================================


// ===================================================================

// S1

// required int32 s1_a = 1;
inline bool S1::has_s1_a() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void S1::set_has_s1_a() {
  _has_bits_[0] |= 0x00000001u;
}
inline void S1::clear_has_s1_a() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void S1::clear_s1_a() {
  s1_a_ = 0;
  clear_has_s1_a();
}
inline ::google::protobuf::int32 S1::s1_a() const {
  // @@protoc_insertion_point(field_get:N01.N02.S1.s1_a)
  return s1_a_;
}
inline void S1::set_s1_a(::google::protobuf::int32 value) {
  set_has_s1_a();
  s1_a_ = value;
  // @@protoc_insertion_point(field_set:N01.N02.S1.s1_a)
}

// required int32 s1_b = 2;
inline bool S1::has_s1_b() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void S1::set_has_s1_b() {
  _has_bits_[0] |= 0x00000002u;
}
inline void S1::clear_has_s1_b() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void S1::clear_s1_b() {
  s1_b_ = 0;
  clear_has_s1_b();
}
inline ::google::protobuf::int32 S1::s1_b() const {
  // @@protoc_insertion_point(field_get:N01.N02.S1.s1_b)
  return s1_b_;
}
inline void S1::set_s1_b(::google::protobuf::int32 value) {
  set_has_s1_b();
  s1_b_ = value;
  // @@protoc_insertion_point(field_set:N01.N02.S1.s1_b)
}

// -------------------------------------------------------------------

// S2

// required int32 s2_a = 1;
inline bool S2::has_s2_a() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void S2::set_has_s2_a() {
  _has_bits_[0] |= 0x00000001u;
}
inline void S2::clear_has_s2_a() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void S2::clear_s2_a() {
  s2_a_ = 0;
  clear_has_s2_a();
}
inline ::google::protobuf::int32 S2::s2_a() const {
  // @@protoc_insertion_point(field_get:N01.N02.S2.s2_a)
  return s2_a_;
}
inline void S2::set_s2_a(::google::protobuf::int32 value) {
  set_has_s2_a();
  s2_a_ = value;
  // @@protoc_insertion_point(field_set:N01.N02.S2.s2_a)
}

// repeated string s2_b = 2;
inline int S2::s2_b_size() const {
  return s2_b_.size();
}
inline void S2::clear_s2_b() {
  s2_b_.Clear();
}
inline const ::std::string& S2::s2_b(int index) const {
  // @@protoc_insertion_point(field_get:N01.N02.S2.s2_b)
  return s2_b_.Get(index);
}
inline ::std::string* S2::mutable_s2_b(int index) {
  // @@protoc_insertion_point(field_mutable:N01.N02.S2.s2_b)
  return s2_b_.Mutable(index);
}
inline void S2::set_s2_b(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:N01.N02.S2.s2_b)
  s2_b_.Mutable(index)->assign(value);
}
inline void S2::set_s2_b(int index, const char* value) {
  s2_b_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:N01.N02.S2.s2_b)
}
inline void S2::set_s2_b(int index, const char* value, size_t size) {
  s2_b_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:N01.N02.S2.s2_b)
}
inline ::std::string* S2::add_s2_b() {
  return s2_b_.Add();
}
inline void S2::add_s2_b(const ::std::string& value) {
  s2_b_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:N01.N02.S2.s2_b)
}
inline void S2::add_s2_b(const char* value) {
  s2_b_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:N01.N02.S2.s2_b)
}
inline void S2::add_s2_b(const char* value, size_t size) {
  s2_b_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:N01.N02.S2.s2_b)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
S2::s2_b() const {
  // @@protoc_insertion_point(field_list:N01.N02.S2.s2_b)
  return s2_b_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
S2::mutable_s2_b() {
  // @@protoc_insertion_point(field_mutable_list:N01.N02.S2.s2_b)
  return &s2_b_;
}

// -------------------------------------------------------------------

// S3_S4

// optional .N01.N02.S3.E1 s4_a = 1 [default = E1_A];
inline bool S3_S4::has_s4_a() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void S3_S4::set_has_s4_a() {
  _has_bits_[0] |= 0x00000001u;
}
inline void S3_S4::clear_has_s4_a() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void S3_S4::clear_s4_a() {
  s4_a_ = 0;
  clear_has_s4_a();
}
inline ::N01::N02::S3_E1 S3_S4::s4_a() const {
  // @@protoc_insertion_point(field_get:N01.N02.S3.S4.s4_a)
  return static_cast< ::N01::N02::S3_E1 >(s4_a_);
}
inline void S3_S4::set_s4_a(::N01::N02::S3_E1 value) {
  assert(::N01::N02::S3_E1_IsValid(value));
  set_has_s4_a();
  s4_a_ = value;
  // @@protoc_insertion_point(field_set:N01.N02.S3.S4.s4_a)
}

// required string s4_b = 2;
inline bool S3_S4::has_s4_b() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void S3_S4::set_has_s4_b() {
  _has_bits_[0] |= 0x00000002u;
}
inline void S3_S4::clear_has_s4_b() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void S3_S4::clear_s4_b() {
  if (s4_b_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    s4_b_->clear();
  }
  clear_has_s4_b();
}
inline const ::std::string& S3_S4::s4_b() const {
  // @@protoc_insertion_point(field_get:N01.N02.S3.S4.s4_b)
  return *s4_b_;
}
inline void S3_S4::set_s4_b(const ::std::string& value) {
  set_has_s4_b();
  if (s4_b_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    s4_b_ = new ::std::string;
  }
  s4_b_->assign(value);
  // @@protoc_insertion_point(field_set:N01.N02.S3.S4.s4_b)
}
inline void S3_S4::set_s4_b(const char* value) {
  set_has_s4_b();
  if (s4_b_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    s4_b_ = new ::std::string;
  }
  s4_b_->assign(value);
  // @@protoc_insertion_point(field_set_char:N01.N02.S3.S4.s4_b)
}
inline void S3_S4::set_s4_b(const char* value, size_t size) {
  set_has_s4_b();
  if (s4_b_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    s4_b_ = new ::std::string;
  }
  s4_b_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:N01.N02.S3.S4.s4_b)
}
inline ::std::string* S3_S4::mutable_s4_b() {
  set_has_s4_b();
  if (s4_b_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    s4_b_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:N01.N02.S3.S4.s4_b)
  return s4_b_;
}
inline ::std::string* S3_S4::release_s4_b() {
  clear_has_s4_b();
  if (s4_b_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = s4_b_;
    s4_b_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void S3_S4::set_allocated_s4_b(::std::string* s4_b) {
  if (s4_b_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete s4_b_;
  }
  if (s4_b) {
    set_has_s4_b();
    s4_b_ = s4_b;
  } else {
    clear_has_s4_b();
    s4_b_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:N01.N02.S3.S4.s4_b)
}

// -------------------------------------------------------------------

// S3

// required int32 s3_a = 1;
inline bool S3::has_s3_a() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void S3::set_has_s3_a() {
  _has_bits_[0] |= 0x00000001u;
}
inline void S3::clear_has_s3_a() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void S3::clear_s3_a() {
  s3_a_ = 0;
  clear_has_s3_a();
}
inline ::google::protobuf::int32 S3::s3_a() const {
  // @@protoc_insertion_point(field_get:N01.N02.S3.s3_a)
  return s3_a_;
}
inline void S3::set_s3_a(::google::protobuf::int32 value) {
  set_has_s3_a();
  s3_a_ = value;
  // @@protoc_insertion_point(field_set:N01.N02.S3.s3_a)
}

// required string s3_b = 2;
inline bool S3::has_s3_b() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void S3::set_has_s3_b() {
  _has_bits_[0] |= 0x00000002u;
}
inline void S3::clear_has_s3_b() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void S3::clear_s3_b() {
  if (s3_b_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    s3_b_->clear();
  }
  clear_has_s3_b();
}
inline const ::std::string& S3::s3_b() const {
  // @@protoc_insertion_point(field_get:N01.N02.S3.s3_b)
  return *s3_b_;
}
inline void S3::set_s3_b(const ::std::string& value) {
  set_has_s3_b();
  if (s3_b_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    s3_b_ = new ::std::string;
  }
  s3_b_->assign(value);
  // @@protoc_insertion_point(field_set:N01.N02.S3.s3_b)
}
inline void S3::set_s3_b(const char* value) {
  set_has_s3_b();
  if (s3_b_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    s3_b_ = new ::std::string;
  }
  s3_b_->assign(value);
  // @@protoc_insertion_point(field_set_char:N01.N02.S3.s3_b)
}
inline void S3::set_s3_b(const char* value, size_t size) {
  set_has_s3_b();
  if (s3_b_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    s3_b_ = new ::std::string;
  }
  s3_b_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:N01.N02.S3.s3_b)
}
inline ::std::string* S3::mutable_s3_b() {
  set_has_s3_b();
  if (s3_b_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    s3_b_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:N01.N02.S3.s3_b)
  return s3_b_;
}
inline ::std::string* S3::release_s3_b() {
  clear_has_s3_b();
  if (s3_b_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = s3_b_;
    s3_b_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void S3::set_allocated_s3_b(::std::string* s3_b) {
  if (s3_b_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete s3_b_;
  }
  if (s3_b) {
    set_has_s3_b();
    s3_b_ = s3_b;
  } else {
    clear_has_s3_b();
    s3_b_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:N01.N02.S3.s3_b)
}

// optional string s3_c = 3;
inline bool S3::has_s3_c() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void S3::set_has_s3_c() {
  _has_bits_[0] |= 0x00000004u;
}
inline void S3::clear_has_s3_c() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void S3::clear_s3_c() {
  if (s3_c_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    s3_c_->clear();
  }
  clear_has_s3_c();
}
inline const ::std::string& S3::s3_c() const {
  // @@protoc_insertion_point(field_get:N01.N02.S3.s3_c)
  return *s3_c_;
}
inline void S3::set_s3_c(const ::std::string& value) {
  set_has_s3_c();
  if (s3_c_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    s3_c_ = new ::std::string;
  }
  s3_c_->assign(value);
  // @@protoc_insertion_point(field_set:N01.N02.S3.s3_c)
}
inline void S3::set_s3_c(const char* value) {
  set_has_s3_c();
  if (s3_c_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    s3_c_ = new ::std::string;
  }
  s3_c_->assign(value);
  // @@protoc_insertion_point(field_set_char:N01.N02.S3.s3_c)
}
inline void S3::set_s3_c(const char* value, size_t size) {
  set_has_s3_c();
  if (s3_c_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    s3_c_ = new ::std::string;
  }
  s3_c_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:N01.N02.S3.s3_c)
}
inline ::std::string* S3::mutable_s3_c() {
  set_has_s3_c();
  if (s3_c_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    s3_c_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:N01.N02.S3.s3_c)
  return s3_c_;
}
inline ::std::string* S3::release_s3_c() {
  clear_has_s3_c();
  if (s3_c_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = s3_c_;
    s3_c_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void S3::set_allocated_s3_c(::std::string* s3_c) {
  if (s3_c_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete s3_c_;
  }
  if (s3_c) {
    set_has_s3_c();
    s3_c_ = s3_c;
  } else {
    clear_has_s3_c();
    s3_c_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:N01.N02.S3.s3_c)
}

// repeated int64 s3_d = 4;
inline int S3::s3_d_size() const {
  return s3_d_.size();
}
inline void S3::clear_s3_d() {
  s3_d_.Clear();
}
inline ::google::protobuf::int64 S3::s3_d(int index) const {
  // @@protoc_insertion_point(field_get:N01.N02.S3.s3_d)
  return s3_d_.Get(index);
}
inline void S3::set_s3_d(int index, ::google::protobuf::int64 value) {
  s3_d_.Set(index, value);
  // @@protoc_insertion_point(field_set:N01.N02.S3.s3_d)
}
inline void S3::add_s3_d(::google::protobuf::int64 value) {
  s3_d_.Add(value);
  // @@protoc_insertion_point(field_add:N01.N02.S3.s3_d)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int64 >&
S3::s3_d() const {
  // @@protoc_insertion_point(field_list:N01.N02.S3.s3_d)
  return s3_d_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int64 >*
S3::mutable_s3_d() {
  // @@protoc_insertion_point(field_mutable_list:N01.N02.S3.s3_d)
  return &s3_d_;
}

// repeated .N01.N02.S1 s3_e = 5;
inline int S3::s3_e_size() const {
  return s3_e_.size();
}
inline void S3::clear_s3_e() {
  s3_e_.Clear();
}
inline const ::N01::N02::S1& S3::s3_e(int index) const {
  // @@protoc_insertion_point(field_get:N01.N02.S3.s3_e)
  return s3_e_.Get(index);
}
inline ::N01::N02::S1* S3::mutable_s3_e(int index) {
  // @@protoc_insertion_point(field_mutable:N01.N02.S3.s3_e)
  return s3_e_.Mutable(index);
}
inline ::N01::N02::S1* S3::add_s3_e() {
  // @@protoc_insertion_point(field_add:N01.N02.S3.s3_e)
  return s3_e_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::N01::N02::S1 >&
S3::s3_e() const {
  // @@protoc_insertion_point(field_list:N01.N02.S3.s3_e)
  return s3_e_;
}
inline ::google::protobuf::RepeatedPtrField< ::N01::N02::S1 >*
S3::mutable_s3_e() {
  // @@protoc_insertion_point(field_mutable_list:N01.N02.S3.s3_e)
  return &s3_e_;
}

// required .N01.N02.S2 s3_f = 6;
inline bool S3::has_s3_f() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void S3::set_has_s3_f() {
  _has_bits_[0] |= 0x00000020u;
}
inline void S3::clear_has_s3_f() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void S3::clear_s3_f() {
  if (s3_f_ != NULL) s3_f_->::N01::N02::S2::Clear();
  clear_has_s3_f();
}
inline const ::N01::N02::S2& S3::s3_f() const {
  // @@protoc_insertion_point(field_get:N01.N02.S3.s3_f)
  return s3_f_ != NULL ? *s3_f_ : *default_instance_->s3_f_;
}
inline ::N01::N02::S2* S3::mutable_s3_f() {
  set_has_s3_f();
  if (s3_f_ == NULL) s3_f_ = new ::N01::N02::S2;
  // @@protoc_insertion_point(field_mutable:N01.N02.S3.s3_f)
  return s3_f_;
}
inline ::N01::N02::S2* S3::release_s3_f() {
  clear_has_s3_f();
  ::N01::N02::S2* temp = s3_f_;
  s3_f_ = NULL;
  return temp;
}
inline void S3::set_allocated_s3_f(::N01::N02::S2* s3_f) {
  delete s3_f_;
  s3_f_ = s3_f;
  if (s3_f) {
    set_has_s3_f();
  } else {
    clear_has_s3_f();
  }
  // @@protoc_insertion_point(field_set_allocated:N01.N02.S3.s3_f)
}

// repeated .N01.N02.S3.S4 s3_g = 7;
inline int S3::s3_g_size() const {
  return s3_g_.size();
}
inline void S3::clear_s3_g() {
  s3_g_.Clear();
}
inline const ::N01::N02::S3_S4& S3::s3_g(int index) const {
  // @@protoc_insertion_point(field_get:N01.N02.S3.s3_g)
  return s3_g_.Get(index);
}
inline ::N01::N02::S3_S4* S3::mutable_s3_g(int index) {
  // @@protoc_insertion_point(field_mutable:N01.N02.S3.s3_g)
  return s3_g_.Mutable(index);
}
inline ::N01::N02::S3_S4* S3::add_s3_g() {
  // @@protoc_insertion_point(field_add:N01.N02.S3.s3_g)
  return s3_g_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::N01::N02::S3_S4 >&
S3::s3_g() const {
  // @@protoc_insertion_point(field_list:N01.N02.S3.s3_g)
  return s3_g_;
}
inline ::google::protobuf::RepeatedPtrField< ::N01::N02::S3_S4 >*
S3::mutable_s3_g() {
  // @@protoc_insertion_point(field_mutable_list:N01.N02.S3.s3_g)
  return &s3_g_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace N02
}  // namespace N01

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::N01::N02::S3_E1> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::N01::N02::S3_E1>() {
  return ::N01::N02::S3_E1_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_pb_5ftest_5f02_2eproto__INCLUDED
