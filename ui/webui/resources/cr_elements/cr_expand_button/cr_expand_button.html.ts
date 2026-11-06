// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: HTML template for the cr-expand-button element
// summary: Lit HTML template for the cr-expand-button element, rendering a label slot and an icon button with expanded-state ARIA attributes.
// ---

import {html} from '//resources/lit/v3_0/lit.rollup.js';

import type {CrExpandButtonElement} from './cr_expand_button.js';

export function getHtml(this: CrExpandButtonElement) {
  return html`
<div id="label" aria-hidden="true">
  <slot></slot>
</div>
<cr-icon-button id="icon" aria-labelledby="label" ?disabled="${this.disabled}"
    aria-expanded="${this.getAriaExpanded_()}" tabindex="${this.tabIndex}"
    part="icon" iron-icon="${this.getIcon_()}">
</cr-icon-button>`;
}
