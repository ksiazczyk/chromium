// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Shopping service browser proxy
// summary: TypeScript singleton proxy that creates a ShoppingServiceHandler remote via the Mojo factory and exposes it to WebUI code.
// ---

import type {ShoppingServiceHandlerInterface} from './shopping_service.mojom-webui.js';
import {ShoppingServiceHandlerFactory, ShoppingServiceHandlerRemote} from './shopping_service.mojom-webui.js';

let instance: ShoppingServiceBrowserProxy|null = null;

export interface ShoppingServiceBrowserProxy {
  handler: ShoppingServiceHandlerInterface;
}

export class ShoppingServiceBrowserProxyImpl implements
    ShoppingServiceBrowserProxy {
  handler: ShoppingServiceHandlerRemote;

  constructor() {
    this.handler = new ShoppingServiceHandlerRemote();

    const factory = ShoppingServiceHandlerFactory.getRemote();
    factory.createShoppingServiceHandler(
        this.handler.$.bindNewPipeAndPassReceiver());
  }

  static getInstance(): ShoppingServiceBrowserProxy {
    return instance || (instance = new ShoppingServiceBrowserProxyImpl());
  }

  static setInstance(obj: ShoppingServiceBrowserProxy) {
    instance = obj;
  }
}
