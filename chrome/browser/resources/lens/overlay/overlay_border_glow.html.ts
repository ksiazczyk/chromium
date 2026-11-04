// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Overlay border glow HTML template
// summary: Lit HTML template that renders the border glow container and gradient color layer for the overlay border glow element.
// ---

import {html} from '//resources/lit/v3_0/lit.rollup.js';

import type {OverlayBorderGlowElement} from './overlay_border_glow.js';

export function getHtml(this: OverlayBorderGlowElement) {
  return html`<div id="borderGlowContainer" .style="${this.getBoundsStyles()}">
    <div .style="${
      this.getGradientColorStyles()}" id="gradientColorLayer"></div>
  </div>`;
}
