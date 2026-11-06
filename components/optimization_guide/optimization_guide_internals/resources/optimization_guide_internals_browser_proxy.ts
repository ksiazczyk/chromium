// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Browser proxy for Optimization Guide Internals
// summary: Singleton browser proxy that creates the Mojo page handler and exposes the callback router for the internals page.
// ---

import {PageCallbackRouter, PageHandlerFactory} from './optimization_guide_internals.mojom-webui.js';

export class OptimizationGuideInternalsBrowserProxy {
  private callbackRouter: PageCallbackRouter;

  constructor() {
    this.callbackRouter = new PageCallbackRouter();
    const factory = PageHandlerFactory.getRemote();
    factory.createPageHandler(this.callbackRouter.$.bindNewPipeAndPassRemote());
  }

  static getInstance(): OptimizationGuideInternalsBrowserProxy {
    return instance ||
        (instance = new OptimizationGuideInternalsBrowserProxy());
  }

  getCallbackRouter(): PageCallbackRouter {
    return this.callbackRouter;
  }
}

let instance: OptimizationGuideInternalsBrowserProxy|null = null;
