// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Lens chip app HTML template
// summary: Lit HTML template for the Lens chip that renders the crop preview image and its dismiss button.
// ---

import {html} from 'chrome://resources/lit/v3_0/lit.rollup.js';

import type {LensChipAppElement} from './lens_chip_app.js';

export function getHtml(this: LensChipAppElement) {
  return html`<!--_html_template_start_-->
    ${this.dataUri ? html`
      <div id="chipRoot" class="chip">
        <img id="cropImage"
            src="${this.dataUri}"
            alt="${this.label_}"
            draggable="false">
        <cr-icon-button id="closeButton"
            iron-icon="cr:close"
            noink
            aria-label="${this.dismissLabel_}"
            title="${this.dismissLabel_}"
            @click="${this.onCloseClick_}">
        </cr-icon-button>
      </div>
    ` : ''}
  <!--_html_template_end_-->`;
}
