// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: cr_grid.html.ts
// summary: Lit HTML template for the cr-grid element that renders the grid container with a keydown handler and a slot for child items.
// ---

import {html} from '//resources/lit/v3_0/lit.rollup.js';

import type {CrGridElement} from './cr_grid.js';

export function getHtml(this: CrGridElement) {
  return html`
<div id="grid" @keydown="${this.onKeydown_}">
  <slot id="items"></slot>
</div>`;
}
