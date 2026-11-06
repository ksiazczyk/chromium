// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: cr_toast_manager.html.ts
// summary: Lit HTML template for the cr-toast-manager element, wrapping a cr-toast with a content div and a slot.
// ---

import {html} from '//resources/lit/v3_0/lit.rollup.js';

import type {CrToastManagerElement} from './cr_toast_manager.js';

export function getHtml(this: CrToastManagerElement) {
  return html`
<cr-toast id="toast" .duration="${this.duration}">
  <div id="content" class="elided-text"></div>
  <slot id="slotted"></slot>
</cr-toast>`;
}
