// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Infobar overlay browser agent utility header
// summary: Declares AttachInfobarOverlayBrowserAgent, a helper that attaches the browser agents managing model changes for infobar UI to a browser.
// ---

#ifndef IOS_CHROME_BROWSER_INFOBARS_MODEL_OVERLAYS_BROWSER_AGENT_INFOBAR_OVERLAY_BROWSER_AGENT_UTIL_H_
#define IOS_CHROME_BROWSER_INFOBARS_MODEL_OVERLAYS_BROWSER_AGENT_INFOBAR_OVERLAY_BROWSER_AGENT_UTIL_H_

class Browser;

// Attaches browser agents to `browser` that manage the model changes for
// infobar UI presented via OverlayPresenter.
void AttachInfobarOverlayBrowserAgent(Browser* browser);

#endif  // IOS_CHROME_BROWSER_INFOBARS_MODEL_OVERLAYS_BROWSER_AGENT_INFOBAR_OVERLAY_BROWSER_AGENT_UTIL_H_
