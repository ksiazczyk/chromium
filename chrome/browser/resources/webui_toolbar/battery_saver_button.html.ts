// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Battery saver button HTML template
// summary: Lit HTML template for the battery saver toolbar button, defining its icon, accessible label, tooltip and click handler.
// ---

import {html} from '//resources/lit/v3_0/lit.rollup.js';

import type {BatterySaverButtonElement} from './battery_saver_button.js';

export function getHtml(this: BatterySaverButtonElement) {
  return html`
<cr-icon-button id="button" class="iph-visual-target"
    iron-icon="webui-toolbar:battery_saver_refresh_custom"
    aria-label="${this.getLabel_()}" aria-haspopup="dialog"
    title="${this.getTooltip_()}" @click="${this.onClick_}">
</cr-icon-button>`;
}
