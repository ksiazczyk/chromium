// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: cr-loading-gradient HTML template
// summary: Lit HTML template for the cr-loading-gradient element, rendering the gradient div and a slot that triggers a slotchange handler.
// ---

import {html} from '//resources/lit/v3_0/lit.rollup.js';

import type {CrLoadingGradientElement} from './cr_loading_gradient.js';

export function getHtml(this: CrLoadingGradientElement) {
  return html`
<div id="gradient"></div>
<slot @slotchange="${this.onSlotchange_}"></slot>`;
}
