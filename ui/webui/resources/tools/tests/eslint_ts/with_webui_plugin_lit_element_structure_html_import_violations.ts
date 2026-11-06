// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Structure html import violations test fixture
// summary: CrLitElement fixture that renders inline html, used to test the lit-element-structure rule's handling of html imports.
// ---

import {CrLitElement, html} from '//resources/lit/v3_0/lit.rollup.js';

export class TestHtmlImportErrorElement extends CrLitElement {
  static get is() {
    return 'test-html-import-error';
  }

  override render() {
    return html`<div></div>`;
  }
}

declare global {
  interface HTMLElementTagNameMap {
    'test-html-import-error': TestHtmlImportErrorElement;
  }
}

customElements.define(
    TestHtmlImportErrorElement.is, TestHtmlImportErrorElement);
