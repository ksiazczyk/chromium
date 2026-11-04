// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: WebOTP cross-device failure metrics implementation
// summary: Records the Blink.Sms.Receive.CrossDeviceFailure histogram for cross-device WebOTP failures.
// ---

#include "chrome/browser/sharing/sms/sms_remote_fetcher_metrics.h"

#include "base/metrics/histogram_functions.h"

void RecordWebOTPCrossDeviceFailure(WebOTPCrossDeviceFailure failure) {
  base::UmaHistogramEnumeration("Blink.Sms.Receive.CrossDeviceFailure",
                                failure);
}
