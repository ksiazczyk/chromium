// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Chrome browser interface binders header
// summary: Declares PopulateChromeFrameBinders, which registers BrowserInterfaceBroker handlers for Chrome-specific document-scoped interfaces.
// ---

#ifndef CHROME_BROWSER_CHROME_BROWSER_INTERFACE_BINDERS_H_
#define CHROME_BROWSER_CHROME_BROWSER_INTERFACE_BINDERS_H_

namespace content {
class RenderFrameHost;
}  // namespace content

namespace mojo {
template <typename>
class BinderMapWithContext;
}  // namespace mojo

namespace chrome {
namespace internal {

// PopulateChromeFrameBinders() registers BrowserInterfaceBroker's
// GetInterface() handler callbacks for chrome-specific document-scoped
// interfaces.
void PopulateChromeFrameBinders(
    mojo::BinderMapWithContext<content::RenderFrameHost*>* map,
    content::RenderFrameHost* render_frame_host);

}  // namespace internal
}  // namespace chrome

#endif  // CHROME_BROWSER_CHROME_BROWSER_INTERFACE_BINDERS_H_
