/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include "thrift/compiler/test/fixtures/mixin/gen-cpp2/module_types.h"

#include <thrift/lib/cpp2/gen/module_types_tcc.h>


namespace apache {
namespace thrift {
namespace detail {

template <>
struct TccStructTraits<::cpp2::Mixin1> {
  static void translateFieldName(
      folly::StringPiece _fname,
      int16_t& fid,
      apache::thrift::protocol::TType& _ftype);
};
template <>
struct TccStructTraits<::cpp2::Mixin2> {
  static void translateFieldName(
      folly::StringPiece _fname,
      int16_t& fid,
      apache::thrift::protocol::TType& _ftype);
};
template <>
struct TccStructTraits<::cpp2::Mixin3> {
  static void translateFieldName(
      folly::StringPiece _fname,
      int16_t& fid,
      apache::thrift::protocol::TType& _ftype);
};
template <>
struct TccStructTraits<::cpp2::Foo> {
  static void translateFieldName(
      folly::StringPiece _fname,
      int16_t& fid,
      apache::thrift::protocol::TType& _ftype);
};

} // namespace detail
} // namespace thrift
} // namespace apache

namespace cpp2 {

template <class Protocol_>
void Mixin1::readNoXfer(Protocol_* iprot) {
  apache::thrift::detail::ProtocolReaderStructReadState<Protocol_> _readState;

  _readState.readStructBegin(iprot);

  using apache::thrift::TProtocolException;


  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          0,
          1,
          apache::thrift::protocol::T_STRING))) {
    goto _loop;
  }
_readField_field1:
  {
    
    iprot->readString(this->field1);
    this->__isset.field1 = true;
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          1,
          0,
          apache::thrift::protocol::T_STOP))) {
    goto _loop;
  }

_end:
  _readState.readStructEnd(iprot);

  return;

_loop:
  _readState.afterAdvanceFailure(iprot);
  if (_readState.atStop()) {
    goto _end;
  }
  if (iprot->kUsesFieldNames()) {
    _readState.template fillFieldTraitsFromName<apache::thrift::detail::TccStructTraits<Mixin1>>();
  }

  switch (_readState.fieldId) {
    case 1:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_STRING))) {
        goto _readField_field1;
      } else {
        goto _skip;
      }
    }
    default:
    {
_skip:
      _readState.skip(iprot);
      _readState.readFieldEnd(iprot);
      _readState.readFieldBeginNoInline(iprot);
      goto _loop;
    }
  }
}

template <class Protocol_>
uint32_t Mixin1::serializedSize(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("Mixin1");
  xfer += prot_->serializedFieldSize("field1", apache::thrift::protocol::T_STRING, 1);
  xfer += prot_->serializedSizeString(this->field1);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t Mixin1::serializedSizeZC(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("Mixin1");
  xfer += prot_->serializedFieldSize("field1", apache::thrift::protocol::T_STRING, 1);
  xfer += prot_->serializedSizeString(this->field1);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t Mixin1::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("Mixin1");
  xfer += prot_->writeFieldBegin("field1", apache::thrift::protocol::T_STRING, 1);
  xfer += prot_->writeString(this->field1);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

extern template void Mixin1::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t Mixin1::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t Mixin1::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t Mixin1::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template void Mixin1::readNoXfer<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t Mixin1::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t Mixin1::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t Mixin1::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

} // cpp2
namespace cpp2 {

template <class Protocol_>
void Mixin2::readNoXfer(Protocol_* iprot) {
  apache::thrift::detail::ProtocolReaderStructReadState<Protocol_> _readState;

  _readState.readStructBegin(iprot);

  using apache::thrift::TProtocolException;


  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          0,
          1,
          apache::thrift::protocol::T_STRUCT))) {
    goto _loop;
  }
_readField_m1:
  {
    _readState.beforeSubobject(iprot);
    ::apache::thrift::Cpp2Ops<  ::cpp2::Mixin1>::read(iprot, &this->m1);
    this->__isset.m1 = true;
    _readState.afterSubobject(iprot);
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          1,
          2,
          apache::thrift::protocol::T_STRING))) {
    goto _loop;
  }
_readField_field2:
  {
    
    iprot->readString(this->field2);
    this->__isset.field2 = true;
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          2,
          0,
          apache::thrift::protocol::T_STOP))) {
    goto _loop;
  }

_end:
  _readState.readStructEnd(iprot);

  return;

_loop:
  _readState.afterAdvanceFailure(iprot);
  if (_readState.atStop()) {
    goto _end;
  }
  if (iprot->kUsesFieldNames()) {
    _readState.template fillFieldTraitsFromName<apache::thrift::detail::TccStructTraits<Mixin2>>();
  }

  switch (_readState.fieldId) {
    case 1:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_STRUCT))) {
        goto _readField_m1;
      } else {
        goto _skip;
      }
    }
    case 2:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_STRING))) {
        goto _readField_field2;
      } else {
        goto _skip;
      }
    }
    default:
    {
_skip:
      _readState.skip(iprot);
      _readState.readFieldEnd(iprot);
      _readState.readFieldBeginNoInline(iprot);
      goto _loop;
    }
  }
}

template <class Protocol_>
uint32_t Mixin2::serializedSize(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("Mixin2");
  xfer += prot_->serializedFieldSize("m1", apache::thrift::protocol::T_STRUCT, 1);
  xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::Mixin1>::serializedSize(prot_, &this->m1);
  if (this->__isset.field2) {
    xfer += prot_->serializedFieldSize("field2", apache::thrift::protocol::T_STRING, 2);
    xfer += prot_->serializedSizeString(this->field2);
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t Mixin2::serializedSizeZC(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("Mixin2");
  xfer += prot_->serializedFieldSize("m1", apache::thrift::protocol::T_STRUCT, 1);
  xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::Mixin1>::serializedSizeZC(prot_, &this->m1);
  if (this->__isset.field2) {
    xfer += prot_->serializedFieldSize("field2", apache::thrift::protocol::T_STRING, 2);
    xfer += prot_->serializedSizeString(this->field2);
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t Mixin2::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("Mixin2");
  xfer += prot_->writeFieldBegin("m1", apache::thrift::protocol::T_STRUCT, 1);
  xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::Mixin1>::write(prot_, &this->m1);
  xfer += prot_->writeFieldEnd();
  if (this->__isset.field2) {
    xfer += prot_->writeFieldBegin("field2", apache::thrift::protocol::T_STRING, 2);
    xfer += prot_->writeString(this->field2);
    xfer += prot_->writeFieldEnd();
  }
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

extern template void Mixin2::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t Mixin2::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t Mixin2::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t Mixin2::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template void Mixin2::readNoXfer<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t Mixin2::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t Mixin2::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t Mixin2::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

} // cpp2
namespace cpp2 {

template <class Protocol_>
void Mixin3::readNoXfer(Protocol_* iprot) {
  apache::thrift::detail::ProtocolReaderStructReadState<Protocol_> _readState;

  _readState.readStructBegin(iprot);

  using apache::thrift::TProtocolException;


  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          0,
          1,
          apache::thrift::protocol::T_STRING))) {
    goto _loop;
  }
_readField_field3:
  {
    
    iprot->readString(this->field3);
    this->__isset.field3 = true;
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          1,
          0,
          apache::thrift::protocol::T_STOP))) {
    goto _loop;
  }

_end:
  _readState.readStructEnd(iprot);

  return;

_loop:
  _readState.afterAdvanceFailure(iprot);
  if (_readState.atStop()) {
    goto _end;
  }
  if (iprot->kUsesFieldNames()) {
    _readState.template fillFieldTraitsFromName<apache::thrift::detail::TccStructTraits<Mixin3>>();
  }

  switch (_readState.fieldId) {
    case 1:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_STRING))) {
        goto _readField_field3;
      } else {
        goto _skip;
      }
    }
    default:
    {
_skip:
      _readState.skip(iprot);
      _readState.readFieldEnd(iprot);
      _readState.readFieldBeginNoInline(iprot);
      goto _loop;
    }
  }
}

template <class Protocol_>
uint32_t Mixin3::serializedSize(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("Mixin3");
  xfer += prot_->serializedFieldSize("field3", apache::thrift::protocol::T_STRING, 1);
  xfer += prot_->serializedSizeString(this->field3);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t Mixin3::serializedSizeZC(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("Mixin3");
  xfer += prot_->serializedFieldSize("field3", apache::thrift::protocol::T_STRING, 1);
  xfer += prot_->serializedSizeString(this->field3);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t Mixin3::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("Mixin3");
  xfer += prot_->writeFieldBegin("field3", apache::thrift::protocol::T_STRING, 1);
  xfer += prot_->writeString(this->field3);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

extern template void Mixin3::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t Mixin3::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t Mixin3::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t Mixin3::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template void Mixin3::readNoXfer<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t Mixin3::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t Mixin3::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t Mixin3::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

} // cpp2
namespace cpp2 {

template <class Protocol_>
void Foo::readNoXfer(Protocol_* iprot) {
  apache::thrift::detail::ProtocolReaderStructReadState<Protocol_> _readState;

  _readState.readStructBegin(iprot);

  using apache::thrift::TProtocolException;


  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          0,
          1,
          apache::thrift::protocol::T_STRING))) {
    goto _loop;
  }
_readField_field4:
  {
    
    iprot->readString(this->field4);
    this->__isset.field4 = true;
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          1,
          2,
          apache::thrift::protocol::T_STRUCT))) {
    goto _loop;
  }
_readField_m2:
  {
    _readState.beforeSubobject(iprot);
    ::apache::thrift::Cpp2Ops<  ::cpp2::Mixin2>::read(iprot, &this->m2);
    this->__isset.m2 = true;
    _readState.afterSubobject(iprot);
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          2,
          3,
          apache::thrift::protocol::T_STRUCT))) {
    goto _loop;
  }
_readField_m3:
  {
    _readState.beforeSubobject(iprot);
    ::apache::thrift::Cpp2Ops<  ::cpp2::Mixin3>::read(iprot, &this->m3);
    this->__isset.m3 = true;
    _readState.afterSubobject(iprot);
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          3,
          0,
          apache::thrift::protocol::T_STOP))) {
    goto _loop;
  }

_end:
  _readState.readStructEnd(iprot);

  return;

_loop:
  _readState.afterAdvanceFailure(iprot);
  if (_readState.atStop()) {
    goto _end;
  }
  if (iprot->kUsesFieldNames()) {
    _readState.template fillFieldTraitsFromName<apache::thrift::detail::TccStructTraits<Foo>>();
  }

  switch (_readState.fieldId) {
    case 1:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_STRING))) {
        goto _readField_field4;
      } else {
        goto _skip;
      }
    }
    case 2:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_STRUCT))) {
        goto _readField_m2;
      } else {
        goto _skip;
      }
    }
    case 3:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_STRUCT))) {
        goto _readField_m3;
      } else {
        goto _skip;
      }
    }
    default:
    {
_skip:
      _readState.skip(iprot);
      _readState.readFieldEnd(iprot);
      _readState.readFieldBeginNoInline(iprot);
      goto _loop;
    }
  }
}

template <class Protocol_>
uint32_t Foo::serializedSize(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("Foo");
  xfer += prot_->serializedFieldSize("field4", apache::thrift::protocol::T_STRING, 1);
  xfer += prot_->serializedSizeString(this->field4);
  xfer += prot_->serializedFieldSize("m2", apache::thrift::protocol::T_STRUCT, 2);
  xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::Mixin2>::serializedSize(prot_, &this->m2);
  xfer += prot_->serializedFieldSize("m3", apache::thrift::protocol::T_STRUCT, 3);
  xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::Mixin3>::serializedSize(prot_, &this->m3);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t Foo::serializedSizeZC(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("Foo");
  xfer += prot_->serializedFieldSize("field4", apache::thrift::protocol::T_STRING, 1);
  xfer += prot_->serializedSizeString(this->field4);
  xfer += prot_->serializedFieldSize("m2", apache::thrift::protocol::T_STRUCT, 2);
  xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::Mixin2>::serializedSizeZC(prot_, &this->m2);
  xfer += prot_->serializedFieldSize("m3", apache::thrift::protocol::T_STRUCT, 3);
  xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::Mixin3>::serializedSizeZC(prot_, &this->m3);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t Foo::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("Foo");
  xfer += prot_->writeFieldBegin("field4", apache::thrift::protocol::T_STRING, 1);
  xfer += prot_->writeString(this->field4);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("m2", apache::thrift::protocol::T_STRUCT, 2);
  xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::Mixin2>::write(prot_, &this->m2);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("m3", apache::thrift::protocol::T_STRUCT, 3);
  xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::Mixin3>::write(prot_, &this->m3);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

extern template void Foo::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t Foo::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t Foo::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t Foo::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template void Foo::readNoXfer<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t Foo::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t Foo::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t Foo::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

} // cpp2