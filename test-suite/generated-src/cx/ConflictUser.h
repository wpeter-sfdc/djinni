// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from test.djinni

#pragma once

#include "Conflict.h"
#include "conflict_user.hpp"
#include <memory>

namespace testsuite {

public ref class ConflictUser sealed : public Platform::Object
{
public:
    Conflict^ Conflict ();
    bool ConflictArg (Windows::Foundation::Collections::IIterable<Conflict^>^ cs);
internal:
    ConflictUser(std::shared_ptr<::testsuite::ConflictUser> cppRef) : _cppRef(cppRef) {}
    std::shared_ptr<::testsuite::ConflictUser> cppRef() {return _cppRef;}
private:
    std::shared_ptr<::testsuite::ConflictUser> _cppRef;
};

}  // namespace testsuite
