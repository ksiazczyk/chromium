// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Dummy Starboard API wrapper
// summary: Provides a GetStarboardApiWrapper stub that returns nullptr when no Starboard implementation is available.
// ---

#include "chromecast/starboard/media/media/starboard_api_wrapper.h"

namespace chromecast {
namespace media {

std::unique_ptr<StarboardApiWrapper> GetStarboardApiWrapper() {
  return nullptr;
}

}  // namespace media
}  // namespace chromecast
