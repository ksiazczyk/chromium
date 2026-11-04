// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Media App URL constants implementation
// summary: Defines the ash namespace constants for the Chrome OS Media App WebUI host and its trusted and untrusted page URLs.
// ---

#include "ash/webui/media_app_ui/url_constants.h"

namespace ash {

const char kChromeUIMediaAppHost[] = "media-app";
const char kChromeUIMediaAppURL[] = "chrome://media-app/";
const char kChromeUIMediaAppGuestURL[] = "chrome-untrusted://media-app/";

}  // namespace ash
