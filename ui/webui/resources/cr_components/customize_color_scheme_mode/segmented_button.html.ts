// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Segmented button HTML template
// summary: Lit HTML template for the segmented-button element, rendering a cr-radio-group with a slot for its options.
// ---

import {html} from '//resources/lit/v3_0/lit.rollup.js';

import type {SegmentedButtonElement} from './segmented_button.js';

export function getHtml(this: SegmentedButtonElement) {
  return html`
<cr-radio-group .selected="${this.selected}"
    @selected-changed="${this.onSelectedChanged_}"
    selectable-elements="segmented-button-option"
    aria-label="${this.groupAriaLabel}">
  <slot></slot>
</cr-radio-group>`;
}
