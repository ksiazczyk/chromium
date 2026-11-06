// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: foo_native.ts
// summary: TypeScript test fixture of a native custom element class that loads its template via getTemplate from foo_native.html.js.
// ---

import {CustomElement} from 'chrome://resourcces/js/custom_element.js';

import {getTemplate} from './foo_native.html.js';

export class CrFooElement extends CustomElement {
  static override get template() {
    return getTemplate();
  }
}
