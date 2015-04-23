// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: libfm.proto

#ifndef PROTOBUF_libfm_2eproto__INCLUDED
#define PROTOBUF_libfm_2eproto__INCLUDED

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
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace libFM {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_libfm_2eproto();
void protobuf_AssignDesc_libfm_2eproto();
void protobuf_ShutdownFile_libfm_2eproto();

class Proto_fm_model;

// ===================================================================

class Proto_fm_model : public ::google::protobuf::Message {
 public:
  Proto_fm_model();
  virtual ~Proto_fm_model();

  Proto_fm_model(const Proto_fm_model& from);

  inline Proto_fm_model& operator=(const Proto_fm_model& from) {
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
  static const Proto_fm_model& default_instance();

  void Swap(Proto_fm_model* other);

  // implements Message ----------------------------------------------

  Proto_fm_model* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Proto_fm_model& from);
  void MergeFrom(const Proto_fm_model& from);
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

  // required uint32 num_attributes = 1;
  inline bool has_num_attributes() const;
  inline void clear_num_attributes();
  static const int kNumAttributesFieldNumber = 1;
  inline ::google::protobuf::uint32 num_attributes() const;
  inline void set_num_attributes(::google::protobuf::uint32 value);

  // required int32 num_factors = 2;
  inline bool has_num_factors() const;
  inline void clear_num_factors();
  static const int kNumFactorsFieldNumber = 2;
  inline ::google::protobuf::int32 num_factors() const;
  inline void set_num_factors(::google::protobuf::int32 value);

  // required bool k0 = 3 [default = true];
  inline bool has_k0() const;
  inline void clear_k0();
  static const int kK0FieldNumber = 3;
  inline bool k0() const;
  inline void set_k0(bool value);

  // required bool k1 = 4 [default = true];
  inline bool has_k1() const;
  inline void clear_k1();
  static const int kK1FieldNumber = 4;
  inline bool k1() const;
  inline void set_k1(bool value);

  // required double w0 = 5 [default = 0];
  inline bool has_w0() const;
  inline void clear_w0();
  static const int kW0FieldNumber = 5;
  inline double w0() const;
  inline void set_w0(double value);

  // required string w_str = 6;
  inline bool has_w_str() const;
  inline void clear_w_str();
  static const int kWStrFieldNumber = 6;
  inline const ::std::string& w_str() const;
  inline void set_w_str(const ::std::string& value);
  inline void set_w_str(const char* value);
  inline void set_w_str(const char* value, size_t size);
  inline ::std::string* mutable_w_str();
  inline ::std::string* release_w_str();
  inline void set_allocated_w_str(::std::string* w_str);

  // required string v_str = 7;
  inline bool has_v_str() const;
  inline void clear_v_str();
  static const int kVStrFieldNumber = 7;
  inline const ::std::string& v_str() const;
  inline void set_v_str(const ::std::string& value);
  inline void set_v_str(const char* value);
  inline void set_v_str(const char* value, size_t size);
  inline ::std::string* mutable_v_str();
  inline ::std::string* release_v_str();
  inline void set_allocated_v_str(::std::string* v_str);

  // @@protoc_insertion_point(class_scope:libFM.Proto_fm_model)
 private:
  inline void set_has_num_attributes();
  inline void clear_has_num_attributes();
  inline void set_has_num_factors();
  inline void clear_has_num_factors();
  inline void set_has_k0();
  inline void clear_has_k0();
  inline void set_has_k1();
  inline void clear_has_k1();
  inline void set_has_w0();
  inline void clear_has_w0();
  inline void set_has_w_str();
  inline void clear_has_w_str();
  inline void set_has_v_str();
  inline void clear_has_v_str();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::uint32 num_attributes_;
  ::google::protobuf::int32 num_factors_;
  double w0_;
  ::std::string* w_str_;
  ::std::string* v_str_;
  bool k0_;
  bool k1_;
  friend void  protobuf_AddDesc_libfm_2eproto();
  friend void protobuf_AssignDesc_libfm_2eproto();
  friend void protobuf_ShutdownFile_libfm_2eproto();

  void InitAsDefaultInstance();
  static Proto_fm_model* default_instance_;
};
// ===================================================================


// ===================================================================

// Proto_fm_model

// required uint32 num_attributes = 1;
inline bool Proto_fm_model::has_num_attributes() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Proto_fm_model::set_has_num_attributes() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Proto_fm_model::clear_has_num_attributes() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Proto_fm_model::clear_num_attributes() {
  num_attributes_ = 0u;
  clear_has_num_attributes();
}
inline ::google::protobuf::uint32 Proto_fm_model::num_attributes() const {
  // @@protoc_insertion_point(field_get:libFM.Proto_fm_model.num_attributes)
  return num_attributes_;
}
inline void Proto_fm_model::set_num_attributes(::google::protobuf::uint32 value) {
  set_has_num_attributes();
  num_attributes_ = value;
  // @@protoc_insertion_point(field_set:libFM.Proto_fm_model.num_attributes)
}

// required int32 num_factors = 2;
inline bool Proto_fm_model::has_num_factors() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Proto_fm_model::set_has_num_factors() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Proto_fm_model::clear_has_num_factors() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Proto_fm_model::clear_num_factors() {
  num_factors_ = 0;
  clear_has_num_factors();
}
inline ::google::protobuf::int32 Proto_fm_model::num_factors() const {
  // @@protoc_insertion_point(field_get:libFM.Proto_fm_model.num_factors)
  return num_factors_;
}
inline void Proto_fm_model::set_num_factors(::google::protobuf::int32 value) {
  set_has_num_factors();
  num_factors_ = value;
  // @@protoc_insertion_point(field_set:libFM.Proto_fm_model.num_factors)
}

// required bool k0 = 3 [default = true];
inline bool Proto_fm_model::has_k0() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Proto_fm_model::set_has_k0() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Proto_fm_model::clear_has_k0() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Proto_fm_model::clear_k0() {
  k0_ = true;
  clear_has_k0();
}
inline bool Proto_fm_model::k0() const {
  // @@protoc_insertion_point(field_get:libFM.Proto_fm_model.k0)
  return k0_;
}
inline void Proto_fm_model::set_k0(bool value) {
  set_has_k0();
  k0_ = value;
  // @@protoc_insertion_point(field_set:libFM.Proto_fm_model.k0)
}

// required bool k1 = 4 [default = true];
inline bool Proto_fm_model::has_k1() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Proto_fm_model::set_has_k1() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Proto_fm_model::clear_has_k1() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Proto_fm_model::clear_k1() {
  k1_ = true;
  clear_has_k1();
}
inline bool Proto_fm_model::k1() const {
  // @@protoc_insertion_point(field_get:libFM.Proto_fm_model.k1)
  return k1_;
}
inline void Proto_fm_model::set_k1(bool value) {
  set_has_k1();
  k1_ = value;
  // @@protoc_insertion_point(field_set:libFM.Proto_fm_model.k1)
}

// required double w0 = 5 [default = 0];
inline bool Proto_fm_model::has_w0() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void Proto_fm_model::set_has_w0() {
  _has_bits_[0] |= 0x00000010u;
}
inline void Proto_fm_model::clear_has_w0() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void Proto_fm_model::clear_w0() {
  w0_ = 0;
  clear_has_w0();
}
inline double Proto_fm_model::w0() const {
  // @@protoc_insertion_point(field_get:libFM.Proto_fm_model.w0)
  return w0_;
}
inline void Proto_fm_model::set_w0(double value) {
  set_has_w0();
  w0_ = value;
  // @@protoc_insertion_point(field_set:libFM.Proto_fm_model.w0)
}

// required string w_str = 6;
inline bool Proto_fm_model::has_w_str() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void Proto_fm_model::set_has_w_str() {
  _has_bits_[0] |= 0x00000020u;
}
inline void Proto_fm_model::clear_has_w_str() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void Proto_fm_model::clear_w_str() {
  if (w_str_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    w_str_->clear();
  }
  clear_has_w_str();
}
inline const ::std::string& Proto_fm_model::w_str() const {
  // @@protoc_insertion_point(field_get:libFM.Proto_fm_model.w_str)
  return *w_str_;
}
inline void Proto_fm_model::set_w_str(const ::std::string& value) {
  set_has_w_str();
  if (w_str_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    w_str_ = new ::std::string;
  }
  w_str_->assign(value);
  // @@protoc_insertion_point(field_set:libFM.Proto_fm_model.w_str)
}
inline void Proto_fm_model::set_w_str(const char* value) {
  set_has_w_str();
  if (w_str_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    w_str_ = new ::std::string;
  }
  w_str_->assign(value);
  // @@protoc_insertion_point(field_set_char:libFM.Proto_fm_model.w_str)
}
inline void Proto_fm_model::set_w_str(const char* value, size_t size) {
  set_has_w_str();
  if (w_str_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    w_str_ = new ::std::string;
  }
  w_str_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:libFM.Proto_fm_model.w_str)
}
inline ::std::string* Proto_fm_model::mutable_w_str() {
  set_has_w_str();
  if (w_str_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    w_str_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:libFM.Proto_fm_model.w_str)
  return w_str_;
}
inline ::std::string* Proto_fm_model::release_w_str() {
  clear_has_w_str();
  if (w_str_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = w_str_;
    w_str_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void Proto_fm_model::set_allocated_w_str(::std::string* w_str) {
  if (w_str_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete w_str_;
  }
  if (w_str) {
    set_has_w_str();
    w_str_ = w_str;
  } else {
    clear_has_w_str();
    w_str_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:libFM.Proto_fm_model.w_str)
}

// required string v_str = 7;
inline bool Proto_fm_model::has_v_str() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void Proto_fm_model::set_has_v_str() {
  _has_bits_[0] |= 0x00000040u;
}
inline void Proto_fm_model::clear_has_v_str() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void Proto_fm_model::clear_v_str() {
  if (v_str_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    v_str_->clear();
  }
  clear_has_v_str();
}
inline const ::std::string& Proto_fm_model::v_str() const {
  // @@protoc_insertion_point(field_get:libFM.Proto_fm_model.v_str)
  return *v_str_;
}
inline void Proto_fm_model::set_v_str(const ::std::string& value) {
  set_has_v_str();
  if (v_str_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    v_str_ = new ::std::string;
  }
  v_str_->assign(value);
  // @@protoc_insertion_point(field_set:libFM.Proto_fm_model.v_str)
}
inline void Proto_fm_model::set_v_str(const char* value) {
  set_has_v_str();
  if (v_str_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    v_str_ = new ::std::string;
  }
  v_str_->assign(value);
  // @@protoc_insertion_point(field_set_char:libFM.Proto_fm_model.v_str)
}
inline void Proto_fm_model::set_v_str(const char* value, size_t size) {
  set_has_v_str();
  if (v_str_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    v_str_ = new ::std::string;
  }
  v_str_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:libFM.Proto_fm_model.v_str)
}
inline ::std::string* Proto_fm_model::mutable_v_str() {
  set_has_v_str();
  if (v_str_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    v_str_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:libFM.Proto_fm_model.v_str)
  return v_str_;
}
inline ::std::string* Proto_fm_model::release_v_str() {
  clear_has_v_str();
  if (v_str_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = v_str_;
    v_str_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void Proto_fm_model::set_allocated_v_str(::std::string* v_str) {
  if (v_str_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete v_str_;
  }
  if (v_str) {
    set_has_v_str();
    v_str_ = v_str;
  } else {
    clear_has_v_str();
    v_str_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:libFM.Proto_fm_model.v_str)
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace libFM

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_libfm_2eproto__INCLUDED
