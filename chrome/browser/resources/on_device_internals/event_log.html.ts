// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Event log HTML template
// summary: Lit HTML template for the on-device-internals-event-log element, rendering a table of event log messages with time, source links, and a dump button.
// ---

import {html} from '//resources/lit/v3_0/lit.rollup.js';

import type {OnDeviceInternalsEventLogElement} from './event_log.js';

export function getHtml(this: OnDeviceInternalsEventLogElement) {
  // clang-format off
  return html`<!--_html_template_start_-->
<div class="main">
  <h2>Event Logs</h2>
  <cr-button @click="${this.onEventLogsDumpClick_}">Dump</cr-button>
  <table>
    <thead>
      <tr>
        <th class="time">Time</th>
        <th class="source-location">Source Location</th>
        <th class="message">Log Message</th>
      </tr>
    </thead>
    <tbody>
      ${this.eventLogMessages_.map(item => html`
        <tr>
          <td class="time">${item.eventTime.toLocaleTimeString()}</td>
          <td class="source-location">
            <a href="${item.sourceLinkURL}">${item.sourceLinkText}</a>
          </td>
          <td class="message">${item.message}</td>
        </tr>`)}
    </tbody>
  </table>
</div>
<!--_html_template_end_-->`;
  // clang-format on
}
