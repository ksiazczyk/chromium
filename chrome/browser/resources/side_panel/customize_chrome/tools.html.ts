// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Tools element HTML template
// summary: Lit HTML template for the tools element, rendering a card with a toggle that shows or hides action chips.
// ---

import {html} from '//resources/lit/v3_0/lit.rollup.js';

import type {CustomizeChromeToolsElement} from './tools.js';

export function getHtml(this: CustomizeChromeToolsElement) {
  return html`<!--_html_template_start_-->
<div id="showToggleContainer" class="sp-card-content"
    @click="${this.onShowToggleClick_}">
  <div id="showChipsTitle">$i18n{showChipsToggleTitle}</div>
  <cr-toggle id="showChipsToggle" title="$i18n{showChipsToggleTitle}"
      ?checked="${this.isChipsEnabled_}" @change="${this.onShowToggleChange_}">
  </cr-toggle>
</div>
<!--_html_template_end_-->`;
}
