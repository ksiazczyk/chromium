// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Chrome metrics private delegate implementation
// summary: Implements the Chrome-specific metrics private delegate, reporting crash reporting status through ChromeMetricsServiceAccessor.
// ---

#include "chrome/browser/extensions/api/metrics_private/chrome_metrics_private_delegate.h"

#include "chrome/browser/metrics/chrome_metrics_service_accessor.h"
#include "extensions/buildflags/buildflags.h"

static_assert(BUILDFLAG(ENABLE_EXTENSIONS_CORE));

namespace extensions {

bool ChromeMetricsPrivateDelegate::IsCrashReportingEnabled() {
  return ChromeMetricsServiceAccessor::IsMetricsAndCrashReportingEnabled();
}

}  // namespace extensions
