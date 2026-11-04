// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Customize toolbar API proxy
// summary: Singleton proxy that creates and exposes the Mojo handler and callback router used by the customize toolbar side panel UI.
// ---

import type {CustomizeToolbarHandlerInterface} from '../customize_toolbar.mojom-webui.js';
import {CustomizeToolbarClientCallbackRouter, CustomizeToolbarHandlerFactory, CustomizeToolbarHandlerRemote} from '../customize_toolbar.mojom-webui.js';

let instance: CustomizeToolbarApiProxy|null = null;

export class CustomizeToolbarApiProxy {
  static getInstance(): CustomizeToolbarApiProxy {
    if (!instance) {
      const handler = new CustomizeToolbarHandlerRemote();
      const callbackRouter = new CustomizeToolbarClientCallbackRouter();
      CustomizeToolbarHandlerFactory.getRemote().createCustomizeToolbarHandler(
          callbackRouter.$.bindNewPipeAndPassRemote(),
          handler.$.bindNewPipeAndPassReceiver());
      instance = new CustomizeToolbarApiProxy(handler, callbackRouter);
    }
    return instance;
  }

  static setInstance(
      handler: CustomizeToolbarHandlerInterface,
      callbackRouter: CustomizeToolbarClientCallbackRouter) {
    instance = new CustomizeToolbarApiProxy(handler, callbackRouter);
  }

  handler: CustomizeToolbarHandlerInterface;
  callbackRouter: CustomizeToolbarClientCallbackRouter;

  private constructor(
      handler: CustomizeToolbarHandlerInterface,
      callbackRouter: CustomizeToolbarClientCallbackRouter) {
    this.handler = handler;
    this.callbackRouter = callbackRouter;
  }
}
