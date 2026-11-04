// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Side panel HTML template
// summary: Lit HTML template for the side panel that renders a header with close button and shows either the bookmarks element or a webview as content.
// ---

import '//resources/cr_elements/cr_icon_button/cr_icon_button.js';

import {html} from 'chrome://resources/lit/v3_0/lit.rollup.js';

import type {SidePanelElement} from './side_panel.js';

export function getHtml(this: SidePanelElement) {
  return html`<!--_html_template_start_-->
${this.showing_ ? html`
  <div id="frame">
    <div id="header">
      <h2>${this.title_}</h2>
      <cr-icon-button id="closeButton" iron-icon="cr:close"
          @click="${this.onCloseClick_}">
      </cr-icon-button>
    </div>
    <div id="content">
      ${this.showBookmarks_ ? html`
        <webui-browser-bookmarks></webui-browser-bookmarks>
      ` : html`
        ${this.webView}
      `}
    </div>
  </div>
` : ''}
<!--_html_template_end_-->`;
}
