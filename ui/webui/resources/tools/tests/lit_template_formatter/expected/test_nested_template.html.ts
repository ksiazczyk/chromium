// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: 'Expected output: nested template'
// summary: Expected formatter output for a Lit template with a nested html template passed as a property binding to a renderer element.
// ---

import {html} from '//resources/lit/v3_0/lit.rollup.js';

export function getHtml(this: DummyTestElement) {
  // clang-format off
  return html`
<dummy-render id="dialog"
    .template="${() => html`
      <dummy-dialog .store="${this.store_}" @close="${this.onClose_}"
          class="a-very-long-custom-class-name">
      </dummy-dialog>
    `}">
</dummy-render>`;
  // clang-format on
}
