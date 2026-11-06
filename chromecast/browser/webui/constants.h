// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Cast WebUI host constants header
// summary: Declares the Cast WebUI host name constants and the IsKnownCastWebUiHost helper for the chromecast namespace.
// ---

#ifndef CHROMECAST_BROWSER_WEBUI_CONSTANTS_H_
#define CHROMECAST_BROWSER_WEBUI_CONSTANTS_H_

#include <string_view>

namespace chromecast {

// Web UI hostnames for Cast.
extern const char kCastWebUIForceUpdateHost[];
extern const char kCastWebUIHomeHost[];
extern const char kCastWebUIResourceHost[];

bool IsKnownCastWebUiHost(std::string_view host);

}  // namespace chromecast

#endif  // CHROMECAST_BROWSER_WEBUI_CONSTANTS_H_
