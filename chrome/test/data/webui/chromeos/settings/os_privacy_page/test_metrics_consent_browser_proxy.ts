// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test metrics consent browser proxy
// summary: Test double implementing the metrics consent browser proxy, stubbing consent state queries and updates for OS settings privacy tests.
// ---

import type {MetricsConsentBrowserProxy, MetricsConsentState} from 'chrome://os-settings/os_settings.js';
import {TestBrowserProxy} from 'chrome://webui-test/test_browser_proxy.js';

export const DEVICE_METRICS_CONSENT_PREF_NAME = 'cros.metrics.reportingEnabled';

export class TestMetricsConsentBrowserProxy extends TestBrowserProxy implements
    MetricsConsentBrowserProxy {
  private state_: MetricsConsentState;
  constructor() {
    super([
      'getMetricsConsentState',
      'updateMetricsConsent',
    ]);

    this.state_ = {
      prefName: DEVICE_METRICS_CONSENT_PREF_NAME,
      isConfigurable: false,
    };
  }

  getMetricsConsentState(): Promise<MetricsConsentState> {
    this.methodCalled('getMetricsConsentState');
    return Promise.resolve(this.state_);
  }

  updateMetricsConsent(consent: boolean): Promise<boolean> {
    this.methodCalled('updateMetricsConsent');
    return Promise.resolve(consent);
  }

  setMetricsConsentState(prefName: string, isConfigurable: boolean): void {
    this.state_.prefName = prefName;
    this.state_.isConfigurable = isConfigurable;
  }
}
