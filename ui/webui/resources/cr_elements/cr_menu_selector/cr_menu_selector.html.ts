// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: cr_menu_selector.html.ts Lit template
// summary: Lit HTML template for the cr-menu-selector element, exporting getHtml() which renders a slot for menu items.
// ---

import {html} from '//resources/lit/v3_0/lit.rollup.js';

export function getHtml() {
  return html`<slot></slot>`;
}
