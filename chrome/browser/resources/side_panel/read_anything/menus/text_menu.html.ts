// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Text menu HTML template
// summary: Lit HTML template that renders the Read Anything text menu by delegating to a grouped-action-menu with the computed menu groups.
// ---

import {html} from '//resources/lit/v3_0/lit.rollup.js';

import type {TextMenuElement} from './text_menu.js';

export function getHtml(this: TextMenuElement) {
  return html`<!--_html_template_start_-->
<grouped-action-menu id="menu" label="$i18n{textSettingsTitle}"
    .menuGroups="${this.groups_}" .nonModal="${this.nonModal}"
    .closeOnClick="${false}">
</grouped-action-menu>
<!--_html_template_end_-->`;
}
