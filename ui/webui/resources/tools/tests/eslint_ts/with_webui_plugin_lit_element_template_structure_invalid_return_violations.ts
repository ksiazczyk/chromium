// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Dummy element fixture for invalid return structure test
// summary: Defines a some-dummy CrLitElement with an items property, paired with a template fixture to test invalid template returns in the lit template structure rule.
// ---

import {CrLitElement} from '//resources/lit/v3_0/lit.rollup.js';

export class SomeDummyElement extends CrLitElement {
  static get is() {
    return 'some-dummy';
  }

  static get properties() {
    return {
      items: {type: Array},
    };
  }

  items: string[] = [];
}
