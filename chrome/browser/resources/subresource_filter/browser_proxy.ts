// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Browser proxy for subresource filter internals mojo interfaces
// summary: Singleton proxy that exposes the internals page handler remote and observer callback router to the UI.
// ---

import type {SubresourceFilterInternalsHandlerInterface} from './subresource_filter_internals.mojom-webui.js';
import {SubresourceFilterInternalsHandler, SubresourceFilterInternalsObserverCallbackRouter} from './subresource_filter_internals.mojom-webui.js';

export class BrowserProxy {
  handler: SubresourceFilterInternalsHandlerInterface;
  callbackRouter: SubresourceFilterInternalsObserverCallbackRouter;

  private constructor() {
    this.handler = SubresourceFilterInternalsHandler.getRemote();
    this.callbackRouter =
        new SubresourceFilterInternalsObserverCallbackRouter();
  }

  static getInstance(): BrowserProxy {
    return instance || (instance = new BrowserProxy());
  }

  static setInstance(obj: BrowserProxy) {
    instance = obj;
  }
}

let instance: BrowserProxy|null = null;
