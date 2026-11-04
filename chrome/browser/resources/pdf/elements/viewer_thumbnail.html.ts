// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: PDF viewer thumbnail HTML template
// summary: Lit HTML template rendering a clickable thumbnail container and the page number label.
// ---

import {html} from 'chrome://resources/lit/v3_0/lit.rollup.js';

import type {ViewerThumbnailElement} from './viewer_thumbnail.js';

export function getHtml(this: ViewerThumbnailElement) {
  return html`
<div id="thumbnail" @click="${this.onClick_}" role="button"></div>
<div id="pageNumber">${this.pageNumber}</div>`;
}
