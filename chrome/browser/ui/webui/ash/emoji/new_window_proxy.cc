// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: New window proxy implementation
// summary: Implements the NewWindowProxy Mojo interface by opening URLs in a new foreground tab through the Ash new window delegate.
// ---

#include "chrome/browser/ui/webui/ash/emoji/new_window_proxy.h"

#include "ash/public/cpp/new_window_delegate.h"

namespace ash {

NewWindowProxy::NewWindowProxy(
    mojo::PendingReceiver<new_window_proxy::mojom::NewWindowProxy> receiver)
    : receiver_(this, std::move(receiver)) {}

NewWindowProxy::~NewWindowProxy() = default;

void NewWindowProxy::OpenUrl(const GURL& url) {
  ash::NewWindowDelegate::GetInstance()->OpenUrl(
      url, ash::NewWindowDelegate::OpenUrlFrom::kUnspecified,
      ash::NewWindowDelegate::Disposition::kNewForegroundTab);
}

}  // namespace ash
