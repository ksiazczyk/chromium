// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Desktop WebUSB chooser implementation
// summary: Shows the USB device chooser dialog bubble for desktop browsers when a page requests device access.
// ---

#include "chrome/browser/usb/web_usb_chooser_desktop.h"

#include <utility>

#include "chrome/browser/ui/dialogs/browser_dialogs.h"
#include "chrome/browser/usb/usb_chooser_controller.h"

WebUsbChooserDesktop::WebUsbChooserDesktop() = default;

WebUsbChooserDesktop::~WebUsbChooserDesktop() = default;

void WebUsbChooserDesktop::ShowChooser(
    content::RenderFrameHost* render_frame_host,
    std::unique_ptr<UsbChooserController> controller) {
  closure_runner_.ReplaceClosure(chrome::ShowDeviceChooserDialog(
      render_frame_host, std::move(controller)));
}
