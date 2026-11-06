// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: cr-search-field Lit template
// summary: Lit HTML template for the cr-search-field element, rendering the search icon, search input, and clear button with event bindings.
// ---

import {html} from '//resources/lit/v3_0/lit.rollup.js';

import type {CrSearchFieldElement} from './cr_search_field.js';

export function getHtml(this: CrSearchFieldElement) {
  return html`
<cr-icon id="searchIcon" icon="${this.iconOverride}" part="searchIcon">
</cr-icon>
<cr-input id="searchInput" part="searchInput"
    @search="${this.onSearchTermSearch}" @input="${this.onSearchTermInput}"
    aria-label="${this.label}" type="search" ?autofocus="${this.autofocus}"
    .placeholder="${this.label}" spellcheck="false">
  <cr-icon id="searchIconInline" slot="inline-prefix" icon="cr:search">
  </cr-icon>
  <cr-icon-button id="clearSearch" class="icon-cancel" slot="suffix"
      ?hidden="${!this.hasSearchText}" @click="${this.onClearSearchClick_}"
      .title="${this.clearLabel}">
  </cr-icon-button>
</cr-input>`;
}
