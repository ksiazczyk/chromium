// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test privacy guide browser proxy
// summary: Fake PrivacyGuideBrowserProxy that tracks and returns promo impression counts in settings tests.
// ---

import type {PrivacyGuideBrowserProxy} from 'chrome://settings/settings.js';
import {TestBrowserProxy} from 'chrome://webui-test/test_browser_proxy.js';

export class TestPrivacyGuideBrowserProxy extends TestBrowserProxy implements
    PrivacyGuideBrowserProxy {

  constructor() {
    super([
      'getPromoImpressionCount',
      'incrementPromoImpressionCount',
    ]);
  }

  // Test Proxy Functions.
  getPromoImpressionCount() {
    this.methodCalled('getPromoImpressionCount');
    return 0;
  }

  incrementPromoImpressionCount() {
    this.methodCalled('incrementPromoImpressionCount');
  }
}
