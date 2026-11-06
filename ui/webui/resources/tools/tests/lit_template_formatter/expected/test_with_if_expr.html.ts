// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Expected output for if expression test
// summary: Expected formatter output for a template with conditional if-expr blocks for ChromeOS and Windows builds.
// ---

import {html} from '//resources/lit/v3_0/lit.rollup.js';

export function getHtml(this: DummyTestElement) {
  return html`<!--_html_template_start_-->
<div class="wrapper">
  <div class="inner">
<if expr="is_chromeos">
    <div class="cros">
      Hello From ChromeOS Build!!!!!
    </div>
</if>
  </div>
</div>
<if expr="is_win">
<span>Windows Only</span>
<cr-button id="winButton" @click="${this.onWinButtonClick_}">
  Click Me!
</cr-button>
</if>
<!--_html_template_end_-->`;
}
