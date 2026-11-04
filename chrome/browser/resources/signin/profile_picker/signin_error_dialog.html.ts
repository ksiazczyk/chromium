// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Sign-in error dialog HTML template
// summary: Lit HTML template for the sign-in error dialog, rendering the error title and body with OK and optional sign-in buttons.
// ---

import {html} from '//resources/lit/v3_0/lit.rollup.js';

import type {SigninErrorDialogElement} from './signin_error_dialog.js';

export function getHtml(this: SigninErrorDialogElement) {
  return html`
<cr-dialog id="dialog">
  <div slot="title" id="dialog-title" class="key-text">
    ${this.signinErrorDialogTitle_}
  </div>
  <div slot="body" id="dialog-body">
    <div id="normal-error-message" class="warning-message">
      ${this.signinErrorDialogBody_}
    </div>
  </div>
  <div slot="button-container" class="button-container">
    <cr-button id="ok-button" @click="${this.onOkButtonClick_}">
      ${this.i18n('ok')}
    </cr-button>
    <cr-button id="button-sign-in" class="action-button"
        @click="${this.onReauthClick_}"
        ?hidden="${!this.shouldShowSigninButton_}">
      ${this.i18n('needsSigninPrompt')}
    </cr-button>
  </div>
</cr-dialog>`;
}
