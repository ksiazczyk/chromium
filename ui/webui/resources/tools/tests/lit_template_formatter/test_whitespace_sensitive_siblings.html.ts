// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Whitespace-sensitive siblings test case
// summary: Test case with adjacent span siblings where whitespace matters, used to verify the formatter preserves whitespace-sensitive markup.
// ---

import {html} from '//resources/lit/v3_0/lit.rollup.js';

export function getHtml(this: DummyTestElement) {
  // clang-format off
  return html`<!--_html_template_start_-->
<div class="wrapper">
  <span>Name: </span><span>${this.name}</span>
</div>
<!--_html_template_end_-->`;
  // clang-format on
}
