// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from user_token.djinni

#include "UserToken.h"  // my header
#include "translation.h"

namespace testsuite {

Platform::String^ UserToken::Whoami ()
{
    try {
        auto cppRet = _cppRef->whoami();
        return transform<std::string, Platform::String^>()(cppRet);
    }
    catch(const std::exception& e) {
        throw ref new Platform::Exception(-1, transform<std::string, Platform::String^>()((std::string)e.what()));
    }
}

}  // namespace testsuite