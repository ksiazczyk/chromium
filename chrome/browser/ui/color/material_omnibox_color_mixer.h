// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Material Omnibox color mixer header
// summary: Declares AddMaterialOmniboxColorMixer, which adds Material recipes for omnibox colors to a color provider.
// ---

#ifndef CHROME_BROWSER_UI_COLOR_MATERIAL_OMNIBOX_COLOR_MIXER_H_
#define CHROME_BROWSER_UI_COLOR_MATERIAL_OMNIBOX_COLOR_MIXER_H_

#include "ui/color/color_provider_key.h"

namespace ui {
class ColorProvider;
}

// Adds a color mixer that contains recipes for omnibox colors to `provider`
// with `key`.
void AddMaterialOmniboxColorMixer(ui::ColorProvider* provider,
                                  const ui::ColorProviderKey& key);

#endif  // CHROME_BROWSER_UI_COLOR_MATERIAL_OMNIBOX_COLOR_MIXER_H_
