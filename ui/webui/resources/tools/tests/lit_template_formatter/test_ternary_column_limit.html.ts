// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Ternary expression column limit test case
// summary: Test case with a long ternary condition inside a template expression, used to verify the formatter's column limit and wrapping behavior.
// ---

import {html} from '//resources/lit/v3_0/lit.rollup.js';

export function getHtml(this: DummyTestElement) {
  return html`<!--_html_template_start_-->
<div>
  <div>
    ${this.isFirstVeryLongConditionActive() && this.isSecondVeryLongConditionActive() ? html`
      <div>Sample content</div>
    ` : ''}
  </div>
</div>
<!--_html_template_end_-->`;
}
