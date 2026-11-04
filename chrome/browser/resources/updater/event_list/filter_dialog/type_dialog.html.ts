// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Type dialog HTML template
// summary: Lit HTML template for the type dialog that renders a button for each filter menu item with click and keyboard navigation handlers.
// ---

import {html} from '//resources/lit/v3_0/lit.rollup.js';

import type {TypeDialogElement} from './type_dialog.js';

export function getHtml(this: TypeDialogElement) {
  return html`
<!--_html_template_start_-->
<filter-dialog .anchorElement="${this.anchorElement}" @close="${this.onClose}">
  ${this.filterMenuItems.map(item => html`
    <cr-button class="filter-menu-item"
        data-filter-category="${item.filterCategory}" @click="${this.onClick}"
        @keydown="${this.onKeydown}">
      ${item.label}
    </cr-button>
  `)}
</filter-dialog>
<!--_html_template_end_-->`;
}
