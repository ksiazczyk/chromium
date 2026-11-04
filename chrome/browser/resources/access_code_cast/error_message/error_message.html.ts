// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Access Code Cast error message HTML template
// summary: Lit HTML template for the error message element that renders the current error text in an assertive aria-live region.
// ---

import {html} from '//resources/lit/v3_0/lit.rollup.js';

import type {ErrorMessageElement} from './error_message.js';

export function getHtml(this: ErrorMessageElement) {
  return html`<!--_html_template_start_-->
<div class="error" aria-live="assertive">${this.getErrorMessage()}</div>
<!--_html_template_end_-->`;
}
