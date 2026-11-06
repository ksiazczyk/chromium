// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: 'Expected output: basic expressions Lit template'
// summary: Expected formatter output for a basic Lit template with boolean and text expressions, wrapped in clang-format off markers.
// ---

import {html} from '//resources/lit/v3_0/lit.rollup.js';

export function getHtml(this: DummyTestElement) {
  // clang-format off
  return html`
<div class="container" ?disabled="${this.disabled}">
  <h1>${this.title}</h1>
  <span>Test with bad indent and expr</span>
</div>`;
  // clang-format on
}
