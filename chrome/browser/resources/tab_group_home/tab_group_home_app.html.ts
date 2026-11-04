// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Tab Group Home app Lit template
// summary: Exports the Lit HTML template that renders the Tab Group Home content for the app element.
// ---

import {html} from '//resources/lit/v3_0/lit.rollup.js';

import type {TabGroupHomeAppElement} from './tab_group_home_app.ts';

export function getHtml(this: TabGroupHomeAppElement) {
  return html`
<div>
  Tab Group Home
</div>`;
}
