// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: cr-iconset HTML template
// summary: Lit HTML template for cr-iconset rendering a sized base SVG container and a slot holding the icon definitions.
// ---

import {html} from '//resources/lit/v3_0/lit.rollup.js';

import type {CrIconsetElement} from './cr_iconset.js';

export function getHtml(this: CrIconsetElement) {
  return html`
<svg id="baseSvg" xmlns="http://www.w3.org/2000/svg"
    viewBox="0 0 ${this.size} ${this.size}" preserveAspectRatio="xMidYMid meet"
    focusable="false">
</svg>
<slot></slot>`;
}
