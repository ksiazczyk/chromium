// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Fjord image download screen WebUI handler
// summary: Implements the WebUI handler for the Fjord image download screen, declaring its localized title.
// ---

#include "chrome/browser/ui/webui/ash/login/fjord_image_download_screen_handler.h"

#include "ash/login/resources/grit/ash_login_strings.h"

namespace ash {

FjordImageDownloadScreenHandler::FjordImageDownloadScreenHandler()
    : BaseScreenHandler(kScreenId) {}

FjordImageDownloadScreenHandler::~FjordImageDownloadScreenHandler() = default;

void FjordImageDownloadScreenHandler::DeclareLocalizedValues(
    ::login::LocalizedValuesBuilder* builder) {
  builder->Add("fjordImageDownloadTitle", IDS_FJORD_IMAGE_DOWNLOAD_TITLE);
}

void FjordImageDownloadScreenHandler::Show() {
  ShowInWebUI();
}

base::WeakPtr<FjordImageDownloadScreenView>
FjordImageDownloadScreenHandler::AsWeakPtr() {
  return weak_ptr_factory_.GetWeakPtr();
}

}  // namespace ash
