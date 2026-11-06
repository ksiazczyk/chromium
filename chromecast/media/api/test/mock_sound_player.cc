// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock sound player implementation
// summary: Implements the constructor and destructor of the MockSoundPlayer gmock class used in Cast media tests.
// ---

#include "chromecast/media/api/test/mock_sound_player.h"

namespace chromecast {
namespace media {

MockSoundPlayer::MockSoundPlayer() = default;
MockSoundPlayer::~MockSoundPlayer() = default;

}  // namespace media
}  // namespace chromecast
