// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test user education mixed trust handler mock
// summary: Mock UserEducationMixedTrustHandler browser proxy that records feature promo and new badge calls and lets tests configure new badge responses.
// ---

import type {FeaturePromoFeatureUsedAction, FeaturePromoParams, UserEducationMixedTrustHandlerInterface} from '//resources/mojo/components/user_education/webui/user_education.mojom-webui.js';

import {TestBrowserProxy} from './test_browser_proxy.js';

export class TestUserEducationMixedTrustHandler extends TestBrowserProxy
    implements UserEducationMixedTrustHandlerInterface {
  private showNewBadgeResponses_: Map<string, boolean> = new Map();

  constructor() {
    super([
      'notifyFeaturePromoFeatureUsed',
      'notifyAdditionalConditionEvent',
      'notifyNewBadgeFeatureUsed',
      'maybeShowFeaturePromo',
      'maybeShowNewBadgeFor',
    ]);
  }

  maybeShowFeaturePromo(params: FeaturePromoParams) {
    this.methodCalled('maybeShowFeaturePromo', params);
  }

  notifyFeaturePromoFeatureUsed(
      featureName: string, action: FeaturePromoFeatureUsedAction) {
    this.methodCalled('notifyFeaturePromoFeatureUsed', {featureName, action});
  }

  notifyAdditionalConditionEvent(name: string) {
    this.methodCalled('notifyAdditionalConditionEvent', name);
  }

  notifyNewBadgeFeatureUsed(featureName: string) {
    this.methodCalled('notifyNewBadgeFeatureUsed', featureName);
  }

  setNewBadgeResponse(featureName: string, response: boolean) {
    this.showNewBadgeResponses_.set(featureName, response);
  }

  maybeShowNewBadgeFor(featureName: string): Promise<{shouldShow: boolean}> {
    this.methodCalled('maybeShowNewBadgeFor', featureName);
    return Promise.resolve(
        {shouldShow: this.showNewBadgeResponses_.get(featureName) || false});
  }
}
