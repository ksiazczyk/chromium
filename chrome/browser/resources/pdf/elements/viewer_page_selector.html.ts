// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: PDF viewer page selector template
// summary: Lit HTML template rendering the page number input, a divider and the total page count for the page selector element.
// ---

import {html} from 'chrome://resources/lit/v3_0/lit.rollup.js';

import type {ViewerPageSelectorElement} from './viewer_page_selector.js';

export function getHtml(this: ViewerPageSelectorElement) {
  return html`<!--_html_template_start_-->
<div id="content">
  <input part="input" type="text" id="pageSelector"
      .value="${this.pageNo.toString()}" @pointerup="${this.onPointerup_}"
      @input="${this.onInput_}" @change="${this.onChange_}"
      aria-label="$i18n{labelPageNumber}">
  <span id="divider">/</span>
  <span id="pagelength">${this.docLength}</span>
</div>
<!--_html_template_end_-->`;
}
