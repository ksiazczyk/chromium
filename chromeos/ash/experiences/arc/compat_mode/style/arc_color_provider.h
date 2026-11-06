// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ARC color provider header
// summary: Declares the arc namespace helper IsDarkModeEnabled, which determines whether dark mode is enabled for ARC compat mode styling.
// ---

#ifndef CHROMEOS_ASH_EXPERIENCES_ARC_COMPAT_MODE_STYLE_ARC_COLOR_PROVIDER_H_
#define CHROMEOS_ASH_EXPERIENCES_ARC_COMPAT_MODE_STYLE_ARC_COLOR_PROVIDER_H_

namespace arc {

// Determine if dark mode is enabled
bool IsDarkModeEnabled();

}  // namespace arc

#endif  // CHROMEOS_ASH_EXPERIENCES_ARC_COMPAT_MODE_STYLE_ARC_COLOR_PROVIDER_H_
