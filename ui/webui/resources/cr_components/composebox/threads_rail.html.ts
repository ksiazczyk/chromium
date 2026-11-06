// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Threads rail HTML template
// summary: Lit HTML template for the threads rail element with a button that opens AI Mode thread history.
// ---

import {html} from '//resources/lit/v3_0/lit.rollup.js';

import {type ThreadsRailElement} from './threads_rail.js';

export function getHtml(this: ThreadsRailElement) {
  // clang-format off
  return html`<!--_html_template_start_-->
  <div id="rail">
    <!-- Note: The icon is the same as the one used for AI Mode, but exposed to
         non-branded chrome builds as well. -->
    <cr-icon-button id="showHistoryButton"
        iron-icon="composebox:notes-spark"
        @click="${this.onShowHistoryClick_}"
        title="${this.i18n('aimThreadsHistoryLabel')}">
    </cr-icon-button>
  </div>
  <!--_html_template_end_-->`;
  // clang-format on;
}
