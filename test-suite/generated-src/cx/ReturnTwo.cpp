// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from multiple_inheritance.djinni

#include "ReturnTwo.h"  // my header
#include "translation.h"

namespace testsuite {

ReturnTwo^ ReturnTwo::GetInstance ()
{
    try {
        auto cppRet = ::testsuite::ReturnTwo::get_instance();
        return transform<std::shared_ptr<::testsuite::ReturnTwo>, ::testsuite::ReturnTwo^>()(cppRet);
    }
    catch(const std::exception& e) {
        throw ref new Platform::Exception(-1, transform<std::string, Platform::String^>()((std::string)e.what()));
    }
}
int8 ReturnTwo::ReturnTwo ()
{
    try {
        auto cppRet = _cppRef->return_two();
        return transform<int8_t, int8>()(cppRet);
    }
    catch(const std::exception& e) {
        throw ref new Platform::Exception(-1, transform<std::string, Platform::String^>()((std::string)e.what()));
    }
}

}  // namespace testsuite
