// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Actor overlay app template
// summary: Lit HTML template that renders the border glow and magic cursor, including the optional cursor chip label.
// ---

import {html} from '//resources/lit/v3_0/lit.rollup.js';

import type {ActorOverlayAppElement} from './app.js';

export function getHtml(this: ActorOverlayAppElement) {
  // clang-format off
  return html`<!--_html_template_start_-->
<div ?hidden="${!this.borderGlowVisible_}">
  <div id="border-stroke"></div>
  <div id="border-glow"></div>
</div>
<div id="magicCursor">
  <div id="cursorImage"></div>
  ${this.cursorChipText_ ? html`
    <div id="cursorChip">${this.cursorChipText_}</div>
  ` : ''}
</div>
<!--_html_template_end_-->`;
  // clang-format on
}
