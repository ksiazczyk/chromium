// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Feature showcase step HTML template
// summary: Lit HTML template laying out a step with slots for the illustration, stepper, title, description, disclosure and buttons.
// ---

import {html} from '//resources/lit/v3_0/lit.rollup.js';

import type {FeatureShowcaseStepElement} from './feature_showcase_step.js';

export function getHtml(this: FeatureShowcaseStepElement) {
  return html`<!--_html_template_start_-->
<div class="content-child" id="showcase-illustration">
  <slot name="illustration"></slot>
</div>

<div class="content-child" id="showcase-description">
  <slot name="stepper"></slot>
  <div id="showcase-text">
    <h1 class="title">
      <slot name="title"></slot>
    </h1>
    <p class="subtitle">
      <slot name="description"></slot>
    </p>
    <slot name="disclosure"></slot>
    <div id="button-container">
      <slot name="button"></slot>
    </div>
  </div>
</div>
<!--_html_template_end_-->`;
}
