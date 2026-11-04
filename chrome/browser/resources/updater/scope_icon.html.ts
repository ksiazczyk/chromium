// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Scope icon Lit template
// summary: Lit HTML template for the scope-icon element that renders a titled cr-icon when a scope is set.
// ---

import {html} from '//resources/lit/v3_0/lit.rollup.js';

import type {ScopeIconElement} from './scope_icon.js';

export function getHtml(this: ScopeIconElement) {
  return html`
<!--_html_template_start_-->
${this.scope !== undefined ? html`
  <cr-icon icon="${this.icon}" title="${this.label}" role="img"></cr-icon>
` : ''}
<!--_html_template_end_-->`;
}
