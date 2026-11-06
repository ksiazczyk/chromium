// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Browser agent attachment utility header
// summary: Declares AttachBrowserAgents, which attaches browser agents to a Browser, skipping agents that are unused for inactive or off-the-record browsers.
// ---

#ifndef IOS_CHROME_BROWSER_MAIN_MODEL_BROWSER_AGENT_UTIL_H_
#define IOS_CHROME_BROWSER_MAIN_MODEL_BROWSER_AGENT_UTIL_H_

class Browser;

// Attaches browser agents to `browser`. If the Browser is inactive, or off the
// record, some of the browser agents won't be attached because they are unused.
void AttachBrowserAgents(Browser* browser);

#endif  // IOS_CHROME_BROWSER_MAIN_MODEL_BROWSER_AGENT_UTIL_H_
