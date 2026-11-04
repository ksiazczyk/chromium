// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Searchbox ghost loader browser proxy
// summary: Browser proxy that connects the ghost loader element to the LensGhostLoaderPage Mojo interface.
// ---

import {LensGhostLoaderPageCallbackRouter, LensGhostLoaderPageHandlerFactory} from './lens_ghost_loader.mojom-webui.js';

let instance: BrowserProxy|null = null;

export interface BrowserProxy {
  callbackRouter: LensGhostLoaderPageCallbackRouter;
}

export class BrowserProxyImpl implements BrowserProxy {
  callbackRouter: LensGhostLoaderPageCallbackRouter =
      new LensGhostLoaderPageCallbackRouter();

  constructor() {
    const factory = LensGhostLoaderPageHandlerFactory.getRemote();
    factory.createGhostLoaderPage(
        this.callbackRouter.$.bindNewPipeAndPassRemote());
  }

  static getInstance(): BrowserProxy {
    return instance || (instance = new BrowserProxyImpl());
  }

  static setInstance(obj: BrowserProxy) {
    instance = obj;
  }
}
