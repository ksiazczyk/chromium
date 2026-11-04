// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: HTML template for the history graph element
// summary: Lit template providing the accessible container div into which the price history graph is rendered.
// ---

import {html} from '//resources/lit/v3_0/lit.rollup.js';

import type {ShoppingInsightsHistoryGraphElement} from './history_graph.js';

export function getHtml(this: ShoppingInsightsHistoryGraphElement) {
  return html`<!--_html_template_start_-->
<div id="historyGraph" tabindex="0" aria-live="polite"></div>
<!--_html_template_end_-->`;
}
