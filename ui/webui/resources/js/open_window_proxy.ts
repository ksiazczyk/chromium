// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/**
 * @fileoverview A helper object used to open a URL in a new tab.
 * the browser.
 */

// ---docerion
// type: source
// title: OpenWindowProxy for opening URLs in new tabs
// summary: Proxy interface and singleton implementation that opens URLs in a new tab via window.open, designed so the instance can be swapped out in tests.
// ---

export interface OpenWindowProxy {
  /**
   * Opens the specified URL in a new tab.
   */
  openUrl(url: string): void;
}

export class OpenWindowProxyImpl implements OpenWindowProxy {
  openUrl(url: string) {
    window.open(url);
  }

  static getInstance(): OpenWindowProxy {
    return instance || (instance = new OpenWindowProxyImpl());
  }

  static setInstance(obj: OpenWindowProxy) {
    instance = obj;
  }
}

let instance: OpenWindowProxy|null = null;
