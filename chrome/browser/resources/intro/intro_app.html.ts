// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Lit HTML template for the intro app
// summary: Renders the splash logo view and the sign-in promo inside the intro-app view manager.
// ---

import {html} from '//resources/lit/v3_0/lit.rollup.js';

import type {IntroAppElement} from './intro_app.js';

export function getHtml(this: IntroAppElement) {
  return html`<!--_html_template_start_-->
<cr-view-manager id="viewManager">
  <div id="splash" slot="view">
    <img id="product-logo-animation" src="images/product-logo-animation.svg">
  </div>
  <sign-in-promo id="signInPromo" slot="view"></sign-in-promo>
</cr-view-manager>
<!--_html_template_end_-->`;
}
