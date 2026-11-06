// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Modal dialog manager delegate default implementations
// summary: Provides default implementations of the modal dialog manager delegate methods, returning no dialog host and reporting the web contents as visible.
// ---

#include "components/web_modal/web_contents_modal_dialog_manager_delegate.h"

#include <string.h>

#include "content/public/browser/web_contents.h"

namespace web_modal {

void WebContentsModalDialogManagerDelegate::SetWebContentsBlocked(
    content::WebContents* web_contents, bool blocked) {
}

WebContentsModalDialogHost*
WebContentsModalDialogManagerDelegate::GetWebContentsModalDialogHost(
    content::WebContents* web_contents) {
  return nullptr;
}

bool WebContentsModalDialogManagerDelegate::IsWebContentsVisible(
    content::WebContents* web_contents) {
  return true;
}

WebContentsModalDialogManagerDelegate::~WebContentsModalDialogManagerDelegate(
) {}

}  // namespace web_modal
