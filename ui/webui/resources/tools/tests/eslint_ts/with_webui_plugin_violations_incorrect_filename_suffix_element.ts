// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: ESLint test fixture for lit-element-structure filename suffix
// summary: Deliberately violating fixture for the @webui-eslint/lit-element-structure rule, defining a CrLitElement with an incorrect filename suffix.
// ---

import {CrLitElement} from '//resources/lit/v3_0/lit.rollup.js';

// Test file for @webui-eslint/lit-element-structure

export class IncorrectFilenameSuffixElement extends CrLitElement {
  static get is() {
    return 'incorrect-filename-suffix';
  }
}

declare global {
  interface HTMLElementTagNameMap {
    'incorrect-filename-suffix': IncorrectFilenameSuffixElement;
  }
}

customElements.define(
    IncorrectFilenameSuffixElement.is, IncorrectFilenameSuffixElement);
