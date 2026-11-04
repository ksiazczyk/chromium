// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Deprecated apps link Lit HTML template
// summary: Lit HTML template showing a warning icon and link that opens the deprecated apps dialog when the link string is available.
// ---

import {html} from '//resources/lit/v3_0/lit.rollup.js';

import type {DeprecatedAppsLinkElement} from './deprecated_apps_link.js';

export function getHtml(this: DeprecatedAppsLinkElement) {
  // clang-format off
  return html`<!--_html_template_start_-->
${this.display ? html`
  <div id="container">
    <img src="chrome://resources/images/error_yellow900.svg">
    <a is="action-link" id="deprecated-apps-link" @click="${this.onLinkClick_}"
        href="#">
      ${this.deprecationLinkString}
    </a>
  </div>
` : ''}
<!--_html_template_end_-->`;
  // clang-format on
}
