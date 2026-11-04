// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Lit HTML template for tab-search-app
// summary: Exports the Lit template that renders the tab-search-page element with the available height inside the app.
// ---

import {html} from '//resources/lit/v3_0/lit.rollup.js';

import type {TabSearchAppElement} from './app.js';

export function getHtml(this: TabSearchAppElement) {
  return html`
<tab-search-page available-height="${this.availableHeight_}"></tab-search-page>`;
}
