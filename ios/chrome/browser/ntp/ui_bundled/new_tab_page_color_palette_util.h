// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: New tab page color palette utilities header
// summary: Declares helpers to build a color palette from a seed color, render palette preview images and resolve default NTP and card background colors.
// ---

#ifndef IOS_CHROME_BROWSER_NTP_UI_BUNDLED_NEW_TAB_PAGE_COLOR_PALETTE_UTIL_H_
#define IOS_CHROME_BROWSER_NTP_UI_BUNDLED_NEW_TAB_PAGE_COLOR_PALETTE_UTIL_H_

#import <UIKit/UIKit.h>

#import "ui/color/color_provider_key.h"

@class NewTabPageColorPalette;

// Creates and returns a color palette configuration from a seed color.
NewTabPageColorPalette* CreateColorPaletteFromSeedColor(
    UIColor* seed_color,
    ui::ColorProviderKey::SchemeVariant variant);

/// TODO(crbug.com/534705391): Investigate getting color palette previews from
/// home customization and removing this helper.
// Returns a square, tri-color preview for a `color_palette` with a requested
// `size`.
UIImage* CreatePreviewImageForColorPalette(
    const NewTabPageColorPalette* color_palette,
    CGFloat size,
    UITraitCollection* trait_collection);

/// TODO(crbug.com/534705391): Investigate getting color palette previews from
/// home customization and removing this helper.
// Returns the color palette for an un-themed NTP in light or dark mode.
NewTabPageColorPalette* DefaultNTPColorPalette();

// Returns the background color for NTP cards (most visited tiles, magic stack
// cards, discover) based on the NTP `color_palette`, which may be nil.
UIColor* NTPCardBackgroundColor(NewTabPageColorPalette* color_palette);

#endif  // IOS_CHROME_BROWSER_NTP_UI_BUNDLED_NEW_TAB_PAGE_COLOR_PALETTE_UTIL_H_
