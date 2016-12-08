// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from duration.djinni

#include "TestDuration.h"  // my header
#include "translation.h"
#include Windows.Foundation.FoundationContract.winmd

namespace testsuite {

Platform::String^ TestDuration::HoursString (Windows::Foundation::TimeSpan<int32_t, Windows::Foundation::TimeSpan> Dt)
{
    try {
        auto cppRet = ::testsuite::TestDuration::hoursString(transform<std::chrono::duration<int32_t, std::ratio<3600>>, Windows::Foundation::TimeSpan<int32_t, Windows::Foundation::TimeSpan>>()(Dt));
        return transform<std::string, Platform::String^>()(cppRet);
    }
    catch(const std::exception& e) {
        throw ref new Platform::Exception(-1, transform<std::string, Platform::String^>()((std::string)e.what()));
    }
}
Platform::String^ TestDuration::MinutesString (Windows::Foundation::TimeSpan<int32_t, Windows::Foundation::TimeSpan> Dt)
{
    try {
        auto cppRet = ::testsuite::TestDuration::minutesString(transform<std::chrono::duration<int32_t, std::ratio<60>>, Windows::Foundation::TimeSpan<int32_t, Windows::Foundation::TimeSpan>>()(Dt));
        return transform<std::string, Platform::String^>()(cppRet);
    }
    catch(const std::exception& e) {
        throw ref new Platform::Exception(-1, transform<std::string, Platform::String^>()((std::string)e.what()));
    }
}
Platform::String^ TestDuration::SecondsString (Windows::Foundation::TimeSpan<int32_t, Windows::Foundation::TimeSpan> Dt)
{
    try {
        auto cppRet = ::testsuite::TestDuration::secondsString(transform<std::chrono::duration<int32_t, std::ratio<1>>, Windows::Foundation::TimeSpan<int32_t, Windows::Foundation::TimeSpan>>()(Dt));
        return transform<std::string, Platform::String^>()(cppRet);
    }
    catch(const std::exception& e) {
        throw ref new Platform::Exception(-1, transform<std::string, Platform::String^>()((std::string)e.what()));
    }
}
Platform::String^ TestDuration::MillisString (Windows::Foundation::TimeSpan<int32_t, Windows::Foundation::TimeSpan> Dt)
{
    try {
        auto cppRet = ::testsuite::TestDuration::millisString(transform<std::chrono::duration<int32_t, std::milli>, Windows::Foundation::TimeSpan<int32_t, Windows::Foundation::TimeSpan>>()(Dt));
        return transform<std::string, Platform::String^>()(cppRet);
    }
    catch(const std::exception& e) {
        throw ref new Platform::Exception(-1, transform<std::string, Platform::String^>()((std::string)e.what()));
    }
}
Platform::String^ TestDuration::MicrosString (Windows::Foundation::TimeSpan<int32_t, Windows::Foundation::TimeSpan> Dt)
{
    try {
        auto cppRet = ::testsuite::TestDuration::microsString(transform<std::chrono::duration<int32_t, std::micro>, Windows::Foundation::TimeSpan<int32_t, Windows::Foundation::TimeSpan>>()(Dt));
        return transform<std::string, Platform::String^>()(cppRet);
    }
    catch(const std::exception& e) {
        throw ref new Platform::Exception(-1, transform<std::string, Platform::String^>()((std::string)e.what()));
    }
}
Platform::String^ TestDuration::NanosString (Windows::Foundation::TimeSpan<int32_t, Windows::Foundation::TimeSpan> Dt)
{
    try {
        auto cppRet = ::testsuite::TestDuration::nanosString(transform<std::chrono::duration<int32_t, std::nano>, Windows::Foundation::TimeSpan<int32_t, Windows::Foundation::TimeSpan>>()(Dt));
        return transform<std::string, Platform::String^>()(cppRet);
    }
    catch(const std::exception& e) {
        throw ref new Platform::Exception(-1, transform<std::string, Platform::String^>()((std::string)e.what()));
    }
}
Windows::Foundation::TimeSpan<int32_t, Windows::Foundation::TimeSpan> TestDuration::Hours (int32_t Count)
{
    try {
        auto cppRet = ::testsuite::TestDuration::hours(transform<int32_t, int32_t>()(Count));
        return transform<std::chrono::duration<int32_t, std::ratio<3600>>, Windows::Foundation::TimeSpan<int32_t, Windows::Foundation::TimeSpan>>()(cppRet);
    }
    catch(const std::exception& e) {
        throw ref new Platform::Exception(-1, transform<std::string, Platform::String^>()((std::string)e.what()));
    }
}
Windows::Foundation::TimeSpan<int32_t, Windows::Foundation::TimeSpan> TestDuration::Minutes (int32_t Count)
{
    try {
        auto cppRet = ::testsuite::TestDuration::minutes(transform<int32_t, int32_t>()(Count));
        return transform<std::chrono::duration<int32_t, std::ratio<60>>, Windows::Foundation::TimeSpan<int32_t, Windows::Foundation::TimeSpan>>()(cppRet);
    }
    catch(const std::exception& e) {
        throw ref new Platform::Exception(-1, transform<std::string, Platform::String^>()((std::string)e.what()));
    }
}
Windows::Foundation::TimeSpan<int32_t, Windows::Foundation::TimeSpan> TestDuration::Seconds (int32_t Count)
{
    try {
        auto cppRet = ::testsuite::TestDuration::seconds(transform<int32_t, int32_t>()(Count));
        return transform<std::chrono::duration<int32_t, std::ratio<1>>, Windows::Foundation::TimeSpan<int32_t, Windows::Foundation::TimeSpan>>()(cppRet);
    }
    catch(const std::exception& e) {
        throw ref new Platform::Exception(-1, transform<std::string, Platform::String^>()((std::string)e.what()));
    }
}
Windows::Foundation::TimeSpan<int32_t, Windows::Foundation::TimeSpan> TestDuration::Millis (int32_t Count)
{
    try {
        auto cppRet = ::testsuite::TestDuration::millis(transform<int32_t, int32_t>()(Count));
        return transform<std::chrono::duration<int32_t, std::milli>, Windows::Foundation::TimeSpan<int32_t, Windows::Foundation::TimeSpan>>()(cppRet);
    }
    catch(const std::exception& e) {
        throw ref new Platform::Exception(-1, transform<std::string, Platform::String^>()((std::string)e.what()));
    }
}
Windows::Foundation::TimeSpan<int32_t, Windows::Foundation::TimeSpan> TestDuration::Micros (int32_t Count)
{
    try {
        auto cppRet = ::testsuite::TestDuration::micros(transform<int32_t, int32_t>()(Count));
        return transform<std::chrono::duration<int32_t, std::micro>, Windows::Foundation::TimeSpan<int32_t, Windows::Foundation::TimeSpan>>()(cppRet);
    }
    catch(const std::exception& e) {
        throw ref new Platform::Exception(-1, transform<std::string, Platform::String^>()((std::string)e.what()));
    }
}
Windows::Foundation::TimeSpan<int32_t, Windows::Foundation::TimeSpan> TestDuration::Nanos (int32_t Count)
{
    try {
        auto cppRet = ::testsuite::TestDuration::nanos(transform<int32_t, int32_t>()(Count));
        return transform<std::chrono::duration<int32_t, std::nano>, Windows::Foundation::TimeSpan<int32_t, Windows::Foundation::TimeSpan>>()(cppRet);
    }
    catch(const std::exception& e) {
        throw ref new Platform::Exception(-1, transform<std::string, Platform::String^>()((std::string)e.what()));
    }
}
Windows::Foundation::TimeSpan<double, Windows::Foundation::TimeSpan> TestDuration::Hoursf (double Count)
{
    try {
        auto cppRet = ::testsuite::TestDuration::hoursf(transform<double, double>()(Count));
        return transform<std::chrono::duration<double, std::ratio<3600>>, Windows::Foundation::TimeSpan<double, Windows::Foundation::TimeSpan>>()(cppRet);
    }
    catch(const std::exception& e) {
        throw ref new Platform::Exception(-1, transform<std::string, Platform::String^>()((std::string)e.what()));
    }
}
Windows::Foundation::TimeSpan<double, Windows::Foundation::TimeSpan> TestDuration::Minutesf (double Count)
{
    try {
        auto cppRet = ::testsuite::TestDuration::minutesf(transform<double, double>()(Count));
        return transform<std::chrono::duration<double, std::ratio<60>>, Windows::Foundation::TimeSpan<double, Windows::Foundation::TimeSpan>>()(cppRet);
    }
    catch(const std::exception& e) {
        throw ref new Platform::Exception(-1, transform<std::string, Platform::String^>()((std::string)e.what()));
    }
}
Windows::Foundation::TimeSpan<double, Windows::Foundation::TimeSpan> TestDuration::Secondsf (double Count)
{
    try {
        auto cppRet = ::testsuite::TestDuration::secondsf(transform<double, double>()(Count));
        return transform<std::chrono::duration<double, std::ratio<1>>, Windows::Foundation::TimeSpan<double, Windows::Foundation::TimeSpan>>()(cppRet);
    }
    catch(const std::exception& e) {
        throw ref new Platform::Exception(-1, transform<std::string, Platform::String^>()((std::string)e.what()));
    }
}
Windows::Foundation::TimeSpan<double, Windows::Foundation::TimeSpan> TestDuration::Millisf (double Count)
{
    try {
        auto cppRet = ::testsuite::TestDuration::millisf(transform<double, double>()(Count));
        return transform<std::chrono::duration<double, std::milli>, Windows::Foundation::TimeSpan<double, Windows::Foundation::TimeSpan>>()(cppRet);
    }
    catch(const std::exception& e) {
        throw ref new Platform::Exception(-1, transform<std::string, Platform::String^>()((std::string)e.what()));
    }
}
Windows::Foundation::TimeSpan<double, Windows::Foundation::TimeSpan> TestDuration::Microsf (double Count)
{
    try {
        auto cppRet = ::testsuite::TestDuration::microsf(transform<double, double>()(Count));
        return transform<std::chrono::duration<double, std::micro>, Windows::Foundation::TimeSpan<double, Windows::Foundation::TimeSpan>>()(cppRet);
    }
    catch(const std::exception& e) {
        throw ref new Platform::Exception(-1, transform<std::string, Platform::String^>()((std::string)e.what()));
    }
}
Windows::Foundation::TimeSpan<double, Windows::Foundation::TimeSpan> TestDuration::Nanosf (double Count)
{
    try {
        auto cppRet = ::testsuite::TestDuration::nanosf(transform<double, double>()(Count));
        return transform<std::chrono::duration<double, std::nano>, Windows::Foundation::TimeSpan<double, Windows::Foundation::TimeSpan>>()(cppRet);
    }
    catch(const std::exception& e) {
        throw ref new Platform::Exception(-1, transform<std::string, Platform::String^>()((std::string)e.what()));
    }
}
Platform::IBox<Windows::Foundation::TimeSpan<int64_t, Windows::Foundation::TimeSpan^>>^ TestDuration::Box (int64_t Count)
{
    try {
        auto cppRet = ::testsuite::TestDuration::box(transform<int64_t, int64_t>()(Count));
        return transform<std::experimental::optional<std::chrono::duration<int64_t, std::ratio<1>>>, Platform::IBox<Windows::Foundation::TimeSpan<int64_t, Windows::Foundation::TimeSpan^>>^>()(cppRet);
    }
    catch(const std::exception& e) {
        throw ref new Platform::Exception(-1, transform<std::string, Platform::String^>()((std::string)e.what()));
    }
}
int64_t TestDuration::Unbox (Platform::IBox<Windows::Foundation::TimeSpan<int64_t, Windows::Foundation::TimeSpan^>>^ Dt)
{
    try {
        auto cppRet = ::testsuite::TestDuration::unbox(transform<std::experimental::optional<std::chrono::duration<int64_t, std::ratio<1>>>, Platform::IBox<Windows::Foundation::TimeSpan<int64_t, Windows::Foundation::TimeSpan^>>^>()(Dt));
        return transform<int64_t, int64_t>()(cppRet);
    }
    catch(const std::exception& e) {
        throw ref new Platform::Exception(-1, transform<std::string, Platform::String^>()((std::string)e.what()));
    }
}

}  // namespace testsuite
