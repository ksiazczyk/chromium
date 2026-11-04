// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Main discards tabs template
// summary: Lit HTML template that renders the tab bar and page selector switching between discards, database, graph, and memory tabs.
// ---

import {html} from '//resources/lit/v3_0/lit.rollup.js';

import type {DiscardsMainElement} from './discards_main.js';

export function getHtml(this: DiscardsMainElement) {
  //clang-format off
  return html`<!--_html_template_start_-->
<cr-tabs .tabNames="${this.tabs}" .selected="${this.selected}"
    @selected-changed="${this.onSelectedChanged_}">
</cr-tabs>

<cr-page-selector selected="${this.selected}">
  <discards-tab></discards-tab>
  <database-tab></database-tab>
  <graph-tab></graph-tab>
  <memory-tab></memory-tab>
</cr-page-selector>
<!--_html_template_end_-->`;
  //clang-format on
}
