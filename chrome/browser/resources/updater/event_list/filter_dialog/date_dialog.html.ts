// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Date filter dialog HTML template
// summary: Lit HTML template for the date filter dialog, rendering labeled start and end datetime-local inputs plus a filter dialog footer.
// ---

import {html} from '//resources/lit/v3_0/lit.rollup.js';

import type {DateDialogElement} from './date_dialog.js';

export function getHtml(this: DateDialogElement) {
  return html`
<!--_html_template_start_-->
<filter-dialog .anchorElement="${this.anchorElement}" @close="${this.onClose}">
  <div class="filter-menu-date-inputs">
    <label for="start-date">$i18n{startDate}</label>
    <input type="datetime-local" id="start-date"
        .valueAsNumber="${this.getPendingStartTime()}"
        @input="${this.onStartTimeInput}">
    <label for="end-date">$i18n{endDate}</label>
    <input type="datetime-local" id="end-date"
        .valueAsNumber="${this.getPendingEndTime()}"
        @input="${this.onEndTimeInput}">
  </div>
  <filter-dialog-footer @cancel-click="${this.onCancelClick}"
      @apply-click="${this.onDateApplyClick}">
  </filter-dialog-footer>
</filter-dialog>
<!--_html_template_end_-->`;
}
