// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: cr-toolbar selection overlay Lit template
// summary: Lit HTML template for the selection overlay with a clear button, selected count label, and a slot for extra actions.
// ---

import {html} from '//resources/lit/v3_0/lit.rollup.js';

import type {CrToolbarSelectionOverlayElement} from './cr_toolbar_selection_overlay.js';

export function getHtml(this: CrToolbarSelectionOverlayElement) {
  return html`
<div id="overlay-content">
  <cr-icon-button part="clearIcon" title="${this.cancelLabel}"
      iron-icon="cr:close" @click="${this.onClearSelectionClick_}">
  </cr-icon-button>
  <div id="number-selected">${this.selectionLabel}</div>
  <div id="slot">
    <slot></slot>
  </div>
</div>`;
}
