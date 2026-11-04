// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Webview element Lit HTML template
// summary: Lit HTML template for the cr-webview element, rendering either a Chromium surface embed or an iframe depending on the enableSurfaceEmbed flag and guest ID.
// ---

import {html} from '//resources/lit/v3_0/lit.rollup.js';

import type {WebviewElement} from './webview.js';

export function getHtml(this: WebviewElement) {
  return html`
${this.enableSurfaceEmbed ? html`
  ${this.guestId ? html`
    <embed class="content" type="application/x-chromium-surface-embed"
        data-content-id="${this.guestId}"
        ?data-allow-pinch-zoom="${this.allowPinchZoom}">
  ` : html``}
` : html`
  <iframe class="content"></iframe>
`}`;
}
