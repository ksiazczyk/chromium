// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test open window proxy
// summary: Test double of OpenWindowProxy that records openUrl calls so tests can verify window opening behavior.
// ---

import type {OpenWindowProxy} from 'chrome://resources/js/open_window_proxy.js';

import {TestBrowserProxy} from './test_browser_proxy.js';

export class TestOpenWindowProxy extends TestBrowserProxy implements
    OpenWindowProxy {
  constructor() {
    super(['openUrl']);
  }

  openUrl(url: string) {
    this.methodCalled('openUrl', url);
  }
}
