// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Multi-source picker sheet view implementation
// summary: Implements the WebAuthn request dialog sheet that builds the multi-source picker content for choosing between multiple accounts and mechanisms.
// ---

#include "chrome/browser/ui/views/webauthn/authenticator_multi_source_picker_sheet_view.h"

#include <memory>
#include <utility>

#include "chrome/browser/ui/views/webauthn/authenticator_multi_source_picker_view.h"
#include "chrome/browser/ui/views/webauthn/authenticator_request_sheet_view.h"
#include "chrome/browser/ui/webauthn/sheet_models.h"
#include "ui/base/metadata/metadata_impl_macros.h"
#include "ui/views/view.h"

AuthenticatorMultiSourcePickerSheetView::
    AuthenticatorMultiSourcePickerSheetView(
        std::unique_ptr<AuthenticatorMultiSourcePickerSheetModel> model)
    : AuthenticatorRequestSheetView(std::move(model)) {}

AuthenticatorMultiSourcePickerSheetView::
    ~AuthenticatorMultiSourcePickerSheetView() = default;

std::pair<std::unique_ptr<views::View>,
          AuthenticatorRequestSheetView::AutoFocus>
AuthenticatorMultiSourcePickerSheetView::BuildStepSpecificContent() {
  return std::make_pair(
      std::make_unique<AuthenticatorMultiSourcePickerView>(
          static_cast<AuthenticatorMultiSourcePickerSheetModel*>(model())),
      AutoFocus::kYes);
}

BEGIN_METADATA(AuthenticatorMultiSourcePickerSheetView)
END_METADATA
