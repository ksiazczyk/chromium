// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Toolbar divider element
// summary: Defines the toolbar-divider element, a divider between toolbar actions built on the overflowable action mixin.
// ---

import {CrLitElement} from '//resources/lit/v3_0/lit.rollup.js';

import {OverflowableToolbarActionMixin} from './overflowable_toolbar_action_mixin.js';
import {getCss} from './toolbar_divider.css.js';
import {getHtml} from './toolbar_divider.html.js';

const ToolbarDividerElementBase = OverflowableToolbarActionMixin(CrLitElement);

export class ToolbarDividerElement extends ToolbarDividerElementBase {
  static get is() {
    return 'toolbar-divider';
  }

  static override get styles() {
    return getCss();
  }

  override isDivider: boolean = true;

  override render() {
    return getHtml.bind(this)();
  }
}

declare global {
  interface HTMLElementTagNameMap {
    'toolbar-divider': ToolbarDividerElement;
  }
}

customElements.define(ToolbarDividerElement.is, ToolbarDividerElement);
