// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Viewer zoom button HTML template
// summary: Lit HTML template rendering the zoom button's icon button with a dynamic icon, tooltip, and disabled state.
// ---

import {html} from 'chrome://resources/lit/v3_0/lit.rollup.js';

import type {ViewerZoomButtonElement} from './viewer_zoom_button.js';

export function getHtml(this: ViewerZoomButtonElement) {
  return html`
<cr-icon-button .ironIcon="${this.computeVisibleIcon_()}"
    @click="${this.onClick_}" aria-label="${this.computeVisibleTooltip_()}"
    title="${this.computeVisibleTooltip_()}" ?disabled="${this.disabled}">
</cr-icon-button>`;
}
