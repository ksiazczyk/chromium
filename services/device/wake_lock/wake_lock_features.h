// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Wake lock feature flag declaration
// summary: Declares the kRemoveWakeLockInDestructor base feature used by the wake lock code.
// ---

#ifndef SERVICES_DEVICE_WAKE_LOCK_WAKE_LOCK_FEATURES_H_
#define SERVICES_DEVICE_WAKE_LOCK_WAKE_LOCK_FEATURES_H_

#include "base/feature_list.h"

namespace features {
BASE_DECLARE_FEATURE(kRemoveWakeLockInDestructor);
}  // namespace features

#endif  // SERVICES_DEVICE_WAKE_LOCK_WAKE_LOCK_FEATURES_H_
