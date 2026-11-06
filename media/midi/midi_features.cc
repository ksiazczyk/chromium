// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: MIDI feature flag definitions
// summary: Defines base::Feature flags for MIDI, currently the Windows WinRT MIDI manager feature that is disabled by default.
// ---

#include "media/midi/midi_features.h"

#include "build/build_config.h"

namespace midi {
namespace features {

#if BUILDFLAG(IS_WIN)
BASE_FEATURE(kMidiManagerWinrt, base::FEATURE_DISABLED_BY_DEFAULT);
#endif

}  // namespace features
}  // namespace midi
