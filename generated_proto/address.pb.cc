// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: address.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "address.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace proto {

namespace {

const ::google::protobuf::Descriptor* avAddress_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  avAddress_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_address_2eproto() {
  protobuf_AddDesc_address_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "address.proto");
  GOOGLE_CHECK(file != NULL);
  avAddress_descriptor_ = file->message_type(0);
  static const int avAddress_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(avAddress, username_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(avAddress, domain_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(avAddress, resource_),
  };
  avAddress_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      avAddress_descriptor_,
      avAddress::default_instance_,
      avAddress_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(avAddress, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(avAddress, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(avAddress));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_address_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    avAddress_descriptor_, &avAddress::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_address_2eproto() {
  delete avAddress::default_instance_;
  delete avAddress_reflection_;
}

void protobuf_AddDesc_address_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\raddress.proto\022\005proto\"\?\n\tavAddress\022\020\n\010u"
    "sername\030\001 \002(\t\022\016\n\006domain\030\002 \002(\t\022\020\n\010resourc"
    "e\030\003 \001(\t", 87);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "address.proto", &protobuf_RegisterTypes);
  avAddress::default_instance_ = new avAddress();
  avAddress::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_address_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_address_2eproto {
  StaticDescriptorInitializer_address_2eproto() {
    protobuf_AddDesc_address_2eproto();
  }
} static_descriptor_initializer_address_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int avAddress::kUsernameFieldNumber;
const int avAddress::kDomainFieldNumber;
const int avAddress::kResourceFieldNumber;
#endif  // !_MSC_VER

avAddress::avAddress()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:proto.avAddress)
}

void avAddress::InitAsDefaultInstance() {
}

avAddress::avAddress(const avAddress& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:proto.avAddress)
}

void avAddress::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  username_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  domain_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  resource_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

#if __cplusplus >= 201103L || _MSC_VER >= 1600
avAddress::avAddress(avAddress&& from)
  : ::google::protobuf::Message() {
  Swap(&from);
}
#endif

avAddress::~avAddress() {
  // @@protoc_insertion_point(destructor:proto.avAddress)
  SharedDtor();
}

void avAddress::SharedDtor() {
  if (username_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete username_;
  }
  if (domain_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete domain_;
  }
  if (resource_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete resource_;
  }
  if (this != default_instance_) {
  }
}

void avAddress::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* avAddress::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return avAddress_descriptor_;
}

const avAddress& avAddress::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_address_2eproto();
  return *default_instance_;
}

avAddress* avAddress::default_instance_ = NULL;

avAddress* avAddress::New() const {
  return new avAddress;
}

void avAddress::Clear() {
  if (_has_bits_[0 / 32] & 7) {
    if (has_username()) {
      if (username_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        username_->clear();
      }
    }
    if (has_domain()) {
      if (domain_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        domain_->clear();
      }
    }
    if (has_resource()) {
      if (resource_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        resource_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool avAddress::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.avAddress)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string username = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_username()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->username().data(), this->username().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "username");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_domain;
        break;
      }

      // required string domain = 2;
      case 2: {
        if (tag == 18) {
         parse_domain:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_domain()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->domain().data(), this->domain().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "domain");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_resource;
        break;
      }

      // optional string resource = 3;
      case 3: {
        if (tag == 26) {
         parse_resource:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_resource()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->resource().data(), this->resource().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "resource");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.avAddress)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.avAddress)
  return false;
#undef DO_
}

void avAddress::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.avAddress)
  // required string username = 1;
  if (has_username()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->username().data(), this->username().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "username");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->username(), output);
  }

  // required string domain = 2;
  if (has_domain()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->domain().data(), this->domain().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "domain");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->domain(), output);
  }

  // optional string resource = 3;
  if (has_resource()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->resource().data(), this->resource().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "resource");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->resource(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.avAddress)
}

::google::protobuf::uint8* avAddress::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:proto.avAddress)
  // required string username = 1;
  if (has_username()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->username().data(), this->username().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "username");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->username(), target);
  }

  // required string domain = 2;
  if (has_domain()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->domain().data(), this->domain().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "domain");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->domain(), target);
  }

  // optional string resource = 3;
  if (has_resource()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->resource().data(), this->resource().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "resource");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->resource(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.avAddress)
  return target;
}

int avAddress::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string username = 1;
    if (has_username()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->username());
    }

    // required string domain = 2;
    if (has_domain()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->domain());
    }

    // optional string resource = 3;
    if (has_resource()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->resource());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void avAddress::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const avAddress* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const avAddress*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void avAddress::MergeFrom(const avAddress& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_username()) {
      set_username(from.username());
    }
    if (from.has_domain()) {
      set_domain(from.domain());
    }
    if (from.has_resource()) {
      set_resource(from.resource());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void avAddress::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void avAddress::CopyFrom(const avAddress& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool avAddress::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  return true;
}

void avAddress::Swap(avAddress* other) {
  if (other != this) {
    std::swap(username_, other->username_);
    std::swap(domain_, other->domain_);
    std::swap(resource_, other->resource_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata avAddress::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = avAddress_descriptor_;
  metadata.reflection = avAddress_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto

// @@protoc_insertion_point(global_scope)
