// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: InfoBar internals WebUI controller implementation
// summary: Implements the infobar-internals WebUI controller, creating its data source and binding the Mojo page handler factory to the handler.
// ---

#include "chrome/browser/ui/webui/infobar_internals/infobar_internals_ui.h"

#include <memory>

#include "chrome/browser/ui/webui/infobar_internals/infobar_internals_handler.h"
#include "chrome/grit/infobar_internals_resources.h"
#include "chrome/grit/infobar_internals_resources_map.h"
#include "content/public/browser/browser_context.h"
#include "content/public/browser/web_contents.h"
#include "content/public/browser/web_ui.h"
#include "content/public/browser/web_ui_data_source.h"
#include "ui/webui/webui_util.h"

InfoBarInternalsUI::InfoBarInternalsUI(content::WebUI* web_ui)
    : ui::MojoWebUIController(web_ui, true) {
  content::WebUIDataSource* source = content::WebUIDataSource::CreateAndAdd(
      web_ui->GetWebContents()->GetBrowserContext(),
      chrome::kChromeUIInfobarInternalsHost);

  webui::SetupWebUIDataSource(source, kInfobarInternalsResources,
                              IDR_INFOBAR_INTERNALS_INFOBAR_INTERNALS_HTML);
}

WEB_UI_CONTROLLER_TYPE_IMPL(InfoBarInternalsUI)

InfoBarInternalsUI::~InfoBarInternalsUI() = default;

void InfoBarInternalsUI::BindInterface(
    mojo::PendingReceiver<infobar_internals::mojom::PageHandlerFactory>
        receiver) {
  page_factory_receiver_.reset();
  page_factory_receiver_.Bind(std::move(receiver));
}

void InfoBarInternalsUI::CreatePageHandler(
    mojo::PendingRemote<infobar_internals::mojom::Page> page,
    mojo::PendingReceiver<infobar_internals::mojom::PageHandler> receiver) {
  page_handler_ =
      std::make_unique<InfoBarInternalsHandler>(std::move(receiver));
}
