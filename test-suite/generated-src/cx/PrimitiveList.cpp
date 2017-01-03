// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from primitive_list.djinni

#include "PrimitiveList.h"  // my header
#include "translation.h"

namespace testsuite {


::testsuite::PrimitiveList PrimitiveList::toCpp() {
    return ::testsuite::PrimitiveList(
        transform<std::vector<int64_t>, Windows::Foundation::Collections::IVector<int64>^>()(List));
}

PrimitiveList^ PrimitiveList::fromCpp(const ::testsuite::PrimitiveList& value) {
    PrimitiveList^ ret = ref new PrimitiveList();
    ret->List = transform<std::vector<int64_t>, Windows::Foundation::Collections::IVector<int64>^>()(value.list);
    return ret;
}

}  // namespace testsuite
