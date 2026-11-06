// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Fluent UI color mixer declaration
// summary: Declares AddFluentUiColorMixer, which adds a color mixer with Fluent UI color mappings to a color provider.
// ---

#ifndef UI_COLOR_FLUENT_UI_COLOR_MIXER_H_
#define UI_COLOR_FLUENT_UI_COLOR_MIXER_H_

namespace ui {

class ColorProvider;
struct ColorProviderKey;

// Adds a color mixer to `provider` for fluent mappings.
void AddFluentUiColorMixer(ColorProvider* provider,
                           const ColorProviderKey& key);

}  // namespace ui

#endif  // UI_COLOR_FLUENT_UI_COLOR_MIXER_H_
