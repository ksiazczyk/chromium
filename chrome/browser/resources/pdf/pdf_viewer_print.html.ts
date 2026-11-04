// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Print preview viewer HTML template
// summary: Lit HTML template for the print preview PDF viewer element, rendering the sizer, zoom toolbar, page indicator and error dialog.
// ---

import {html} from 'chrome://resources/lit/v3_0/lit.rollup.js';

import type {PdfViewerPrintElement} from './pdf_viewer_print.js';

export function getHtml(this: PdfViewerPrintElement) {
  // clang-format off
  return html`
<div id="sizer"></div>

<viewer-zoom-toolbar id="zoomToolbar" @fit-to-changed="${this.onFitToChanged}"
    @zoom-in="${this.onZoomIn}" @zoom-out="${this.onZoomOut}">
</viewer-zoom-toolbar>

<viewer-page-indicator id="pageIndicator"></viewer-page-indicator>

<div id="content"></div>

${this.showErrorDialog ? html`
  <viewer-error-dialog id="error-dialog"></viewer-error-dialog>
` : ''}`;
  // clang-format on
}
