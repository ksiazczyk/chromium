// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: CameraAppUntrustedUI declaration
// summary: Declares the untrusted WebUI controller class that serves the camera app's untrusted content in ChromeOS Ash.
// ---

#ifndef ASH_WEBUI_CAMERA_APP_UI_CAMERA_APP_UNTRUSTED_UI_H_
#define ASH_WEBUI_CAMERA_APP_UI_CAMERA_APP_UNTRUSTED_UI_H_

#include "ui/webui/untrusted_web_ui_controller.h"

namespace ash {

// The Web UI for chrome-untrusted://camera-app.
class CameraAppUntrustedUI : public ui::UntrustedWebUIController {
 public:
  explicit CameraAppUntrustedUI(content::WebUI* web_ui);
  CameraAppUntrustedUI(const CameraAppUntrustedUI&) = delete;
  CameraAppUntrustedUI& operator=(const CameraAppUntrustedUI&) = delete;
  ~CameraAppUntrustedUI() override;
};

}  // namespace ash

#endif  // ASH_WEBUI_CAMERA_APP_UI_CAMERA_APP_UNTRUSTED_UI_H_