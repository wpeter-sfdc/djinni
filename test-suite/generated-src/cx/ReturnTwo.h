// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from multiple_inheritance.djinni

#pragma once

#include "return_two.hpp"
#include <memory>

namespace testsuite {

public ref class ReturnTwo sealed : public Platform::Object
{
public:
    static ReturnTwo^ GetInstance ();
    uint8_t ReturnTwo ();
internal:
    ReturnTwo(std::shared_ptr<::testsuite::ReturnTwo> cppRef) : _cppRef(cppRef) {}
    std::shared_ptr<::testsuite::ReturnTwo> cppRef() {return _cppRef;}
private:
    std::shared_ptr<::testsuite::ReturnTwo> _cppRef;
};

}  // namespace testsuite