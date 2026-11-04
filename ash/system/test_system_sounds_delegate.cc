// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test system sounds delegate implementation
// summary: Implements a test double for SystemSoundsDelegate that records played sound keys instead of playing audio, for use in Ash tests.
// relations:
//   - implements /ash/system/test_system_sounds_delegate.h
// ---

#include "ash/system/test_system_sounds_delegate.h"

namespace ash {

TestSystemSoundsDelegate::TestSystemSoundsDelegate() = default;

TestSystemSoundsDelegate::~TestSystemSoundsDelegate() = default;

void TestSystemSoundsDelegate::Init() {}

void TestSystemSoundsDelegate::Play(Sound sound_key) {
  last_played_sound_keys_.push_back(sound_key);
}

}  // namespace ash
