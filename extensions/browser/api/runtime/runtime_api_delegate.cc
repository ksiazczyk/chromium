// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Default RuntimeAPIDelegate method implementations
// summary: Provides default implementations for the runtime API delegate, including the update check result constructor and stub options page and developer tools window behavior.
// ---

#include "extensions/browser/api/runtime/runtime_api_delegate.h"

namespace extensions {

RuntimeAPIDelegate::UpdateCheckResult::UpdateCheckResult(
    const api::runtime::RequestUpdateCheckStatus& status,
    const std::string& version)
    : status(status), version(version) {}

void RuntimeAPIDelegate::OpenOptionsPage(
    const Extension* extension,
    content::BrowserContext* browser_context,
    base::OnceCallback<void(bool)> callback) {
  std::move(callback).Run(false);
}

int RuntimeAPIDelegate::GetDeveloperToolsWindowId(
    content::WebContents* developer_tools_web_contents) {
  return -1;
}

}  // namespace extensions
