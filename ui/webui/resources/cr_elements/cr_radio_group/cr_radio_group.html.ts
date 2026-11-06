// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: cr-radio-group HTML template
// summary: Lit HTML template for the cr-radio-group element that renders a slot for its radio buttons.
// ---

import {html} from '//resources/lit/v3_0/lit.rollup.js';

import type {CrRadioGroupElement} from './cr_radio_group.js';

export function getHtml(this: CrRadioGroupElement) {
  return html`<slot></slot>`;
}
