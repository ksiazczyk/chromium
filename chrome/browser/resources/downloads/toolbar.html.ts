// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Downloads toolbar HTML template
// summary: Lit template that renders the downloads toolbar markup with a search field and a Clear all button.
// ---

import {html} from '//resources/lit/v3_0/lit.rollup.js';

import type {DownloadsToolbarElement} from './toolbar.js';

export function getHtml(this: DownloadsToolbarElement) {
  return html`<!--_html_template_start_-->
<cr-toolbar id="toolbar" page-name="$i18n{title}" autofocus always-show-logo
    search-prompt="$i18n{search}" clear-label="$i18n{clearSearch}"
    .spinnerActive="${this.spinnerActive}"
    @search-changed="${this.onSearchChanged_}">
  <cr-button id="clearAll" @click="${this.onClearAllClick_}">
    $i18n{clearAll}
  </cr-button>
</cr-toolbar>
<!--_html_template_end_-->`;
}
