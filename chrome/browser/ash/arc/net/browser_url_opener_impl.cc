// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Browser URL opener implementation
// summary: Implements OpenUrl by opening the given URL in a new foreground Chrome tab through the Ash new window delegate.
// ---

#include "chrome/browser/ash/arc/net/browser_url_opener_impl.h"

#include "ash/public/cpp/new_window_delegate.h"

namespace arc {

void BrowserUrlOpenerImpl::OpenUrl(GURL url) {
  ash::NewWindowDelegate::GetInstance()->OpenUrl(
      url, ash::NewWindowDelegate::OpenUrlFrom::kUserInteraction,
      ash::NewWindowDelegate::Disposition::kNewForegroundTab);
}

}  // namespace arc
