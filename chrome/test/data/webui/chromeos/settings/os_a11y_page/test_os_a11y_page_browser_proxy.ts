// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: OS accessibility page browser proxy test double
// summary: Test double for the OS accessibility page browser proxy that records image label confirmation and screen reader state calls.
// ---

import type {OsA11yPageBrowserProxy} from 'chrome://os-settings/os_settings.js';
import {TestBrowserProxy} from 'chrome://webui-test/test_browser_proxy.js';

export class TestOsA11yPageBrowserProxy extends TestBrowserProxy implements
    OsA11yPageBrowserProxy {
  constructor() {
    super([
      'confirmA11yImageLabels',
      'getScreenReaderState',
    ]);
  }

  confirmA11yImageLabels() {
    this.methodCalled('confirmA11yImageLabels');
  }

  getScreenReaderState() {
    this.methodCalled('getScreenReaderState');
    return Promise.resolve(false);
  }
}
