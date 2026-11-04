// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Letter spacing menu HTML template
// summary: Lit HTML template for the Read Anything letter spacing menu, rendering a simple action menu of spacing options.
// ---

import {html} from '//resources/lit/v3_0/lit.rollup.js';

import {ToolbarEvent} from '../content/read_anything_types.js';

import type {LetterSpacingMenuElement} from './letter_spacing_menu.js';

export function getHtml(this: LetterSpacingMenuElement) {
  return html`<!--_html_template_start_-->
<simple-action-menu id="menu" label="$i18n{letterSpacingTitle}"
    .menuItems="${this.options_}" .nonModal="${this.nonModal}"
    event-name="${ToolbarEvent.LETTER_SPACING}"
    .selectedValue="${this.letterSpacing}"
    @letter-spacing-change="${this.onLetterSpacingChange_}">
</simple-action-menu>
<!--_html_template_end_-->`;
}
