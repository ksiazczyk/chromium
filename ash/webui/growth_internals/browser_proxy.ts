// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Browser proxy for the growth internals page
// summary: Singleton that gives the WebUI access to a Mojo PageHandler remote for growth internals requests.
// ---

import type {PageHandlerInterface} from './growth_internals.mojom-webui.js';
import {PageHandler} from './growth_internals.mojom-webui.js';

export class BrowserProxy {
  handler: PageHandlerInterface|null = null;

  constructor() {
    this.handler = PageHandler.getRemote();
  }

  static getInstance(): BrowserProxy {
    return instance || (instance = new BrowserProxy());
  }
}

let instance: BrowserProxy|null = null;
