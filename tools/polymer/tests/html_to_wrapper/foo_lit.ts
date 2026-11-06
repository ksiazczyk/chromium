// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: foo_lit.ts
// summary: TypeScript test fixture of a Lit element whose render method returns HTML from the generated foo.html.js wrapper.
// ---

import {LitElement} from 'chrome://resources/lit/v3_0/lit.rollup.js';

import {getHtml} from './foo.html.js';

export class CrFooElement extends LitElement {
  override render() {
    return getHtml.bind(this)();
  }
}
