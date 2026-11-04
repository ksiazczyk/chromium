// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: AwPrefetchLatestInfoPref implementation
// summary: Implements the AwPrefetchLatestInfoPref struct constructors and assignment operators that store the latest prefetch origin and JavaScript enablement.
// relations:
//   - implements /android_webview/browser/prefetch/aw_prefetch_prefs.h
// ---

#include "android_webview/browser/prefetch/aw_prefetch_prefs.h"

namespace android_webview {

AwPrefetchLatestInfoPref::AwPrefetchLatestInfoPref(url::Origin origin,
                                                   bool javascript_enabled)
    : origin(origin), javascript_enabled(javascript_enabled) {}

AwPrefetchLatestInfoPref::~AwPrefetchLatestInfoPref() = default;

AwPrefetchLatestInfoPref::AwPrefetchLatestInfoPref(
    const AwPrefetchLatestInfoPref&) = default;

AwPrefetchLatestInfoPref& AwPrefetchLatestInfoPref::operator=(
    const AwPrefetchLatestInfoPref&) = default;

}  // namespace android_webview
