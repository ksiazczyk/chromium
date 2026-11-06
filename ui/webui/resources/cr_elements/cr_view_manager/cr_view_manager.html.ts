// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: HTML template for the cr-view-manager element
// summary: Supplies the Lit HTML template for the cr-view-manager element, rendering a named slot that hosts the managed views.
// ---

import {html} from '//resources/lit/v3_0/lit.rollup.js';

import type {CrViewManagerElement} from './cr_view_manager.js';

export function getHtml(this: CrViewManagerElement) {
  return html`<slot name="view"></slot>`;
}
