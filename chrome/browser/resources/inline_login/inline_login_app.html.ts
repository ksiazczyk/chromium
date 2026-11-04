// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Lit HTML template for the inline login app
// summary: Exports the Lit html template that renders the loading spinner and the sign-in webview for the inline login app element.
// ---

import {html} from '//resources/lit/v3_0/lit.rollup.js';

import type {InlineLoginAppElement} from './inline_login_app.js';

export function getHtml(this: InlineLoginAppElement) {
  return html`<!--_html_template_start_-->
<div id="spinner" class="spinner" ?hidden="${!this.isSpinnerActive_()}"></div>
<webview id="signinFrame" name="signin-frame" class="signin-frame"
    ?hidden="${this.isSpinnerActive_()}" allowscaling>
</webview>
<!--_html_template_end_-->`;
}
