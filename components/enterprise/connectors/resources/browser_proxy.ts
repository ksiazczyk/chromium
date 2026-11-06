// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Browser proxy singleton for the connectors Mojo handler
// summary: Provides a singleton BrowserProxy that exposes the connectors internals Mojo PageHandler to the WebUI.
// ---

import type {PageHandlerInterface} from './connectors_internals.mojom-webui.js';
import {PageHandler} from './connectors_internals.mojom-webui.js';

export class BrowserProxy {
  readonly handler: PageHandlerInterface;

  constructor() {
    this.handler = PageHandler.getRemote();
  }

  static getInstance(): BrowserProxy {
    return instance || (instance = new BrowserProxy());
  }

  static setInstance(obj: BrowserProxy) {
    instance = obj;
  }
}

let instance: BrowserProxy|null = null;
