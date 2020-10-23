/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include <thrift/lib/cpp2/gen/module_metadata_cpp.h>
#include "thrift/compiler/test/fixtures/any/gen-cpp2/module_metadata.h"

namespace apache {
namespace thrift {
namespace detail {
namespace md {
using ThriftMetadata = ::apache::thrift::metadata::ThriftMetadata;
using ThriftPrimitiveType = ::apache::thrift::metadata::ThriftPrimitiveType;
using ThriftType = ::apache::thrift::metadata::ThriftType;
using ThriftService = ::apache::thrift::metadata::ThriftService;
using ThriftServiceContext = ::apache::thrift::metadata::ThriftServiceContext;
using ThriftFunctionGenerator = void (*)(ThriftMetadata&, ThriftService&);


const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::cpp2::MyStruct1>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs_ref()->emplace("module.MyStruct1", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_MyStruct1 = res.first->second;
  module_MyStruct1.name_ref() = "module.MyStruct1";
  module_MyStruct1.is_union_ref() = false;
  static const std::tuple<int32_t, const char*, bool, std::unique_ptr<MetadataTypeInterface>>
  module_MyStruct1_fields[] = {
    std::make_tuple(1, "myString", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE)),
  };
  for (const auto& f : module_MyStruct1_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id_ref() = std::get<0>(f);
    field.name_ref() = std::get<1>(f);
    field.is_optional_ref() = std::get<2>(f);
    std::get<3>(f)->writeAndGenType(*field.type_ref(), metadata);
    module_MyStruct1.fields_ref()->push_back(std::move(field));
  }
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::cpp2::MyStruct2>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs_ref()->emplace("module.MyStruct2", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_MyStruct2 = res.first->second;
  module_MyStruct2.name_ref() = "module.MyStruct2";
  module_MyStruct2.is_union_ref() = false;
  static const std::tuple<int32_t, const char*, bool, std::unique_ptr<MetadataTypeInterface>>
  module_MyStruct2_fields[] = {
    std::make_tuple(1, "myString", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE)),
  };
  for (const auto& f : module_MyStruct2_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id_ref() = std::get<0>(f);
    field.name_ref() = std::get<1>(f);
    field.is_optional_ref() = std::get<2>(f);
    std::get<3>(f)->writeAndGenType(*field.type_ref(), metadata);
    module_MyStruct2.fields_ref()->push_back(std::move(field));
  }
  return res.first->second;
}

} // namespace md
} // namespace detail
} // namespace thrift
} // namespace apache