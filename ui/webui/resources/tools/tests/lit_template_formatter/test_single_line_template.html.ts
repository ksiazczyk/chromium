// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Single line Lit template test case
// summary: Test case with a minimal single-line html template containing only a slot element, used to verify the Lit template formatter.
// ---

import {html} from '//resources/lit/v3_0/lit.rollup.js';

export function getHtml(this: DummyTestElement) {
  return html`
<slot></slot>`;
}
