// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from nested_collection.djinni

#pragma once

#include "nested_collection.hpp"

namespace testsuite {

public ref class NestedCollection sealed : public Platform::Object {
public:
    property Windows::Foundation::Collections::IVector<Windows::Foundation::Collections::IIterable<Platform::String^>^>^ SetList;

    NestedCollection(Windows::Foundation::Collections::IVector<Windows::Foundation::Collections::IIterable<Platform::String^>^>^ SetList) {
        this->SetList = SetList;
    }
    NestedCollection() {}
internal:
    ::testsuite::NestedCollection toCpp();
    static NestedCollection^ fromCpp(const ::testsuite::NestedCollection& value);
};

}  // namespace testsuite
