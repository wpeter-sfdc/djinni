// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from set.djinni

#include "SetRecord.h"  // my header
#include "translation.h"

namespace testsuite {


::testsuite::SetRecord SetRecord::toCpp() {
    return ::testsuite::SetRecord(
        transform<std::unordered_set<std::string>, Windows::Foundation::Collections::IIterable<Platform::String^>^>()(Set),
        transform<std::unordered_set<int32_t>, Windows::Foundation::Collections::IIterable<int32>^>()(Iset));
}

SetRecord^ SetRecord::fromCpp(const ::testsuite::SetRecord& value) {
    SetRecord^ ret = ref new SetRecord();
    ret->Set = transform<std::unordered_set<std::string>, Windows::Foundation::Collections::IIterable<Platform::String^>^>()(value.set);
    ret->Iset = transform<std::unordered_set<int32_t>, Windows::Foundation::Collections::IIterable<int32>^>()(value.iset);
    return ret;
}

}  // namespace testsuite
