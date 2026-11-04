// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Desktop WebSerialChooser implementation
// summary: Implements WebSerialChooserDesktop::ShowChooser by opening the Chrome device chooser dialog for the given frame and tracking its close callback.
// ---

#include "chrome/browser/serial/web_serial_chooser_desktop.h"

#include "chrome/browser/ui/dialogs/browser_dialogs.h"
#include "chrome/browser/ui/serial/serial_chooser_controller.h"

WebSerialChooserDesktop::WebSerialChooserDesktop() = default;

WebSerialChooserDesktop::~WebSerialChooserDesktop() = default;

void WebSerialChooserDesktop::ShowChooser(
    content::RenderFrameHost* frame,
    std::unique_ptr<SerialChooserController> controller) {
  closure_runner_.ReplaceClosure(
      chrome::ShowDeviceChooserDialog(frame, std::move(controller)));
}
