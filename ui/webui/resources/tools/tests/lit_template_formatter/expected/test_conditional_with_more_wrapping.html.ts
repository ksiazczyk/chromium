// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: 'Expected output: conditional with more wrapping'
// summary: Expected formatter output for a Lit template with multiple conditional subtemplates and html template start and end markers.
// ---

import {html} from '//resources/lit/v3_0/lit.rollup.js';

export function getHtml(this: DummyTestElement) {
  // clang-format off
  return html`<!--_html_template_start_-->
<div id="container">
  ${this.some.condition ? html`
    <div class="my-url-item">
      <a href="${this.item.url}" target="_blank">
        ${this.item.title || this.item.urlurl}
      </a>
    </div>
  ` : html``}

  ${this.showContent ? html`
    <div>${this.content}</div>
  ` : ''}
</div>
<!--_html_template_end_-->`;
  // clang-format on
}
