// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Lit template for the Lens button app
// summary: Exports the Lit HTML template that renders the Lens cr-icon-button with aria attributes and click and mousedown handlers.
// ---

import {html} from 'chrome://resources/lit/v3_0/lit.rollup.js';

import type {LensButtonAppElement} from './lens_button_app.js';

export function getHtml(this: LensButtonAppElement) {
  return html`<!--_html_template_start_-->
    <cr-icon-button id="lensButton"
        class="action-icon"
        noink
        aria-label="${this.label_}"
        title="${this.label_}"
        aria-pressed="${this.active ? 'true' : 'false'}"
        ?active="${this.active}"
        ?disabled="${this.disabled}"
        @click="${this.onClick_}"
        @mousedown="${this.onMousedown_}">
    </cr-icon-button>
  <!--_html_template_end_-->`;
}
