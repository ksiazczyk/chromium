// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: URL item grid template
// summary: Lit HTML template for the url-item-grid element, mapping items into a cr-grid layout.
// ---

import {html} from '//resources/lit/v3_0/lit.rollup.js';

import type {UrlItemGridElement} from './url_item_grid.js';

export function getHtml(this: UrlItemGridElement) {
  return html`
<cr-grid>
  ${this.items_.map(item => html`
    <div id="${item.id}" class="item">urlItem id: ${item.id}</div>
  `)}
</cr-grid>`;
}
