// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Insights comment row template
// summary: Lit HTML template for the insights comment row showing the history description text and an optional feedback link.
// ---

import {html} from '//resources/lit/v3_0/lit.rollup.js';

import type {InsightsCommentRowElement} from './insights_comment_row.js';

export function getHtml(this: InsightsCommentRowElement) {
  return html`<!--_html_template_start_-->
<div id="commentRow">
  <span id="comment">$i18n{historyDescription}</span>
  <a href="#" ?hidden="${!this.shouldShowFeedback_}"
      @click="${this.onFeedbackClick_}" class="link">
    $i18n{feedback}
  </a>
</div>
<!--_html_template_end_-->`;
}
