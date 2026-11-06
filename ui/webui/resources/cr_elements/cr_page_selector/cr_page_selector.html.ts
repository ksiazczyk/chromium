// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: cr-page-selector Lit HTML template
// summary: Lit template for the cr-page-selector element that renders a single slot holding the selectable page content.
// ---

import {html} from '//resources/lit/v3_0/lit.rollup.js';

export function getHtml() {
  return html`<slot></slot>`;
}
