// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Spinner page HTML template
// summary: Lit HTML template for the spinner page showing a page title, loading spinner and cancel button.
// ---

import {html} from 'chrome://resources/lit/v3_0/lit.rollup.js';

import type {SpinnerPageElement} from './spinner_page.js';

export function getHtml(this: SpinnerPageElement) {
  return html`<!--html_template_start_-->
<h1 id="header" tabindex="0">${this.pageTitle}</h1>
<div class="spinner"></div>
<div class="navigation-buttons">
  <cr-button id="cancelButton" @click="${this.onCancelClick_}">
    ${this.i18n('cancelButtonText')}
  </cr-button>
</div>
<!--html_template_end_-->`;
}
