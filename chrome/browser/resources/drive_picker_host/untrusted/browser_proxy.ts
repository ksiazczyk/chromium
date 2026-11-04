// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Browser proxy for the Drive Picker host untrusted page
// summary: Supplies a singleton Mojo browser proxy connecting the untrusted page to its browser-side page handler and callback router.
// ---

import {PageCallbackRouter, PageHandlerFactory, PageHandlerRemote} from './drive_picker_host_untrusted.mojom-webui.js';

export interface BrowserProxy {
  handler: PageHandlerRemote;
  callbackRouter: PageCallbackRouter;
}

export class BrowserProxyImpl implements BrowserProxy {
  handler: PageHandlerRemote;
  callbackRouter: PageCallbackRouter;

  constructor() {
    this.callbackRouter = new PageCallbackRouter();
    this.handler = new PageHandlerRemote();

    const factory = PageHandlerFactory.getRemote();
    factory.createPageHandler(
        this.callbackRouter.$.bindNewPipeAndPassRemote(),
        this.handler.$.bindNewPipeAndPassReceiver());
  }

  static getInstance(): BrowserProxy {
    return instance || (instance = new BrowserProxyImpl());
  }

  static setInstance(obj: BrowserProxy) {
    instance = obj;
  }
}

let instance: BrowserProxy|null = null;
