// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Conditional and map test fixture
// summary: Lit html template fixture combining a conditional block with a mapped list of selectable options for template formatter tests.
// ---

import {html} from '//resources/lit/v3_0/lit.rollup.js';

export function getHtml(this: DummyTestElement) {
  // clang-format off
  return html`
<div class="value">
  ${this.isTypeSelect_() ? html
    `<div>
        <select class="md-select" @change="${this.onSelectChange_}">
        ${this.items.map(item => html `
          <option class="searchable" value="${item.value}"
            ?selected="${this.isSelected_(item)}">
             ${this.getName_(item)}
          </option>`)}
      </select>
    </div>
  ` : ''}
</div>`;
  // clang-format on
}
