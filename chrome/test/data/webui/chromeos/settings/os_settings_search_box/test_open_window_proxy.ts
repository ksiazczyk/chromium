// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test open window proxy for search box tests
// summary: Test double that records openUrl calls made through the OpenWindowProxy during search box tests.
// ---

import type {OpenWindowProxy} from 'chrome://os-settings/os_settings.js';
import {TestBrowserProxy} from 'chrome://webui-test/test_browser_proxy.js';

export class TestOpenWindowProxy extends TestBrowserProxy implements
    OpenWindowProxy {
  constructor() {
    super([
      'openUrl',
    ]);
  }

  openUrl(url: string): void {
    this.methodCalled('openUrl', url);
  }
}
