// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Dummy element class for template structure violations test
// summary: Minimal CrLitElement subclass providing properties and event handlers so the template structure violations fixture does not trigger assertion failures.
// ---

import {CrLitElement} from '//resources/lit/v3_0/lit.rollup.js';

// Minimal class definition for
// with_webui_plugin_lit_element_template_structure_violations.html.ts
// to not trigger assertion failures.
export class MyDummyElement extends CrLitElement {
  static get is() {
    return 'test-dummy';
  }

  static get properties() {
    return {
      loadProgress: {type: Number},
      data: {type: Object},
      fancyTitle: {type: Boolean},
      loading: {type: Boolean},
      enableReload: {type: Boolean},
    };
  }

  loadProgress: number = 0;
  data: {log: Array<{dateString: string, message: string}>}|null = null;
  fancyTitle: boolean = false;
  loading: boolean = false;
  enableReload: boolean = false;

  protected onButtonClick_() {}
  protected onInput_() {}
  protected click_() {}
  protected onFocus_() {}
}
