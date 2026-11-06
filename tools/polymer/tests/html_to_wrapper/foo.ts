// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: foo.ts
// summary: TypeScript test fixture of a Polymer element class that loads its template via getTemplate from foo.html.js.
// ---

import {PolymerElement} from 'chrome://resources/polymer/v3_0/polymer/polymer_bundled.min.js';

import {getTemplate} from './foo.html.js';

export class CrFooElement extends PolymerElement {
  static override get template() {
    return getTemplate();
  }
}
