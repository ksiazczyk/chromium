// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Browser proxy for the Omnibox Everywhere Mojo page
// summary: Singleton proxy that binds the WebUI to the browser-side page handler through the generated Mojo bindings.
// ---

import {PageCallbackRouter, PageHandlerFactory, PageHandlerRemote} from './omnibox_everywhere.mojom-webui.js';

export interface OmniboxEverywhereBrowserProxy {
  callbackRouter: PageCallbackRouter;
  handler: PageHandlerRemote;
}

export class OmniboxEverywhereBrowserProxyImpl implements
    OmniboxEverywhereBrowserProxy {
  callbackRouter: PageCallbackRouter = new PageCallbackRouter();
  handler: PageHandlerRemote = new PageHandlerRemote();

  constructor() {
    const factory = PageHandlerFactory.getRemote();
    factory.createPageHandler(
        this.callbackRouter.$.bindNewPipeAndPassRemote(),
        this.handler.$.bindNewPipeAndPassReceiver());
  }

  static getInstance(): OmniboxEverywhereBrowserProxy {
    return instance || (instance = new OmniboxEverywhereBrowserProxyImpl());
  }

  static setInstance(proxy: OmniboxEverywhereBrowserProxy) {
    instance = proxy;
  }
}

let instance: OmniboxEverywhereBrowserProxy|null = null;
