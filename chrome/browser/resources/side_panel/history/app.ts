// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: HistoryAppElement custom element
// summary: Defines the history-app Lit element that renders the side panel history UI.
// ---

import '/strings.m.js';

import {CrLitElement} from 'chrome://resources/lit/v3_0/lit.rollup.js';

import {getCss} from './app.css.js';
import {getHtml} from './app.html.js';

export class HistoryAppElement extends CrLitElement {
  static get is() {
    return 'history-app';
  }

  static override get styles() {
    return getCss();
  }

  override render() {
    return getHtml.bind(this)();
  }
}

declare global {
  interface HTMLElementTagNameMap {
    'history-app': HistoryAppElement;
  }
}
customElements.define(HistoryAppElement.is, HistoryAppElement);
