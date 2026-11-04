// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Options dialog Lit template
// summary: Lit HTML template for the extensions options dialog, rendering the extension icon and name in the title and a body slot for the embedded options element.
// ---

import {html} from '//resources/lit/v3_0/lit.rollup.js';

import type {ExtensionsOptionsDialogElement} from './options_dialog.js';

export function getHtml(this: ExtensionsOptionsDialogElement) {
  // clang-format off
  return html`<!--_html_template_start_-->
<cr-dialog id="dialog" close-text="$i18n{close}" @close="${this.onClose_}"
    show-close-button>
  <div slot="title">
    <div id="icon-and-name-wrapper">
      <img id="icon" src="${this.data_?.iconUrl || ''}" alt="">
      <span>${this.data_?.name || ''}</span>
    </div>
  </div>
  <div slot="body" id="body"></div>
</cr-dialog>
<!--_html_template_end_-->`;
  // clang-format on
}
