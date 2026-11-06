// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Cast WebUI host constants implementation
// summary: Defines the Cast WebUI host name strings and a helper that checks whether a host is a known Cast WebUI host.
// ---

#include "chromecast/browser/webui/constants.h"

namespace chromecast {

const char kCastWebUIForceUpdateHost[] = "force_update";
const char kCastWebUIHomeHost[] = "home";
const char kCastWebUIResourceHost[] = "cast_resources";

bool IsKnownCastWebUiHost(std::string_view host) {
  return host == kCastWebUIForceUpdateHost || host == kCastWebUIHomeHost;
}

}  // namespace chromecast
