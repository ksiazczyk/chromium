// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: WebUIIOSController default message handling
// summary: Provides the default WebUIIOSController implementation, returning false for overriding WebUI iOS message handling.
// ---

#include "ios/web/public/webui/web_ui_ios_controller.h"

#include <string_view>

namespace web {

bool WebUIIOSController::OverrideHandleWebUIIOSMessage(
    const GURL& source_url,
    std::string_view message) {
  return false;
}

}  // namespace web
