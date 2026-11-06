// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Header declaring MacPreBrowserMain for the webui examples app
// summary: Declares the webui_examples::MacPreBrowserMain function used to perform macOS-specific initialization before browser startup.
// ---

#ifndef UI_WEBUI_EXAMPLES_APP_MAC_INIT_H_
#define UI_WEBUI_EXAMPLES_APP_MAC_INIT_H_

namespace webui_examples {

void MacPreBrowserMain();

}  // namespace webui_examples

#endif  // UI_WEBUI_EXAMPLES_APP_MAC_INIT_H_
