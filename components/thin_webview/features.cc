// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ThinWebView feature flag definition
// summary: Defines the kUseSurfaceViewForThinWebView feature, enabled by default, for the thin_webview component.
// ---

#include "components/thin_webview/features.h"

namespace thin_webview::android {

BASE_FEATURE(kUseSurfaceViewForThinWebView, base::FEATURE_ENABLED_BY_DEFAULT);

}  // namespace thin_webview::android
