/*
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <thrift/conformance/cpp2/Any.h>

#include <fmt/core.h>
#include <folly/lang/Exception.h>
#include <thrift/conformance/cpp2/UniversalType.h>

namespace apache::thrift::conformance {

Protocol getProtocol(const Any& any) noexcept {
  if (any.protocol_ref() != StandardProtocol::Custom) {
    return Protocol(*any.protocol_ref());
  }
  if (any.customProtocol_ref()) {
    return Protocol(any.customProtocol_ref().value_unchecked());
  }
  return {};
}

bool hasProtocol(const Any& any, const Protocol& protocol) noexcept {
  if (any.protocol_ref() != StandardProtocol::Custom) {
    return any.protocol_ref() == protocol.standard();
  }
  if (any.customProtocol_ref() &&
      !any.customProtocol_ref().value_unchecked().empty()) {
    return any.customProtocol_ref().value_unchecked() == protocol.custom();
  }
  // `any` has no protocol.
  return protocol.isNone();
}

void validateAny(const Any& any) {
  if (any.type_ref().has_value() && !any.type_ref().value_unchecked().empty()) {
    validateUniversalType(any.type_ref().value_unchecked());
  }
  if (any.customProtocol_ref().has_value() &&
      !any.customProtocol_ref().value_unchecked().empty()) {
    validateUniversalType(any.customProtocol_ref().value_unchecked());
  }
}

} // namespace apache::thrift::conformance
