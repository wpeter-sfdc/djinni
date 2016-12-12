// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from duration.djinni

#pragma once

#include <chrono>
#include <utility>

namespace testsuite {

struct RecordWithDurationAndDerivings final {
    std::chrono::duration<double, std::nano> dt;

    friend bool operator==(const RecordWithDurationAndDerivings& lhs, const RecordWithDurationAndDerivings& rhs);
    friend bool operator!=(const RecordWithDurationAndDerivings& lhs, const RecordWithDurationAndDerivings& rhs);

    friend bool operator<(const RecordWithDurationAndDerivings& lhs, const RecordWithDurationAndDerivings& rhs);
    friend bool operator>(const RecordWithDurationAndDerivings& lhs, const RecordWithDurationAndDerivings& rhs);

    friend bool operator<=(const RecordWithDurationAndDerivings& lhs, const RecordWithDurationAndDerivings& rhs);
    friend bool operator>=(const RecordWithDurationAndDerivings& lhs, const RecordWithDurationAndDerivings& rhs);

    RecordWithDurationAndDerivings(std::chrono::duration<double, std::nano> dt_)
    : dt(std::move(dt_))
    {}
    RecordWithDurationAndDerivings() {}
};

}  // namespace testsuite
