// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Speech rate menu Lit template
// summary: Lit template rendering the speech rate menu as a simple action menu listing the available voice speed options.
// ---

import {html} from '//resources/lit/v3_0/lit.rollup.js';

import {ToolbarEvent} from '../content/read_anything_types.js';

import type {RateMenuElement} from './rate_menu.js';

export function getHtml(this: RateMenuElement) {
  return html`<!--_html_template_start_-->
<simple-action-menu id="menu" class="immersive-top-level-menu"
    label="$i18n{voiceSpeedLabel}" .menuItems="${this.options_}"
    event-name="${ToolbarEvent.RATE}" .selectedValue="${this.speechRate}">
</simple-action-menu>
<!--_html_template_end_-->`;
}
