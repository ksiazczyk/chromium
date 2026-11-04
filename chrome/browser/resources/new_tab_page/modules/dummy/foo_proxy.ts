// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: FooProxy Mojo handler proxy
// summary: Exposes a FooProxy class that provides the Mojo handler interface for sending requests from the dummy NTP module to the browser.
// ---

import type {FooHandlerRemote} from '../../foo.mojom-webui.js';
import {FooHandler} from '../../foo.mojom-webui.js';

/**
 * @fileoverview This file provides a class that exposes the Mojo handler
 * interface used for sending requests from NTP dummy module JS to the browser
 * and receiving the browser response.
 */

let handler: FooHandlerRemote|null = null;

export class FooProxy {
  static getHandler(): FooHandlerRemote {
    return handler || (handler = FooHandler.getRemote());
  }

  static setHandler(newHandler: FooHandlerRemote) {
    handler = newHandler;
  }

  private constructor() {}
}
