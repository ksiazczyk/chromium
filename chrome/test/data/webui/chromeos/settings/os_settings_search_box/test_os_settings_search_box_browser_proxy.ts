// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test browser proxy for the OS settings search box
// summary: Test double that records openSearchFeedbackDialog calls made through the search box browser proxy during tests.
// ---

import type {OsSettingsSearchBoxBrowserProxy} from 'chrome://os-settings/os_settings.js';
import {TestBrowserProxy} from 'chrome://webui-test/test_browser_proxy.js';

export class TestOsSettingsSearchBoxBrowserProxy extends TestBrowserProxy
    implements OsSettingsSearchBoxBrowserProxy {
  constructor() {
    super([
      'openSearchFeedbackDialog',
    ]);
  }

  openSearchFeedbackDialog(descriptionTemplate: string): void {
    this.methodCalled('openSearchFeedbackDialog', descriptionTemplate);
  }
}
