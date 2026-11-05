// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Key press handler registration implementation
// summary: Implements registering and unregistering a key press event handler on a render frame host's render widget host.
// ---

#include "chrome/browser/ui/autofill/key_press_handler_registration.h"

#include <utility>

#include "content/public/browser/render_frame_host.h"

namespace autofill {

KeyPressHandlerRegistration::KeyPressHandlerRegistration() = default;

KeyPressHandlerRegistration::~KeyPressHandlerRegistration() {
  Unregister();
}

void KeyPressHandlerRegistration::Register(content::RenderFrameHost* rfh,
                                           KeyPressHandler handler) {
  Unregister();
  rfh_ = rfh->GetGlobalId();
  handler_ = std::move(handler);
  rfh->GetRenderWidgetHost()->AddKeyPressEventCallback(handler_);
}

void KeyPressHandlerRegistration::Unregister() {
  if (auto* rfh = content::RenderFrameHost::FromID(rfh_)) {
    rfh->GetRenderWidgetHost()->RemoveKeyPressEventCallback(handler_);
  }
  rfh_ = {};
  handler_.Reset();
}

}  // namespace autofill
