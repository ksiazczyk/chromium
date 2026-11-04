// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: AI policy indicator HTML template
// summary: Lit HTML template that renders a managed-disabled notice with a policy indicator when an AI feature is disabled by policy.
// ---

import {html} from 'chrome://resources/lit/v3_0/lit.rollup.js';

import type {SettingsAiPolicyIndicatorElement} from './ai_policy_indicator.js';

export function getHtml(this: SettingsAiPolicyIndicatorElement) {
  return html`<!--_html_template_start_-->
${this.isFeatureDisabledByPolicy_() ? html`
  <div class="cr-row first" id="aiPolicyIndicator">
    <cr-policy-pref-indicator .pref="${this.pref}"></cr-policy-pref-indicator>
    $i18n{aiSubpageFeatureManagedDisabledLabel}
  </div>
` : ''}
<!--_html_template_end_-->`;
}
