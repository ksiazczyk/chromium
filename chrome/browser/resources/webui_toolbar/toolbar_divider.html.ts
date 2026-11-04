// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Toolbar divider template
// summary: Lit template for the toolbar-divider element, which renders an empty shadow DOM.
// ---

import {html} from '//resources/lit/v3_0/lit.rollup.js';

import type {ToolbarDividerElement} from './toolbar_divider.js';

export function getHtml(this: ToolbarDividerElement) {
  return html`<!--_html_template_start_-->
<!--_html_template_end_-->`;
}
