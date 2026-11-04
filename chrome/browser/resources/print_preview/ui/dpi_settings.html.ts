// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: DPI settings HTML template
// summary: Lit HTML template for the DPI settings section, rendering a labelled settings select bound to the printer dpi capability.
// ---

import {html} from '//resources/lit/v3_0/lit.rollup.js';

import type {DpiSettingsElement} from './dpi_settings.js';

export function getHtml(this: DpiSettingsElement) {
  // clang-format off
  return html`<!--_html_template_start_-->
<print-preview-settings-section>
  <span id="dpi-label" slot="title">$i18n{dpiLabel}</span>
  <div slot="controls">
    <print-preview-settings-select aria-label="$i18n{dpiLabel}"
        .capability="${this.capabilityWithLabels_}" setting-name="dpi"
        ?disabled="${this.disabled}">
    </print-preview-settings-select>
  </div>
</print-preview-settings-section>
<!--_html_template_end_-->`;
  // clang-format on
}
