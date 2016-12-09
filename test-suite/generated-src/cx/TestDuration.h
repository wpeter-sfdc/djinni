// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from duration.djinni

#pragma once

#include "test_duration.hpp"
#include <memory>
#include Windows.Foundation.FoundationContract.winmd

namespace testsuite {

public ref class TestDuration sealed : public Platform::Object
{
public:
    static Platform::String^ HoursString (Windows::Foundation::TimeSpan<int32_t, Windows::Foundation::TimeSpan> Dt);
    static Platform::String^ MinutesString (Windows::Foundation::TimeSpan<int32_t, Windows::Foundation::TimeSpan> Dt);
    static Platform::String^ SecondsString (Windows::Foundation::TimeSpan<int32_t, Windows::Foundation::TimeSpan> Dt);
    static Platform::String^ MillisString (Windows::Foundation::TimeSpan<int32_t, Windows::Foundation::TimeSpan> Dt);
    static Platform::String^ MicrosString (Windows::Foundation::TimeSpan<int32_t, Windows::Foundation::TimeSpan> Dt);
    static Platform::String^ NanosString (Windows::Foundation::TimeSpan<int32_t, Windows::Foundation::TimeSpan> Dt);
    static Windows::Foundation::TimeSpan<int32_t, Windows::Foundation::TimeSpan> Hours (int32_t Count);
    static Windows::Foundation::TimeSpan<int32_t, Windows::Foundation::TimeSpan> Minutes (int32_t Count);
    static Windows::Foundation::TimeSpan<int32_t, Windows::Foundation::TimeSpan> Seconds (int32_t Count);
    static Windows::Foundation::TimeSpan<int32_t, Windows::Foundation::TimeSpan> Millis (int32_t Count);
    static Windows::Foundation::TimeSpan<int32_t, Windows::Foundation::TimeSpan> Micros (int32_t Count);
    static Windows::Foundation::TimeSpan<int32_t, Windows::Foundation::TimeSpan> Nanos (int32_t Count);
    static Windows::Foundation::TimeSpan<double, Windows::Foundation::TimeSpan> Hoursf (double Count);
    static Windows::Foundation::TimeSpan<double, Windows::Foundation::TimeSpan> Minutesf (double Count);
    static Windows::Foundation::TimeSpan<double, Windows::Foundation::TimeSpan> Secondsf (double Count);
    static Windows::Foundation::TimeSpan<double, Windows::Foundation::TimeSpan> Millisf (double Count);
    static Windows::Foundation::TimeSpan<double, Windows::Foundation::TimeSpan> Microsf (double Count);
    static Windows::Foundation::TimeSpan<double, Windows::Foundation::TimeSpan> Nanosf (double Count);
    static Platform::IBox<Windows::Foundation::TimeSpan<int64_t, Windows::Foundation::TimeSpan^>>^ Box (int64_t Count);
    static int64_t Unbox (Platform::IBox<Windows::Foundation::TimeSpan<int64_t, Windows::Foundation::TimeSpan^>>^ Dt);
internal:
    TestDuration(std::shared_ptr<::testsuite::TestDuration> cppRef) : _cppRef(cppRef) {}
    std::shared_ptr<::testsuite::TestDuration> cppRef() {return _cppRef;}
private:
    std::shared_ptr<::testsuite::TestDuration> _cppRef;
};

}  // namespace testsuite
