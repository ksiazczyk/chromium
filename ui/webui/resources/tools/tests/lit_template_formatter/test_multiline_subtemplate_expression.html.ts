// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Multiline subtemplate expression test fixture
// summary: Lit html template fixture with a multiline conditional subtemplate and an arrow-function template block for formatter tests.
// ---

import {html} from '//resources/lit/v3_0/lit.rollup.js';

export function getHtml(this: DummyTestElement) {
  // clang-format off
  return html`<!--_html_template_start_-->
<div>
  ${this.shouldShowPrompt_() ?
      html`<my-dialog></my-dialog>`
    : ''}
  ${(item: string) => html`
    <div>${item}</div>
  `}
</div>
<!--_html_template_end_-->`;
  // clang-format on
}
