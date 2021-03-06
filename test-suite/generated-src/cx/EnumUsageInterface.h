// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from enum.djinni

#pragma once

#include "Color.h"
#include "enum_usage_interface.hpp"
#include <memory>

namespace testsuite {

public ref class EnumUsageInterface sealed : public Platform::Object
{
public:
    Color E (Color e);
    Platform::IBox<Color>^ O (Platform::IBox<Color>^ o);
    Windows::Foundation::Collections::IVector<Color>^ L (Windows::Foundation::Collections::IVector<Color>^ l);
    Windows::Foundation::Collections::IIterable<Color>^ S (Windows::Foundation::Collections::IIterable<Color>^ s);
    Windows::Foundation::Collections::IMap<Color, Color>^ M (Windows::Foundation::Collections::IMap<Color, Color>^ m);
internal:
    EnumUsageInterface(std::shared_ptr<::testsuite::EnumUsageInterface> cppRef) : _cppRef(cppRef) {}
    std::shared_ptr<::testsuite::EnumUsageInterface> cppRef() {return _cppRef;}
private:
    std::shared_ptr<::testsuite::EnumUsageInterface> _cppRef;
};

}  // namespace testsuite
