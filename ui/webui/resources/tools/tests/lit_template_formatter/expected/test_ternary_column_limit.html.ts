// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Expected output for ternary column limit test
// summary: Expected formatter output showing a ternary condition wrapped at the column limit inside a Lit HTML template.
// ---

import {html} from '//resources/lit/v3_0/lit.rollup.js';

export function getHtml(this: DummyTestElement) {
  return html`<!--_html_template_start_-->
<div>
  <div>
    ${this.isFirstVeryLongConditionActive() &&
            this.isSecondVeryLongConditionActive() ?
        html`
      <div>Sample content</div>
    ` : ''}
  </div>
</div>
<!--_html_template_end_-->`;
}
