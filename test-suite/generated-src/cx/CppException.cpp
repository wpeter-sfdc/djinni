// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from exception.djinni

#include "CppException.h"  // my header
#include "translation.h"

namespace testsuite {

int32_t CppException::ThrowAnException ()
{
    try {
        auto cppRet = _cppRef->throw_an_exception();
        return transform<int32_t, int32_t>()(cppRet);
    }
    catch(const std::exception& e) {
        throw ref new Platform::Exception(-1, transform<std::string, Platform::String^>()((std::string)e.what()));
    }
}
CppException^ CppException::Get ()
{
    try {
        auto cppRet = ::testsuite::CppException::get();
        return transform<std::shared_ptr<::testsuite::CppException>, ::testsuite::CppException^>()(cppRet);
    }
    catch(const std::exception& e) {
        throw ref new Platform::Exception(-1, transform<std::string, Platform::String^>()((std::string)e.what()));
    }
}

}  // namespace testsuite
