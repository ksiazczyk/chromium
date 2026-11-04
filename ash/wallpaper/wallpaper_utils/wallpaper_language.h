// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Wallpaper language tag helper header
// summary: Declares GetLanguageTag, which returns the device language tag for wallpaper-related use in Ash.
// ---

#ifndef ASH_WALLPAPER_WALLPAPER_UTILS_WALLPAPER_LANGUAGE_H_
#define ASH_WALLPAPER_WALLPAPER_UTILS_WALLPAPER_LANGUAGE_H_

#include <string>

#include "ash/ash_export.h"

namespace ash {

// Returns the device language tag.
ASH_EXPORT std::string GetLanguageTag();

}  // namespace ash

#endif  // ASH_WALLPAPER_WALLPAPER_UTILS_WALLPAPER_LANGUAGE_H_
