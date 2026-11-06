// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: iOS stub for GPU device info queries
// summary: Provides an iOS-specific QueryDeviceInfo implementation that always reports the GPU as not blocked.
// ---

#include "services/on_device_model/ml/gpu_blocklist.h"

namespace ml {

COMPONENT_EXPORT(ON_DEVICE_MODEL_ML)
DeviceInfo QueryDeviceInfo(const ChromeML& api, bool log_histogram) {
  DeviceInfo query_device_info;
  query_device_info.gpu_blocked_reason = GpuBlockedReason::kNotBlocked;
  return query_device_info;
}

}  // namespace ml
