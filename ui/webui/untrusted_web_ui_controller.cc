// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: UntrustedWebUIController implementation
// summary: Implements the WebUI controller for untrusted WebUI pages, ensuring WebUI bindings are never enabled and reporting an untrusted trust policy.
// ---

#include "ui/webui/untrusted_web_ui_controller.h"

#include "content/public/browser/web_ui.h"
#include "content/public/common/bindings_policy.h"
#include "content/public/common/content_client.h"

namespace ui {

UntrustedWebUIController::UntrustedWebUIController(content::WebUI* web_ui)
    : content::WebUIController(web_ui) {
  // UntrustedWebUIController should never enable bindings.
  web_ui->SetBindings(content::BindingsPolicySet());
}

UntrustedWebUIController::~UntrustedWebUIController() = default;

content::WebUIController::TrustPolicy
UntrustedWebUIController::GetTrustPolicy() {
  return WebUIController::TrustPolicy::kUntrusted;
}

}  // namespace ui
