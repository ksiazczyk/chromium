// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Camera app WebUI URL constants
// summary: Defines string constants for the Chrome OS camera app WebUI host name and for its trusted and untrusted page and scope addresses.
// ---

#include "ash/webui/camera_app_ui/url_constants.h"

namespace ash {

const char kChromeUICameraAppHost[] = "camera-app";
const char kChromeUICameraAppMainURL[] = "chrome://camera-app/views/main.html";
const char kChromeUICameraAppScopeURL[] = "chrome://camera-app/views";
const char kChromeUICameraAppURL[] = "chrome://camera-app/";
const char kChromeUIUntrustedCameraAppURL[] = "chrome-untrusted://camera-app/";

}  // namespace ash
