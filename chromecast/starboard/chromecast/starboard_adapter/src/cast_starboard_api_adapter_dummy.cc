// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// A dummy implementation of egl_starboard.h. This can be used to compile
// without starboard headers. It should never be used in production.
//
// TODO(b/333131992): remove this

// ---docerion
// type: source
// title: Dummy CastStarboardApiAdapter stub for builds without Starboard headers
// summary: Provides a stub GetInstance() that returns null so the adapter can compile without Starboard headers; it must never be used in production.
// ---

#include <iostream>

#include "chromecast/starboard/chromecast/starboard_adapter/public/cast_starboard_api_adapter.h"

namespace chromecast {

// static
CastStarboardApiAdapter* CastStarboardApiAdapter::GetInstance() {
  std::cerr << "Returning a null CastStarboardApiAdapter" << std::endl;
  return nullptr;
}

}  // namespace chromecast
