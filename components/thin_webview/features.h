// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ThinWebView feature flag declaration
// summary: Declares the kUseSurfaceViewForThinWebView base feature used by the thin_webview component.
// ---

#ifndef COMPONENTS_THIN_WEBVIEW_FEATURES_H_
#define COMPONENTS_THIN_WEBVIEW_FEATURES_H_

#include "base/feature_list.h"

namespace thin_webview::android {

BASE_DECLARE_FEATURE(kUseSurfaceViewForThinWebView);

}  // namespace thin_webview::android

#endif  // COMPONENTS_THIN_WEBVIEW_FEATURES_H_
