// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Base page web component
// summary: Defines the base-page Polymer element that serves as the main page layout for the Shimless RMA process modal dialog.
// ---

import './shimless_rma_shared.css.js';

import {PolymerElement} from 'chrome://resources/polymer/v3_0/polymer/polymer_bundled.min.js';

import {getTemplate} from './base_page.html.js';

/**
 * @fileoverview
 * 'base-page' is the main page for the shimless rma process modal dialog.
 */
export class BasePageElement extends PolymerElement {
  static get is() {
    return 'base-page' as const;
  }

  static get template() {
    return getTemplate();
  }
}

declare global {
  interface HTMLElementTagNameMap {
    [BasePageElement.is]: BasePageElement;
  }
}

customElements.define(BasePageElement.is, BasePageElement);
