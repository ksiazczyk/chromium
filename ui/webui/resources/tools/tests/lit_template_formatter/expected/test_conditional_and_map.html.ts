// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: 'Expected output: conditional and map Lit template'
// summary: Expected formatter output for a Lit template combining a conditional subtemplate with a mapped list of selectable option elements.
// ---

import {html} from '//resources/lit/v3_0/lit.rollup.js';

export function getHtml(this: DummyTestElement) {
  // clang-format off
  return html`
<div class="value">
  ${this.isTypeSelect_() ? html`
    <div>
      <select class="md-select" @change="${this.onSelectChange_}">
        ${this.items.map(item => html`
          <option class="searchable" value="${item.value}"
              ?selected="${this.isSelected_(item)}">
            ${this.getName_(item)}
          </option>
        `)}
      </select>
    </div>
  ` : ''}
</div>`;
  // clang-format on
}
