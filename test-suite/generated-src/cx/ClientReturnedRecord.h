// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from client_interface.djinni

#pragma once

#include "client_returned_record.hpp"

namespace testsuite {

/** Record returned by a client */
public ref class ClientReturnedRecord sealed : public Platform::Object {
public:
    property int64 RecordId;
    property Platform::String^ Content;
    property Platform::String^ Misc;

    ClientReturnedRecord(int64 recordId,
                         Platform::String^ content,
                         Platform::String^ misc) {
        this->RecordId = recordId;
        this->Content = content;
        this->Misc = misc;
    }
    ClientReturnedRecord() {}
internal:
    ::testsuite::ClientReturnedRecord toCpp();
    static ClientReturnedRecord^ fromCpp(const ::testsuite::ClientReturnedRecord& value);
};

}  // namespace testsuite
