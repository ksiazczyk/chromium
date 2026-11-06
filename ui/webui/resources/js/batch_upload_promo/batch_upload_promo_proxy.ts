// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: TypeScript proxy singleton for the batch upload promo
// summary: Implements BatchUploadPromoProxyImpl, a lazily created singleton that wires the Mojo callback router and handler remote to the browser-side handler factory for the WebUI page.
// ---

import {PageCallbackRouter, PageHandlerFactory, PageHandlerRemote} from '../batch_upload_promo.mojom-webui.js';
import type {PageHandlerInterface} from '../batch_upload_promo.mojom-webui.js';

export interface BatchUploadPromoProxy {
  callbackRouter: PageCallbackRouter;
  handler: PageHandlerInterface;
}

export class BatchUploadPromoProxyImpl implements BatchUploadPromoProxy {
  callbackRouter: PageCallbackRouter;
  handler: PageHandlerInterface;

  private constructor() {
    this.callbackRouter = new PageCallbackRouter();
    this.handler = new PageHandlerRemote();
    PageHandlerFactory.getRemote().createBatchUploadPromoHandler(
        this.callbackRouter.$.bindNewPipeAndPassRemote(),
        (this.handler as PageHandlerRemote).$.bindNewPipeAndPassReceiver());
  }

  static setInstance(obj: BatchUploadPromoProxy) {
    instance = obj;
  }

  static getInstance(): BatchUploadPromoProxy {
    return instance || (instance = new BatchUploadPromoProxyImpl());
  }
}

let instance: BatchUploadPromoProxy|null = null;
