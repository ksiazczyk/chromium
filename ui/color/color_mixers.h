// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: AddColorMixers declaration
// summary: Declares AddColorMixers, which attaches all UI-side color mixers to a color provider for a given color provider key.
// ---

#ifndef UI_COLOR_COLOR_MIXERS_H_
#define UI_COLOR_COLOR_MIXERS_H_

#include "base/component_export.h"
#include "ui/color/color_provider_key.h"

namespace ui {

class ColorProvider;

// Adds all ui/-side color mixers to `provider`.
COMPONENT_EXPORT(COLOR)
void AddColorMixers(ColorProvider* provider, const ColorProviderKey& key);

}  // namespace ui

#endif  // UI_COLOR_COLOR_MIXERS_H_
