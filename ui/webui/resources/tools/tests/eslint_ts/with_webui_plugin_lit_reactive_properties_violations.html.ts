// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Lit reactive properties template violations fixture
// summary: ESLint test fixture whose Lit template reads properties that are declared, missing from the properties block, readonly, or supplied by a mixin.
// ---

import {html} from '//resources/lit/v3_0/lit.rollup.js';

import type {SomeFooElement} from './with_webui_plugin_lit_reactive_properties_violations.js';

export function getHtml(this: SomeFooElement) {
  return html`
      <div>${this.propInProperties}</div>
      <div>${this.propNotInProperties}</div>
      <div>${this.readonlyProp}</div>
      <div>${this.mixinString}</div>
      <div>${this.getterProp}</div>
    `;
}
