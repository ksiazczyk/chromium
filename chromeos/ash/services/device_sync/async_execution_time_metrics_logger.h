// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Async execution time metrics logger header
// summary: Declares LogAsyncExecutionTimeMetric and the maximum async execution time constant used for histogram buckets.
// ---

#ifndef CHROMEOS_ASH_SERVICES_DEVICE_SYNC_ASYNC_EXECUTION_TIME_METRICS_LOGGER_H_
#define CHROMEOS_ASH_SERVICES_DEVICE_SYNC_ASYNC_EXECUTION_TIME_METRICS_LOGGER_H_

#include <string>

#include "base/time/time.h"

namespace ash {

namespace device_sync {

constexpr const base::TimeDelta kMaxAsyncExecutionTime = base::Seconds(30);

// Log metrics related to async function execution times. The function uses
// custom bucket sizes with a max execution time of kMaxAsyncExecutionTime.
void LogAsyncExecutionTimeMetric(const std::string& metric_name,
                                 const base::TimeDelta& execution_time);

}  // namespace device_sync

}  // namespace ash

#endif  // CHROMEOS_ASH_SERVICES_DEVICE_SYNC_ASYNC_EXECUTION_TIME_METRICS_LOGGER_H_
