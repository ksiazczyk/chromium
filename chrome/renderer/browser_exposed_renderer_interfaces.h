// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Browser exposed renderer interfaces
// summary: Declares the function that exposes Chrome-specific renderer Mojo interfaces to the browser process via a BinderMap.
// ---

#ifndef CHROME_RENDERER_BROWSER_EXPOSED_RENDERER_INTERFACES_H_
#define CHROME_RENDERER_BROWSER_EXPOSED_RENDERER_INTERFACES_H_

namespace mojo {
class BinderMap;
}  // namespace mojo

class ChromeContentRendererClient;

void ExposeChromeRendererInterfacesToBrowser(
    ChromeContentRendererClient* client,
    mojo::BinderMap* binders);

#endif  // CHROME_RENDERER_BROWSER_EXPOSED_RENDERER_INTERFACES_H_
