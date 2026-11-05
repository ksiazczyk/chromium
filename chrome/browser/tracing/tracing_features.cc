// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Tracing feature flag definitions
// summary: Defines the kWindowsSystemTracing base::Feature that controls connecting to the Windows system tracing service, enabled by default on Windows.
// ---

#include "chrome/browser/tracing/tracing_features.h"

#if BUILDFLAG(IS_WIN)
BASE_FEATURE(kWindowsSystemTracing, base::FEATURE_ENABLED_BY_DEFAULT);
#endif  // BUILDFLAG(IS_WIN)
