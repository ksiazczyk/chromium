// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Activity log stream item HTML template
// summary: Lit HTML template for a single activity log stream item, showing an expandable row with activity type, name and time, plus page URL, argument list and web request details.
// ---

import {html} from '//resources/lit/v3_0/lit.rollup.js';

import type {ActivityLogStreamItemElement} from './activity_log_stream_item.js';

export function getHtml(this: ActivityLogStreamItemElement) {
  // clang-format off
  return html`<!--_html_template_start_-->
<cr-expand-button ?expanded="${this.expanded_}"
    ?disabled="${!this.isExpandable_}" @click="${this.onExpandClick_}">
  <div id="activity-call-and-time">
    <span id="activity-type">${this.data.activityType}</span>
    <span id="activity-name" title="${this.data.name}">${this.data.name}</span>
    <span id="activity-time">${this.getFormattedTime_()}</span>
  </div>
</cr-expand-button>
<div id="expanded-data" ?hidden="${!this.expanded_}">
  <a id="page-url-link" href="${this.data.pageUrl}" target="_blank"
      ?hidden="${!this.hasPageUrl_()}" title="${this.data.pageUrl}">
    ${this.data.pageUrl}
  </a>
  <div id="args-list" ?hidden="${!this.hasArgs_()}">
    <span class="expanded-data-heading">
      $i18n{activityArgumentsHeading}
    </span>
    ${this.argsList_.map(item => html`
      <div class="list-item">
        <span class="index">${item.index}</span>
        <span class="arg">${item.arg}</span>
      </div>
    `)}
  </div>
  <div id="web-request-section" ?hidden="${!this.hasWebRequestInfo_()}">
    <span class="expanded-data-heading">$i18n{webRequestInfoHeading}</span>
    <span id="web-request-details">${this.data.webRequestInfo}</span>
  </div>
</div>
<!--_html_template_end_-->`;
  // clang-format on
}
