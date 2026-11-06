// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Watermark view utilities header
// summary: Declares GetWatermarkExpandedSizeForRotation, which computes the bounding size needed to fully cover a viewport after rotation.
// ---

#ifndef IOS_CHROME_BROWSER_ENTERPRISE_DATA_PROTECTION_UI_WATERMARK_VIEW_UTILS_H_
#define IOS_CHROME_BROWSER_ENTERPRISE_DATA_PROTECTION_UI_WATERMARK_VIEW_UTILS_H_

#import <CoreGraphics/CoreGraphics.h>

// Calculates the expanded bounding size required to fully cover a viewport of
// `size` after rotating it by `angle` radians.
CGSize GetWatermarkExpandedSizeForRotation(CGSize size, CGFloat angle);

#endif  // IOS_CHROME_BROWSER_ENTERPRISE_DATA_PROTECTION_UI_WATERMARK_VIEW_UTILS_H_
