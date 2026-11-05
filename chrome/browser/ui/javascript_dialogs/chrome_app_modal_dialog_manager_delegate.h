// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Chrome app modal dialog manager delegate class declaration
// summary: Declares the Chrome-specific delegate for the app modal dialog manager that supplies dialog titles.
// ---

#ifndef CHROME_BROWSER_UI_JAVASCRIPT_DIALOGS_CHROME_APP_MODAL_DIALOG_MANAGER_DELEGATE_H_
#define CHROME_BROWSER_UI_JAVASCRIPT_DIALOGS_CHROME_APP_MODAL_DIALOG_MANAGER_DELEGATE_H_

#include <string>

#include "components/javascript_dialogs/app_modal_dialog_manager_delegate.h"

namespace content {
class WebContents;
}  // namespace content

namespace url {
class Origin;
}  // namespace url

class ChromeAppModalDialogManagerDelegate
    : public javascript_dialogs::AppModalDialogManagerDelegate {
 public:
  ~ChromeAppModalDialogManagerDelegate() override;
  std::u16string GetTitle(content::WebContents* web_contents,
                          const url::Origin& origin) override;
};

#endif  // CHROME_BROWSER_UI_JAVASCRIPT_DIALOGS_CHROME_APP_MODAL_DIALOG_MANAGER_DELEGATE_H_
