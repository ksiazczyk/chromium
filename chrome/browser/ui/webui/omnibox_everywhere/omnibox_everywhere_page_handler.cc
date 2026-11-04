// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Omnibox Everywhere page handler implementation
// summary: Implements the Mojo PageHandler for the Omnibox Everywhere WebUI, forwarding context action menu, composebox, and screenshot events between the page and the UI controller.
// ---

#include "chrome/browser/ui/webui/omnibox_everywhere/omnibox_everywhere_page_handler.h"

#include "chrome/browser/ui/webui/omnibox_everywhere/omnibox_everywhere_ui.h"
#include "ui/gfx/geometry/rect.h"

OmniboxEverywherePageHandler::OmniboxEverywherePageHandler(
    mojo::PendingReceiver<omnibox_everywhere::mojom::PageHandler> receiver,
    mojo::PendingRemote<omnibox_everywhere::mojom::Page> page,
    OmniboxEverywhereUI* web_ui_controller)
    : receiver_(this, std::move(receiver)),
      page_(std::move(page)),
      web_ui_controller_(web_ui_controller) {}

OmniboxEverywherePageHandler::~OmniboxEverywherePageHandler() = default;

void OmniboxEverywherePageHandler::ShowContextActionMenu(
    const gfx::Rect& anchor_rect) {
  if (web_ui_controller_) {
    web_ui_controller_->ShowContextActionMenu(anchor_rect);
  }
}

void OmniboxEverywherePageHandler::SetIsComposebox(bool is_composebox) {
  if (web_ui_controller_) {
    web_ui_controller_->SetIsComposebox(is_composebox);
  }
}

void OmniboxEverywherePageHandler::OnContextMenuClosed() {
  if (page_) {
    page_->OnContextMenuClosed();
  }
}

void OmniboxEverywherePageHandler::OpenComposebox(
    omnibox_everywhere::mojom::ComposeboxInitialStatePtr initial_state) {
  if (page_) {
    page_->OpenComposebox(std::move(initial_state));
  }
}

void OmniboxEverywherePageHandler::OnScreenshotCaptureCancelled() {
  if (page_) {
    page_->OnScreenshotCaptureCancelled();
  }
}
