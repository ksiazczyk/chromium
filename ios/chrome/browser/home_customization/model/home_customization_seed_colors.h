// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Home customization seed colors header
// summary: Declares the SeedColor struct with scheme variant and accessibility name ID, plus the array of nine seed colors used for background color palette configurations.
// ---

#ifndef IOS_CHROME_BROWSER_HOME_CUSTOMIZATION_MODEL_HOME_CUSTOMIZATION_SEED_COLORS_H_
#define IOS_CHROME_BROWSER_HOME_CUSTOMIZATION_MODEL_HOME_CUSTOMIZATION_SEED_COLORS_H_

#import <Foundation/Foundation.h>

#import <string>

#import "components/sync/protocol/theme_types.pb.h"
#import "ios/chrome/common/ui/colors/semantic_color_names.h"
#import "skia/ext/skia_utils_ios.h"
#import "ui/color/color_provider_key.h"

// Represents a seed color and its associated scheme variant.
struct SeedColor {
  SkColor color;
  ui::ColorProviderKey::SchemeVariant variant;
  int accessibilityNameId;
};

// The number of seed colors.
inline constexpr size_t kSeedColorsCount = 9;

// Array of seed colors (in ARGB integer format) used to generate
// background color palette configurations.
extern const std::array<SeedColor, kSeedColorsCount> kSeedColors;

#endif  // IOS_CHROME_BROWSER_HOME_CUSTOMIZATION_MODEL_HOME_CUSTOMIZATION_SEED_COLORS_H_
