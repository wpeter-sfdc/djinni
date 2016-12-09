// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from client_interface.djinni

#pragma once

#include "ClientInterface.h"
#include "ClientReturnedRecord.h"
#include "client_interface.hpp"
#include "translation.h"
#include <functional>
#include <stdint.h>

namespace System {

template<> class CxInterfaceProxy<::testsuite::ClientInterface> : public ::testsuite::ClientInterface
{
public:
    CxInterfaceProxy(::testsuite::ClientInterface^ nativeRef)
    {
        native_call_nativeRef = [nativeRef]{ return nativeRef; };
    }
    ::testsuite::ClientReturnedRecord get_record(int64_t record_id, const std::string & utf8string, const std::experimental::optional<std::string> & misc) override
    {
        auto nativeRet = nativeRef()->GetRecord(transform<int64_t, int64_t>()(record_id), transform<std::string, Platform::String^>()(utf8string), transform<std::experimental::optional<std::string>, Platform::String^>()(misc));
        return transform<::testsuite::ClientReturnedRecord, ::testsuite::ClientReturnedRecord^>()(nativeRet);
    }
    double identifier_check(const std::vector<uint8_t> & data, int32_t r, int64_t jret) override
    {
        auto nativeRet = nativeRef()->IdentifierCheck(transform<std::vector<uint8_t>, Platform::Array<uint8_t>^>()(data), transform<int32_t, int32_t>()(r), transform<int64_t, int64_t>()(jret));
        return transform<double, double>()(nativeRet);
    }
    std::string return_str() override
    {
        auto nativeRet = nativeRef()->ReturnStr();
        return transform<std::string, Platform::String^>()(nativeRet);
    }
    std::string meth_taking_interface(const std::shared_ptr<::testsuite::ClientInterface> & i) override
    {
        auto nativeRet = nativeRef()->MethTakingInterface(transform<std::shared_ptr<::testsuite::ClientInterface>, ::testsuite::ClientInterface^>()(i));
        return transform<std::string, Platform::String^>()(nativeRet);
    }
    std::string meth_taking_optional_interface(const std::shared_ptr<::testsuite::ClientInterface> & i) override
    {
        auto nativeRet = nativeRef()->MethTakingOptionalInterface(transform<std::shared_ptr<::testsuite::ClientInterface>, ::testsuite::ClientInterface^>()(i));
        return transform<std::string, Platform::String^>()(nativeRet);
    }
    ::testsuite::ClientInterface^ nativeRef() { return native_call_nativeRef(); }
private:
    std::function<::testsuite::ClientInterface^()> native_call_nativeRef;
};

}  // namespace System
