// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Material tab strip color mixer header
// summary: Declares AddMaterialTabStripColorMixer, which adds recipes for tab strip colors to a color provider with the given key.
// ---

#ifndef CHROME_BROWSER_UI_COLOR_MATERIAL_TAB_STRIP_COLOR_MIXER_H_
#define CHROME_BROWSER_UI_COLOR_MATERIAL_TAB_STRIP_COLOR_MIXER_H_

#include "ui/color/color_provider_key.h"

namespace ui {
class ColorProvider;
}

// Adds a color mixer that contains recipes for tab strip colors to `provider`
// with `key`.
void AddMaterialTabStripColorMixer(ui::ColorProvider* provider,
                                   const ui::ColorProviderKey& key);

#endif  // CHROME_BROWSER_UI_COLOR_MATERIAL_TAB_STRIP_COLOR_MIXER_H_
