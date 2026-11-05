// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Chrome web modal dialog manager delegate
// summary: Declares a Chrome delegate for the web modal dialog manager that reports whether a WebContents is visible.
// ---

#ifndef CHROME_BROWSER_UI_CHROME_WEB_MODAL_DIALOG_MANAGER_DELEGATE_H_
#define CHROME_BROWSER_UI_CHROME_WEB_MODAL_DIALOG_MANAGER_DELEGATE_H_

#include "components/web_modal/web_contents_modal_dialog_manager_delegate.h"

class ChromeWebModalDialogManagerDelegate
    : public web_modal::WebContentsModalDialogManagerDelegate {
 public:
  ChromeWebModalDialogManagerDelegate();

  ChromeWebModalDialogManagerDelegate(
      const ChromeWebModalDialogManagerDelegate&) = delete;
  ChromeWebModalDialogManagerDelegate& operator=(
      const ChromeWebModalDialogManagerDelegate&) = delete;

  ~ChromeWebModalDialogManagerDelegate() override;

 protected:
  // Overridden from web_modal::WebContentsModalDialogManagerDelegate:
  bool IsWebContentsVisible(content::WebContents* web_contents) override;
};

#endif  // CHROME_BROWSER_UI_CHROME_WEB_MODAL_DIALOG_MANAGER_DELEGATE_H_
