// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from client_interface.djinni

#pragma once

#include "client_returned_record.hpp"

namespace testsuite {

/** Record returned by a client */
public ref class ClientReturnedRecord sealed : public Platform::Object {
public:
    property int64_t RecordId;
    property Platform::String^ Content;
    property Platform::IBox<Platform::String>^ Misc;

    ClientReturnedRecord(int64_t RecordId,
                         Platform::String^ Content,
                         Platform::IBox<Platform::String>^ Misc) {
        this->RecordId = RecordId;
        this->Content = Content;
        this->Misc = Misc;
    }
    ClientReturnedRecord() {}
internal:
    ::testsuite::ClientReturnedRecord toCpp();
    static ClientReturnedRecord^ fromCpp(const ::testsuite::ClientReturnedRecord& value);
};

}  // namespace testsuite
