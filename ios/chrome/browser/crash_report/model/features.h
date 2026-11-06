// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: MetricKit crash reporting feature declarations
// summary: Declares the MetricKit-related base::Feature flags and the helper function that reports whether deferred registration is enabled.
// ---

#ifndef IOS_CHROME_BROWSER_CRASH_REPORT_MODEL_FEATURES_H_
#define IOS_CHROME_BROWSER_CRASH_REPORT_MODEL_FEATURES_H_

#include "base/feature_list.h"

BASE_DECLARE_FEATURE(kMetrickitNonCrashReport);

// Enables the MetrickitDeferRegistration feature.
BASE_DECLARE_FEATURE(kMetrickitDeferRegistration);

// Returns true if the MetrickitDeferRegistration feature is enabled.
bool IsMetrickitDeferRegistrationEnabled();

// Enables the iOS 27 Swift MetricKit state-aware report subscriber.
BASE_DECLARE_FEATURE(kMetrickitSwiftReportSubscriber);

#endif  // IOS_CHROME_BROWSER_CRASH_REPORT_MODEL_FEATURES_H_
