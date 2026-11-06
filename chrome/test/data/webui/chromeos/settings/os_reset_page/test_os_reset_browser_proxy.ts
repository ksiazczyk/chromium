// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test fake for the OS reset browser proxy
// summary: Test double implementing OsResetBrowserProxy that records calls such as requestFactoryResetRestart and performSanitizeSettings for use in reset page tests.
// ---

import type {OsResetBrowserProxy} from 'chrome://os-settings/os_settings.js';
import {TestBrowserProxy} from 'chrome://webui-test/test_browser_proxy.js';

export class TestOsResetBrowserProxy extends TestBrowserProxy implements
    OsResetBrowserProxy {
  constructor() {
    super([
      'requestFactoryResetRestart',
      'onShowSanitizeDialog',
      'performSanitizeSettings',
    ]);
  }

  requestFactoryResetRestart(): void {
    this.methodCalled('requestFactoryResetRestart');
  }

  onShowSanitizeDialog(): void {
    this.methodCalled('onShowSanitizeDialog');
  }

  performSanitizeSettings(): void {
    this.methodCalled('performSanitizeSettings');
  }
}
