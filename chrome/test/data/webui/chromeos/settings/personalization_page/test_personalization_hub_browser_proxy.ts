// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test browser proxy for the personalization hub
// summary: Mock browser proxy for WebUI tests that records calls to openPersonalizationHub so the personalization page tests can assert hub invocations.
// ---

import type {PersonalizationHubBrowserProxy} from 'chrome://os-settings/os_settings.js';
import {TestBrowserProxy} from 'chrome://webui-test/test_browser_proxy.js';

export class TestPersonalizationHubBrowserProxy extends TestBrowserProxy
    implements PersonalizationHubBrowserProxy {
  constructor() {
    super(['openPersonalizationHub']);
  }

  openPersonalizationHub(): void {
    this.methodCalled('openPersonalizationHub');
  }
}
