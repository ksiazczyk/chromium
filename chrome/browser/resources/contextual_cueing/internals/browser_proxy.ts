// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Browser proxy for the Contextual Cueing Internals page
// summary: Singleton browser proxy exposing the Mojo PageHandler that the UI uses to request shown contextual cues from the browser.
// ---

import type {PageHandlerInterface} from './contextual_cueing_internals.mojom-webui.js';
import {PageHandler} from './contextual_cueing_internals.mojom-webui.js';

export type {CueLog} from './contextual_cueing_internals.mojom-webui.js';

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
