// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: UI color mixer header
// summary: Declares AddUiColorMixer, which adds a color mixer to a color provider to produce all colors needed by ui/.
// ---

#ifndef UI_COLOR_UI_COLOR_MIXER_H_
#define UI_COLOR_UI_COLOR_MIXER_H_

#include "ui/color/color_provider_key.h"

namespace ui {

class ColorProvider;

// Adds a color mixer to |provider| that combine the above color sets with
// recipes as necessary to produce all colors needed by ui/.
void AddUiColorMixer(ColorProvider* provider, const ColorProviderKey& key);

}  // namespace ui

#endif  // UI_COLOR_UI_COLOR_MIXER_H_
