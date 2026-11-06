// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test language settings metrics proxy for settings
// summary: Fake LanguageSettingsMetricsProxy that records settings action and page impression metric calls for language settings tests.
// ---

// clang-format off
import type {LanguageSettingsMetricsProxy, LanguageSettingsActionType, LanguageSettingsPageImpressionType} from 'chrome://settings/lazy_load.js';
import {TestBrowserProxy} from 'chrome://webui-test/test_browser_proxy.js';

// clang-format on

export class TestLanguageSettingsMetricsProxy extends TestBrowserProxy
    implements LanguageSettingsMetricsProxy {
  constructor() {
    super(['recordSettingsMetric', 'recordPageImpressionMetric']);
  }

  recordSettingsMetric(interaction: LanguageSettingsActionType) {
    this.methodCalled('recordSettingsMetric', interaction);
  }

  recordPageImpressionMetric(interaction: LanguageSettingsPageImpressionType) {
    this.methodCalled('recordPageImpressionMetric', interaction);
  }
}
