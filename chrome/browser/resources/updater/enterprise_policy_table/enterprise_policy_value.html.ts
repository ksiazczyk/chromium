// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Enterprise policy value HTML template
// summary: Lit HTML template that renders the formatted value of the enterprise-policy-value element.
// ---

import {html} from '//resources/lit/v3_0/lit.rollup.js';

import type {EnterprisePolicyValueElement} from './enterprise_policy_value.js';

export function getHtml(this: EnterprisePolicyValueElement) {
  return html`${this.formattedValue}`;
}
