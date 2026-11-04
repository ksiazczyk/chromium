// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: USB status icon implementation
// summary: Implements UsbStatusIcon, a system tray icon that reports USB device connections and links to USB settings.
// ---

#include "chrome/browser/usb/usb_status_icon.h"

#include "chrome/browser/device_notifications/device_status_icon_renderer.h"
#include "chrome/browser/ui/chrome_pages.h"
#include "chrome/grit/generated_resources.h"

UsbStatusIcon::UsbStatusIcon()
    : UsbSystemTrayIcon(std::make_unique<DeviceStatusIconRenderer>(
          this,
          chrome::HelpSource::kWebUSD,
          IDS_WEBUSB_SYSTEM_TRAY_ICON_ABOUT_USB_DEVICE)) {}

UsbStatusIcon::~UsbStatusIcon() = default;
