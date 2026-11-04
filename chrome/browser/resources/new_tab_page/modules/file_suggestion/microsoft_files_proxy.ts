// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Microsoft files proxy
// summary: Singleton proxy exposing the Microsoft files Mojo page handler for the new tab page Microsoft files module.
// ---

import type {MicrosoftFilesPageHandlerRemote} from '../../microsoft_files.mojom-webui.js';
import {MicrosoftFilesPageHandler} from '../../microsoft_files.mojom-webui.js';

export interface MicrosoftFilesProxy {
  handler: MicrosoftFilesPageHandlerRemote;
}

export class MicrosoftFilesProxyImpl implements MicrosoftFilesProxy {
  handler: MicrosoftFilesPageHandlerRemote;

  constructor(handler: MicrosoftFilesPageHandlerRemote) {
    this.handler = handler;
  }

  static getInstance(): MicrosoftFilesProxy {
    return instance ||
        (instance = new MicrosoftFilesProxyImpl(
             MicrosoftFilesPageHandler.getRemote()));
  }

  static setInstance(newInstance: MicrosoftFilesProxy) {
    instance = newInstance;
  }
}

let instance: MicrosoftFilesProxy|null = null;
