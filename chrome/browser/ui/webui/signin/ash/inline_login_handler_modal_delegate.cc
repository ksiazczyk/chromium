// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: InlineLoginHandlerModalDelegate implementation
// summary: Implements InlineLoginHandlerModalDelegate, which returns the modal dialog host so sub-dialogs can be shown inside the inline login dialog.
// ---

#include "chrome/browser/ui/webui/signin/ash/inline_login_handler_modal_delegate.h"

#include "content/public/browser/web_contents.h"

namespace ash {

InlineLoginHandlerModalDelegate::InlineLoginHandlerModalDelegate(
    web_modal::WebContentsModalDialogHost* host)
    : host_(host) {}

InlineLoginHandlerModalDelegate::~InlineLoginHandlerModalDelegate() = default;

web_modal::WebContentsModalDialogHost*
InlineLoginHandlerModalDelegate::GetWebContentsModalDialogHost(
    content::WebContents* web_contents) {
  return host_;
}

}  // namespace ash
