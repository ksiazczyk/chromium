// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: cr_toast.html.ts
// summary: Lit HTML template for the cr-toast element that renders a slot for the toast content.
// ---

import {html} from '//resources/lit/v3_0/lit.rollup.js';

import type {CrToastElement} from './cr_toast.js';

export function getHtml(this: CrToastElement) {
  return html`<slot></slot>`;
}
