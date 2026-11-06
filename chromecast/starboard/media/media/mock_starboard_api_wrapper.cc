// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock Starboard API wrapper implementation
// summary: Implements the MockStarboardApiWrapper constructor and destructor for the gmock test double.
// ---

#include "chromecast/starboard/media/media/mock_starboard_api_wrapper.h"

namespace chromecast {
namespace media {

MockStarboardApiWrapper::MockStarboardApiWrapper() = default;
MockStarboardApiWrapper::~MockStarboardApiWrapper() = default;

}  // namespace media
}  // namespace chromecast
