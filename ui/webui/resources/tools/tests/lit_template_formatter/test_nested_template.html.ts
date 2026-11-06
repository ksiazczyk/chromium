// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Nested Lit template test case
// summary: Test case with a nested html template inside a dummy-render element, used to verify the Lit template formatter's handling of nested templates.
// ---

import {html} from '//resources/lit/v3_0/lit.rollup.js';

export function getHtml(this: DummyTestElement) {
  // clang-format off
  return html`
<dummy-render id="dialog"
.template="${() => html`
  <dummy-dialog
      .store="${this.store_}"
        @close="${this.onClose_}"
        class="a-very-long-custom-class-name">
  </dummy-dialog>`}">
</dummy-render>`;
  // clang-format on
}
