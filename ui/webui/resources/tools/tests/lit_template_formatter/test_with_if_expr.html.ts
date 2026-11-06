// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: If expression conditional test case
// summary: Test case with <if expr> conditional blocks for ChromeOS and Windows, used to verify the formatter's handling of conditional expressions.
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
