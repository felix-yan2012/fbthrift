#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

from libcpp.string cimport string
from libcpp cimport bool as cbool, nullptr, nullptr_t
from cpython cimport bool as pbool
from libc.stdint cimport int8_t, int16_t, int32_t, int64_t
from libcpp.memory cimport shared_ptr, unique_ptr
from libcpp.vector cimport vector
from libcpp.set cimport set as cset
from libcpp.map cimport map as cmap, pair as cpair
from thrift.py3.exceptions cimport cTException
cimport folly.iobuf as __iobuf
cimport thrift.py3.exceptions
cimport thrift.py3.types
from thrift.py3.types cimport bstring, move, optional_field_ref
from folly.optional cimport cOptional





cdef extern from "src/gen-cpp2/module_types_custom_protocol.h" namespace "::cpp2":
    # Forward Declaration
    cdef cppclass cInitialResponse "::cpp2::InitialResponse"
    # Forward Declaration
    cdef cppclass cFinalResponse "::cpp2::FinalResponse"
    # Forward Declaration
    cdef cppclass cSinkPayload "::cpp2::SinkPayload"
    # Forward Declaration
    cdef cppclass cCompatibleWithKeywordSink "::cpp2::CompatibleWithKeywordSink"
    # Forward Declaration
    cdef cppclass cInitialException "::cpp2::InitialException"(cTException)
    # Forward Declaration
    cdef cppclass cSinkException1 "::cpp2::SinkException1"(cTException)
    # Forward Declaration
    cdef cppclass cSinkException2 "::cpp2::SinkException2"(cTException)

cdef extern from "src/gen-cpp2/module_types.h" namespace "::cpp2":
    cdef cppclass cInitialResponse__isset "::cpp2::InitialResponse::__isset":
        bint content

    cdef cppclass cInitialResponse "::cpp2::InitialResponse":
        cInitialResponse() except +
        cInitialResponse(const cInitialResponse&) except +
        bint operator==(cInitialResponse&)
        bint operator!=(cInitialResponse&)
        bint operator<(cInitialResponse&)
        bint operator>(cInitialResponse&)
        bint operator<=(cInitialResponse&)
        bint operator>=(cInitialResponse&)
        string content
        cInitialResponse__isset __isset

    cdef cppclass cFinalResponse__isset "::cpp2::FinalResponse::__isset":
        bint content

    cdef cppclass cFinalResponse "::cpp2::FinalResponse":
        cFinalResponse() except +
        cFinalResponse(const cFinalResponse&) except +
        bint operator==(cFinalResponse&)
        bint operator!=(cFinalResponse&)
        bint operator<(cFinalResponse&)
        bint operator>(cFinalResponse&)
        bint operator<=(cFinalResponse&)
        bint operator>=(cFinalResponse&)
        string content
        cFinalResponse__isset __isset

    cdef cppclass cSinkPayload__isset "::cpp2::SinkPayload::__isset":
        bint content

    cdef cppclass cSinkPayload "::cpp2::SinkPayload":
        cSinkPayload() except +
        cSinkPayload(const cSinkPayload&) except +
        bint operator==(cSinkPayload&)
        bint operator!=(cSinkPayload&)
        bint operator<(cSinkPayload&)
        bint operator>(cSinkPayload&)
        bint operator<=(cSinkPayload&)
        bint operator>=(cSinkPayload&)
        string content
        cSinkPayload__isset __isset

    cdef cppclass cCompatibleWithKeywordSink__isset "::cpp2::CompatibleWithKeywordSink::__isset":
        bint sink

    cdef cppclass cCompatibleWithKeywordSink "::cpp2::CompatibleWithKeywordSink":
        cCompatibleWithKeywordSink() except +
        cCompatibleWithKeywordSink(const cCompatibleWithKeywordSink&) except +
        bint operator==(cCompatibleWithKeywordSink&)
        bint operator!=(cCompatibleWithKeywordSink&)
        bint operator<(cCompatibleWithKeywordSink&)
        bint operator>(cCompatibleWithKeywordSink&)
        bint operator<=(cCompatibleWithKeywordSink&)
        bint operator>=(cCompatibleWithKeywordSink&)
        string sink
        cCompatibleWithKeywordSink__isset __isset

    cdef cppclass cInitialException__isset "::cpp2::InitialException::__isset":
        bint reason

    cdef cppclass cInitialException "::cpp2::InitialException"(cTException):
        cInitialException() except +
        cInitialException(const cInitialException&) except +
        bint operator==(cInitialException&)
        bint operator!=(cInitialException&)
        bint operator<(cInitialException&)
        bint operator>(cInitialException&)
        bint operator<=(cInitialException&)
        bint operator>=(cInitialException&)
        string reason
        cInitialException__isset __isset

    cdef cppclass cSinkException1__isset "::cpp2::SinkException1::__isset":
        bint reason

    cdef cppclass cSinkException1 "::cpp2::SinkException1"(cTException):
        cSinkException1() except +
        cSinkException1(const cSinkException1&) except +
        bint operator==(cSinkException1&)
        bint operator!=(cSinkException1&)
        bint operator<(cSinkException1&)
        bint operator>(cSinkException1&)
        bint operator<=(cSinkException1&)
        bint operator>=(cSinkException1&)
        string reason
        cSinkException1__isset __isset

    cdef cppclass cSinkException2__isset "::cpp2::SinkException2::__isset":
        bint reason

    cdef cppclass cSinkException2 "::cpp2::SinkException2"(cTException):
        cSinkException2() except +
        cSinkException2(const cSinkException2&) except +
        bint operator==(cSinkException2&)
        bint operator!=(cSinkException2&)
        bint operator<(cSinkException2&)
        bint operator>(cSinkException2&)
        bint operator<=(cSinkException2&)
        bint operator>=(cSinkException2&)
        int64_t reason
        cSinkException2__isset __isset


cdef extern from "<utility>" namespace "std" nogil:
    cdef shared_ptr[cInitialResponse] move(unique_ptr[cInitialResponse])
    cdef shared_ptr[cInitialResponse] move_shared "std::move"(shared_ptr[cInitialResponse])
    cdef unique_ptr[cInitialResponse] move_unique "std::move"(unique_ptr[cInitialResponse])
    cdef shared_ptr[cFinalResponse] move(unique_ptr[cFinalResponse])
    cdef shared_ptr[cFinalResponse] move_shared "std::move"(shared_ptr[cFinalResponse])
    cdef unique_ptr[cFinalResponse] move_unique "std::move"(unique_ptr[cFinalResponse])
    cdef shared_ptr[cSinkPayload] move(unique_ptr[cSinkPayload])
    cdef shared_ptr[cSinkPayload] move_shared "std::move"(shared_ptr[cSinkPayload])
    cdef unique_ptr[cSinkPayload] move_unique "std::move"(unique_ptr[cSinkPayload])
    cdef shared_ptr[cCompatibleWithKeywordSink] move(unique_ptr[cCompatibleWithKeywordSink])
    cdef shared_ptr[cCompatibleWithKeywordSink] move_shared "std::move"(shared_ptr[cCompatibleWithKeywordSink])
    cdef unique_ptr[cCompatibleWithKeywordSink] move_unique "std::move"(unique_ptr[cCompatibleWithKeywordSink])
    cdef shared_ptr[cInitialException] move(unique_ptr[cInitialException])
    cdef shared_ptr[cInitialException] move_shared "std::move"(shared_ptr[cInitialException])
    cdef unique_ptr[cInitialException] move_unique "std::move"(unique_ptr[cInitialException])
    cdef shared_ptr[cSinkException1] move(unique_ptr[cSinkException1])
    cdef shared_ptr[cSinkException1] move_shared "std::move"(shared_ptr[cSinkException1])
    cdef unique_ptr[cSinkException1] move_unique "std::move"(unique_ptr[cSinkException1])
    cdef shared_ptr[cSinkException2] move(unique_ptr[cSinkException2])
    cdef shared_ptr[cSinkException2] move_shared "std::move"(shared_ptr[cSinkException2])
    cdef unique_ptr[cSinkException2] move_unique "std::move"(unique_ptr[cSinkException2])

cdef extern from "<memory>" namespace "std" nogil:
    cdef shared_ptr[const cInitialResponse] const_pointer_cast "std::const_pointer_cast<const ::cpp2::InitialResponse>"(shared_ptr[cInitialResponse])
    cdef shared_ptr[const cFinalResponse] const_pointer_cast "std::const_pointer_cast<const ::cpp2::FinalResponse>"(shared_ptr[cFinalResponse])
    cdef shared_ptr[const cSinkPayload] const_pointer_cast "std::const_pointer_cast<const ::cpp2::SinkPayload>"(shared_ptr[cSinkPayload])
    cdef shared_ptr[const cCompatibleWithKeywordSink] const_pointer_cast "std::const_pointer_cast<const ::cpp2::CompatibleWithKeywordSink>"(shared_ptr[cCompatibleWithKeywordSink])
    cdef shared_ptr[const cInitialException] const_pointer_cast "std::const_pointer_cast<const ::cpp2::InitialException>"(shared_ptr[cInitialException])
    cdef shared_ptr[const cSinkException1] const_pointer_cast "std::const_pointer_cast<const ::cpp2::SinkException1>"(shared_ptr[cSinkException1])
    cdef shared_ptr[const cSinkException2] const_pointer_cast "std::const_pointer_cast<const ::cpp2::SinkException2>"(shared_ptr[cSinkException2])

# Forward Definition of the cython struct
cdef class InitialResponse(thrift.py3.types.Struct)


cdef class InitialResponse(thrift.py3.types.Struct):
    cdef object __hash
    cdef object __weakref__
    cdef shared_ptr[cInitialResponse] _cpp_obj

    @staticmethod
    cdef unique_ptr[cInitialResponse] _make_instance(
        cInitialResponse* base_instance,
        bint* __isNOTSET,
        str content
    ) except *

    @staticmethod
    cdef create(shared_ptr[cInitialResponse])

# Forward Definition of the cython struct
cdef class FinalResponse(thrift.py3.types.Struct)


cdef class FinalResponse(thrift.py3.types.Struct):
    cdef object __hash
    cdef object __weakref__
    cdef shared_ptr[cFinalResponse] _cpp_obj

    @staticmethod
    cdef unique_ptr[cFinalResponse] _make_instance(
        cFinalResponse* base_instance,
        bint* __isNOTSET,
        str content
    ) except *

    @staticmethod
    cdef create(shared_ptr[cFinalResponse])

# Forward Definition of the cython struct
cdef class SinkPayload(thrift.py3.types.Struct)


cdef class SinkPayload(thrift.py3.types.Struct):
    cdef object __hash
    cdef object __weakref__
    cdef shared_ptr[cSinkPayload] _cpp_obj

    @staticmethod
    cdef unique_ptr[cSinkPayload] _make_instance(
        cSinkPayload* base_instance,
        bint* __isNOTSET,
        str content
    ) except *

    @staticmethod
    cdef create(shared_ptr[cSinkPayload])

# Forward Definition of the cython struct
cdef class CompatibleWithKeywordSink(thrift.py3.types.Struct)


cdef class CompatibleWithKeywordSink(thrift.py3.types.Struct):
    cdef object __hash
    cdef object __weakref__
    cdef shared_ptr[cCompatibleWithKeywordSink] _cpp_obj

    @staticmethod
    cdef unique_ptr[cCompatibleWithKeywordSink] _make_instance(
        cCompatibleWithKeywordSink* base_instance,
        bint* __isNOTSET,
        str sink
    ) except *

    @staticmethod
    cdef create(shared_ptr[cCompatibleWithKeywordSink])

# Forward Definition of the cython struct
cdef class InitialException(thrift.py3.exceptions.Error)


cdef class InitialException(thrift.py3.exceptions.Error):
    cdef object __hash
    cdef object __weakref__
    cdef shared_ptr[cInitialException] _cpp_obj

    @staticmethod
    cdef unique_ptr[cInitialException] _make_instance(
        cInitialException* base_instance,
        bint* __isNOTSET,
        str reason
    ) except *

    @staticmethod
    cdef create(shared_ptr[cInitialException])

# Forward Definition of the cython struct
cdef class SinkException1(thrift.py3.exceptions.Error)


cdef class SinkException1(thrift.py3.exceptions.Error):
    cdef object __hash
    cdef object __weakref__
    cdef shared_ptr[cSinkException1] _cpp_obj

    @staticmethod
    cdef unique_ptr[cSinkException1] _make_instance(
        cSinkException1* base_instance,
        bint* __isNOTSET,
        str reason
    ) except *

    @staticmethod
    cdef create(shared_ptr[cSinkException1])

# Forward Definition of the cython struct
cdef class SinkException2(thrift.py3.exceptions.Error)


cdef class SinkException2(thrift.py3.exceptions.Error):
    cdef object __hash
    cdef object __weakref__
    cdef shared_ptr[cSinkException2] _cpp_obj

    @staticmethod
    cdef unique_ptr[cSinkException2] _make_instance(
        cSinkException2* base_instance,
        bint* __isNOTSET,
        object reason
    ) except *

    @staticmethod
    cdef create(shared_ptr[cSinkException2])




