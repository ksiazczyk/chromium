// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Retain newlines formatter test fixture
// summary: Lit html template fixture with inconsistent indentation, blank lines, and bound expressions used to test newline retention in the WebUI template formatter.
// ---

import {html} from '//resources/lit/v3_0/lit.rollup.js';

export function getHtml(this: DummyTestElement) {
  return html`
<div class="container" ?disabled="${this.disabled}">
    <h1>${this.title}</h1>
  <span>Test with bad indent and expr</span>
</div>
    
<div class="extra space before" ?hidden="${this.divHidden}">
      
<div class="child without indent"></div>

    <div class="another child with too much indent"></div>

  Some text content: ${this.title}
</div>`;
}
