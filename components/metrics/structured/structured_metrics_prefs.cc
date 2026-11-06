// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Structured metrics preference names
// summary: Defines preference name constants for the persistent log store and device key data used by structured metrics.
// ---

#include "components/metrics/structured/structured_metrics_prefs.h"

namespace metrics::structured::prefs {
const char kLogStoreName[] = "sm.persistent_logs";

const char kDeviceKeyDataPrefName[] = "sm.device_key_data";
}
