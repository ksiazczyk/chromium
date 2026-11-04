// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Extension button Lit HTML template
// summary: Renders the HTML template for the extension action button, wiring pointer, click, and context menu handlers to its icon.
// ---

import {html} from '//resources/lit/v3_0/lit.rollup.js';

import type {ExtensionElement} from './extension.js';

export function getHtml(this: ExtensionElement) {
  return html`
<cr-button type="button" @pointerdown="${this.highlightTracker_.onPointerdown}"
    @click="${this.onClick}" @contextmenu="${this.onContextmenu_}">
  <icon-from-table .iconHandle="${this.iconHandle}"></icon-from-table>
</cr-button>`;
}
