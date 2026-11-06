// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: HTML template for the Commerce Internals app
// summary: Lit HTML template rendering the page headings, eligibility list, subscription list, and utility links such as the product URL viewer.
// ---

import {html} from '//resources/lit/v3_0/lit.rollup.js';

import type {CommerceInternalsAppElement} from './app.js';

export function getHtml(this: CommerceInternalsAppElement) {
  return html`
  <h1>Commerce Internals</h1>
  <h2>Shopping feature eligibility</h2>
  <commerce-internals-eligibility-list></commerce-internals-eligibility-list>
  <h2>Subscriptions</h2>
  <subscription-list></subscription-list>
  <h2>Utilities</h2>
  <div class="utils">
    <a href="view_product.html">Product URL Viewer</a>
    <button @click="${this.onResetPriceTrackingEmailPreferenceClick_}">
      Reset price tracking email preference
    </button>
  </div>`;
}
