// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from test.djinni

#include "EmptyRecord.h"  // my header
#include "translation.h"

namespace testsuite {


::testsuite::EmptyRecord EmptyRecord::toCpp() {
    return ::testsuite::EmptyRecord(
    );
}

EmptyRecord^ EmptyRecord::fromCpp(const ::testsuite::EmptyRecord& value) {
    EmptyRecord^ ret = ref new EmptyRecord();
    return ret;
}

}  // namespace testsuite