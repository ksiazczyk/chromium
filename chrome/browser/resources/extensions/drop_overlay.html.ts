// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Drop overlay Lit HTML template
// summary: Lit HTML template for the drop overlay that displays an extension icon and a drop-to-install message.
// ---

import {html} from '//resources/lit/v3_0/lit.rollup.js';

import type {ExtensionsDropOverlayElement} from './drop_overlay.js';

export function getHtml(this: ExtensionsDropOverlayElement) {
  // clang-format off
  return html`<!--_html_template_start_-->
<div id="container">
  <cr-icon icon="cr:chrome-extension-filled"></cr-icon>
  <div id="text">$i18n{dropToInstall}</div>
</div>
<!--_html_template_end_-->`;
  // clang-format on
}
