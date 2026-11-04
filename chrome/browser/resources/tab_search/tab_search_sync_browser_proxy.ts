// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Tab search sync browser proxy
// summary: Browser proxy that queries the user's sign-in state for the tab search UI via the GetSignInState message.
// ---

import {sendWithPromise} from 'chrome://resources/js/cr.js';

export interface TabSearchSyncBrowserProxy {
  /**
   * Returns whether the user is signed in
   */
  getSignInState(): Promise<boolean>;
}

export class TabSearchSyncBrowserProxyImpl implements
    TabSearchSyncBrowserProxy {
  getSignInState() {
    return sendWithPromise<boolean>('GetSignInState');
  }

  static getInstance(): TabSearchSyncBrowserProxy {
    return instance || (instance = new TabSearchSyncBrowserProxyImpl());
  }

  static setInstance(obj: TabSearchSyncBrowserProxy) {
    instance = obj;
  }
}

let instance: TabSearchSyncBrowserProxy|null = null;
