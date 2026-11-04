// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Chrome browser WebUI interface binders header
// summary: Declares functions that populate Chrome WebUI frame binders and trusted or untrusted WebUI interface broker registries.
// ---

#ifndef CHROME_BROWSER_CHROME_BROWSER_INTERFACE_BINDERS_WEBUI_H_
#define CHROME_BROWSER_CHROME_BROWSER_INTERFACE_BINDERS_WEBUI_H_

namespace content {
class RenderFrameHost;
class WebUIBrowserInterfaceBrokerRegistry;
}  // namespace content

namespace mojo {
template <typename>
class BinderMapWithContext;
}  // namespace mojo

namespace chrome::internal {

// PopulateChromeWebUIFrameBinders() registers BrowserInterfaceBroker's
// GetInterface() handler callbacks for chrome-specific document-scoped
// interfaces used from WebUI pages (e.g. chrome://bluetooth-internals).
void PopulateChromeWebUIFrameBinders(
    mojo::BinderMapWithContext<content::RenderFrameHost*>* map,
    content::RenderFrameHost* render_frame_host);

// PopulateTrustedChromeWebUIFrameInterfaceBrokers() registers
// BrowserInterfaceBrokers for each trusted WebUI, these brokers are used to
// handle that WebUI's JavaScript Mojo.bindInterface calls.
void PopulateTrustedChromeWebUIFrameInterfaceBrokers(
    content::WebUIBrowserInterfaceBrokerRegistry& registry);

// PopulateUntrustedChromeWebUIFrameInterfaceBrokers() registers
// BrowserInterfaceBrokers for each untrusted WebUI, these brokers are used to
// handle that WebUI's JavaScript Mojo.bindInterface calls.
void PopulateUntrustedChromeWebUIFrameInterfaceBrokers(
    content::WebUIBrowserInterfaceBrokerRegistry& registry);

} // namespace chrome::internal


#endif  // CHROME_BROWSER_CHROME_BROWSER_INTERFACE_BINDERS_WEBUI_H_
