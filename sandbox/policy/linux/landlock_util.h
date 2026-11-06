// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Landlock status reporting header
// summary: Declares ReportLandlockStatus, which reports the system's Landlock support state via UMA.
// ---

#ifndef SANDBOX_POLICY_LINUX_LANDLOCK_UTIL_H_
#define SANDBOX_POLICY_LINUX_LANDLOCK_UTIL_H_

#include "sandbox/policy/export.h"
namespace sandbox::policy {

// Report Landlock status via UMA.
SANDBOX_POLICY_EXPORT void ReportLandlockStatus();

}  // namespace sandbox::policy

#endif  // SANDBOX_POLICY_LINUX_LANDLOCK_UTIL_H_
