// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Lens feature flag declarations
// summary: Declares base::Feature constants that control Lens camera, zoom, shader, and overlay behaviors on iOS.
// ---

#ifndef IOS_CHROME_BROWSER_LENS_UI_BUNDLED_FEATURES_H_
#define IOS_CHROME_BROWSER_LENS_UI_BUNDLED_FEATURES_H_

#import "base/feature_list.h"

// Whether to make unused still outputs optional in Lens camera.
BASE_DECLARE_FEATURE(kLensCameraNoStillOutputRequired);

// Whether to prefer unbinned pixel formats in Lens camera.
BASE_DECLARE_FEATURE(kLensCameraUnbinnedCaptureFormatsPreferred);

// Whether to enable Lens camera continuous zoom.
BASE_DECLARE_FEATURE(kLensContinuousZoomEnabled);

// Whether to set the initial Lens camera zoom level to 90%.
BASE_DECLARE_FEATURE(kLensInitialLvfZoomLevel90Percent);

// Whether to enable Lens triple camera.
BASE_DECLARE_FEATURE(kLensTripleCameraEnabled);

// Whether to enable the Shader V2 for Lens Omnient.
BASE_DECLARE_FEATURE(kLensOmnientShaderV2Enabled);

// Whether to enable the stream service web channel transport.
BASE_DECLARE_FEATURE(kLensStreamServiceWebChannelTransportEnabled);

// Whether to enable followups full height in the Lens overlay.
BASE_DECLARE_FEATURE(kLensFollowupsFullHeightEnabled);

#endif  // IOS_CHROME_BROWSER_LENS_UI_BUNDLED_FEATURES_H_
