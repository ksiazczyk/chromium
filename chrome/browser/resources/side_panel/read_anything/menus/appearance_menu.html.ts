// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Appearance menu Lit template
// summary: Lit HTML template that renders the appearance menu as a grouped action menu for the improved Read Aloud UI.
// ---

import {html} from '//resources/lit/v3_0/lit.rollup.js';

import type {AppearanceMenuElement} from './appearance_menu.js';

export function getHtml(this: AppearanceMenuElement) {
  return html`<!--_html_template_start_-->
<grouped-action-menu id="menu" label="$i18n{appearanceTitle}"
    .menuGroups="${this.groups_}" .nonModal="${this.nonModal}"
    .closeOnClick="${false}">
</grouped-action-menu>
<!--_html_template_end_-->`;
}
