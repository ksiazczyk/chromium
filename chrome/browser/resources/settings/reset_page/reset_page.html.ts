// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Lit HTML template for the settings reset page
// summary: Renders the reset settings section with a link row that opens the lazily rendered reset profile dialog.
// ---

import {html} from '//resources/lit/v3_0/lit.rollup.js';

import type {SettingsResetPageElement} from './reset_page.js';

export function getHtml(this: SettingsResetPageElement) {
  // clang-format off
  return html`<!--_html_template_start_-->
<settings-section page-title="$i18n{resetPageTitle}"
    class="cr-centered-card-container">
  <cr-link-row id="resetProfile" label="$i18n{resetTrigger}"
      @click="${this.onShowResetProfileDialogClick_}"></cr-link-row>
  <cr-lazy-render-lit id="resetProfileDialog"
      .template="${() => html`
        <settings-reset-profile-dialog
            @close="${this.onResetProfileDialogClose_}">
        </settings-reset-profile-dialog>
      `}">
  </cr-lazy-render-lit>
</settings-section>
<!--_html_template_end_-->`;
  // clang-format on
}
