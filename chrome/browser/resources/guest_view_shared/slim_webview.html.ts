// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Slim WebView Lit template
// summary: Provides the Lit HTML template that renders the guest iframe for the slim WebView element.
// ---

import {html} from '//resources/lit/v3_0/lit.rollup.js';

import type {SlimWebviewElement} from './slim_webview.js';

export function getHtml(this: SlimWebviewElement) {
  return html`<iframe></iframe>`;
}
