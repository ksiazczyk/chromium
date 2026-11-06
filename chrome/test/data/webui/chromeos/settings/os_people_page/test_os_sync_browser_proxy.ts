// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test OS sync browser proxy mock
// summary: Test double implementing OsSyncBrowserProxy that records calls to OS sync page navigation and sync preference methods for WebUI tests.
// ---

import type {OsSyncBrowserProxy, OsSyncPrefs} from 'chrome://os-settings/lazy_load.js';
import {TestBrowserProxy} from 'chrome://webui-test/test_browser_proxy.js';

export class TestOsSyncBrowserProxy extends TestBrowserProxy implements
    OsSyncBrowserProxy {
  constructor() {
    super([
      'didNavigateToOsSyncPage',
      'didNavigateAwayFromOsSyncPage',
      'setOsSyncDatatypes',
      'sendOsSyncPrefsChanged',
    ]);
  }

  didNavigateToOsSyncPage(): void {
    this.methodCalled('didNavigateToOsSyncPage');
  }

  didNavigateAwayFromOsSyncPage(): void {
    this.methodCalled('didNavigateAwayFromSyncPage');
  }

  setOsSyncDatatypes(osSyncPrefs: OsSyncPrefs): void {
    this.methodCalled('setOsSyncDatatypes', osSyncPrefs);
  }

  sendOsSyncPrefsChanged(): void {
    this.methodCalled('sendOsSyncPrefsChanged');
  }
}
