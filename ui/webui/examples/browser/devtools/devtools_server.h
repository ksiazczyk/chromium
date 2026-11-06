// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: DevTools remote debugging server function declarations
// summary: Declares functions to start and stop the DevTools remote debugging HTTP handler and to query the port it is serving on.
// ---

#ifndef UI_WEBUI_EXAMPLES_BROWSER_DEVTOOLS_DEVTOOLS_SERVER_H_
#define UI_WEBUI_EXAMPLES_BROWSER_DEVTOOLS_DEVTOOLS_SERVER_H_

namespace content {
class BrowserContext;
}  // namespace content

namespace webui_examples::devtools {

void StartHttpHandler(content::BrowserContext* browser_context);
void StopHttpHandler();
int GetHttpHandlerPort();

}  // namespace webui_examples::devtools

#endif  // UI_WEBUI_EXAMPLES_BROWSER_DEVTOOLS_DEVTOOLS_SERVER_H_
