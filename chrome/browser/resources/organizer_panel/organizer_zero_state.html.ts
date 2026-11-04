// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Organizer zero state HTML template
// summary: Lit HTML template for the organizer-zero-state element, rendering a zero-state text container with a content slot.
// ---

import {html} from '//resources/lit/v3_0/lit.rollup.js';

import type {OrganizerZeroStateElement} from './organizer_zero_state.js';

export function getHtml(this: OrganizerZeroStateElement) {
  // clang-format off
  return html`<!--_html_template_start_-->
<div class="zero-state-text">
  <slot></slot>
</div>
<!--_html_template_end_-->`;
  // clang-format on
}
