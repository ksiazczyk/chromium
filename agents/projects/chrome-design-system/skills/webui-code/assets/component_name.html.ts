// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: WebUI component HTML template
// summary: Template module exporting a getHtml function that returns the Lit HTML template for a new WebUI component.
// ---

import {html} from '//resources/lit/v3_0/lit.rollup.js';
import type {MyComponentElement} from './my_component.js';

export function getHtml(this: MyComponentElement) {
  return html`
    <!-- HTML goes here... -->
  `;
}
