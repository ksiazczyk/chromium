// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Process sharing info bar declarations
// summary: Declares functions to register the process sharing info bar spec and to show the restart dialog for disabling process sharing.
// ---

#ifndef CHROME_BROWSER_DEVTOOLS_PROCESS_SHARING_INFOBAR_H_
#define CHROME_BROWSER_DEVTOOLS_PROCESS_SHARING_INFOBAR_H_

namespace content {
class WebContents;
}

namespace infobars {
class BrowserInfoBarManager;
}

void RegisterProcessSharingInfoBarSpec(
    infobars::BrowserInfoBarManager& browser_infobar_manager);

// Shows the dialog that offers to restart with process-per-site disabled.
void ShowProcessSharingRestartDialog(content::WebContents* web_contents);

#endif  // CHROME_BROWSER_DEVTOOLS_PROCESS_SHARING_INFOBAR_H_
