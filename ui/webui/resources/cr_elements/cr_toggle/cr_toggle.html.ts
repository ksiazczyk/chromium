// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: cr-toggle HTML template
// summary: TypeScript module returning the Lit HTML template that renders the bar and knob spans of the cr-toggle switch element.
// ---

import {html} from '//resources/lit/v3_0/lit.rollup.js';

import type {CrToggleElement} from './cr_toggle.js';

export function getHtml(this: CrToggleElement) {
  return html`
<span id="bar"></span>
<span id="knob"></span>`;
}
