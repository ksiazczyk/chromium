// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Reload button HTML template
// summary: Lit HTML template rendering the reload button icon with tooltip, accessibility labels and pointer, click and context menu handlers.
// ---

import {html} from '//resources/lit/v3_0/lit.rollup.js';

import type {ReloadButtonElement} from './reload_button.js';

export function getHtml(this: ReloadButtonElement) {
  return html`<!--_html_template_start_-->
<cr-icon-button id="button" class="iph-visual-target"
    iron-icon="${this.getIronIcon_()}" title="${this.tooltip}"
    aria-label="${this.accName_}" aria-haspopup="${this.state.canShowMenu}"
    ?disabled="${this.isDisabled}"
    ?is-menu-open="${this.state.isContextMenuVisible}"
    ?noink="${this.glowUpEnabled}" @pointerdown="${this.onPointerdown_}"
    @pointerup="${this.onPointerup_}"
    @pointercancel="${this.pressHandler_.onPointercancel}"
    @contextmenu="${this.pressHandler_.onContextmenu}"
    @click="${this.onClick_}">
</cr-icon-button>
<!--_html_template_end_-->`;
}
