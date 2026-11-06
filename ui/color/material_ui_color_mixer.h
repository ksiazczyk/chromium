// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Material UI color mixer declaration
// summary: Declares AddMaterialUiColorMixer, which adds a color mixer with Material UI color mappings to a color provider.
// ---

#ifndef UI_COLOR_MATERIAL_UI_COLOR_MIXER_H_
#define UI_COLOR_MATERIAL_UI_COLOR_MIXER_H_

#include "ui/color/color_provider_key.h"

namespace ui {

class ColorProvider;

// Adds a color mixer to `provider` for material mappings.
void AddMaterialUiColorMixer(ColorProvider* provider,
                             const ColorProviderKey& key);

}  // namespace ui

#endif  // UI_COLOR_MATERIAL_UI_COLOR_MIXER_H_
