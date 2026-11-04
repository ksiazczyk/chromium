// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Tab element HTML template
// summary: Lit HTML template that renders a tab's favicon container, title, close button, and bottom corner decorations.
// ---

import {html} from 'chrome://resources/lit/v3_0/lit.rollup.js';

import type {TabElement} from './tab.js';

export function getHtml(this: TabElement) {
  return html`<!--_html_template_start_-->
<div class="tab">
  <div id="faviconContainer">
    <div id="favicon"></div>
  </div>
  <span id="title">${this.tabData.title}</span>
  <cr-icon-button class="close" iron-icon="cr:close"
      @click="${this.onCloseClick}">
  </cr-icon-button>
  <div id="bottomCorners" ?hidden="${!this.tabData.isActive}">
    <div id="leftCorner" class="corner"></div>
    <div id="rightCorner" class="corner"></div>
  </div>
</div>
<!--_html_template_end_-->`;
}
