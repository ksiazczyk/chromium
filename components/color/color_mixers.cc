// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Implementation of the components color mixers
// summary: Adds eye dropper and fullscreen control color mixers to the color provider depending on build flags.
// ---

#include "components/color/color_mixers.h"

#include "build/build_config.h"
#include "components/eye_dropper/color_mixer.h"
#include "components/fullscreen_control/color_mixer.h"

namespace color {

void AddComponentsColorMixers(ui::ColorProvider* provider,
                              const ui::ColorProviderKey& key) {
#if defined(USE_AURA)
  eye_dropper::AddColorMixer(provider, key);
#endif
#if defined(TOOLKIT_VIEWS)
  fullscreen::AddColorMixer(provider, key);
#endif
}

}  // namespace color
