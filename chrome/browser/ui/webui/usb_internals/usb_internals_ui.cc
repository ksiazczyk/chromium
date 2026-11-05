// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: USB internals WebUI controller implementation
// summary: Implements the WebUI controller that creates and configures the data source for the USB internals page and binds its page handler.
// ---

#include "chrome/browser/ui/webui/usb_internals/usb_internals_ui.h"

#include "base/functional/bind.h"
#include "chrome/browser/profiles/profile.h"
#include "chrome/browser/ui/webui/usb_internals/usb_internals_page_handler.h"
#include "chrome/common/url_constants.h"
#include "chrome/grit/usb_internals_resources.h"
#include "chrome/grit/usb_internals_resources_map.h"
#include "content/public/browser/web_ui_data_source.h"
#include "ui/webui/webui_util.h"

UsbInternalsUI::UsbInternalsUI(content::WebUI* web_ui)
    : ui::MojoWebUIController(web_ui) {
  // Set up the chrome://usb-internals source.
  content::WebUIDataSource* source = content::WebUIDataSource::CreateAndAdd(
      Profile::FromWebUI(web_ui), chrome::kChromeUIUsbInternalsHost);

  webui::SetupWebUIDataSource(source, kUsbInternalsResources,
                              IDR_USB_INTERNALS_USB_INTERNALS_HTML);
}

WEB_UI_CONTROLLER_TYPE_IMPL(UsbInternalsUI)

UsbInternalsUI::~UsbInternalsUI() = default;

void UsbInternalsUI::BindInterface(
    mojo::PendingReceiver<mojom::UsbInternalsPageHandler> receiver) {
  page_handler_ =
      std::make_unique<UsbInternalsPageHandler>(std::move(receiver));
}
