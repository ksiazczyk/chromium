// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Template fixture with invalid return for structure test
// summary: Lit template fixture whose getHtml returns mapped html instead of a template, testing the lit-element-template-structure rule's invalid return check.
// ---

import {html} from '//resources/lit/v3_0/lit.rollup.js';

import type {SomeDummyElement} from './with_webui_plugin_lit_element_template_structure_invalid_return_violations.js';

export function getHtml(this: SomeDummyElement) {
  return this.items.map(item => html`<div>Hello ${item}</div>`);
}
