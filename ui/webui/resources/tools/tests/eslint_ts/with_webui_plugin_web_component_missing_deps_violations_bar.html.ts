// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Test file for @webui-eslint/web-component-missing-deps

// ---docerion
// type: test
// title: ESLint test fixture for web-component-missing-deps bar template
// summary: Deliberately violating HTML template fixture for the @webui-eslint/web-component-missing-deps rule, rendering a cr-input and a my-bar element with bound properties.
// ---

import type {MyDummyElement} from './with_webui_plugin_web_component_missing_deps_violations.js';

export function getHtml(this: MyDummyElement) {
  return html`
<cr-input type="number" max="100" min="0" id="input"></cr-input>
<my-bar id="component" .prop1="${this.prop1}"
    .prop2="${this.prop2}" .prop3="${this.prop3}">
</my-bar>
`;
}
