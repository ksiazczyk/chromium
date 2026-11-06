// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: cr_a11y_announcer.html.ts
// summary: Lit HTML template for the cr-a11y-announcer element, rendering the aria-live alert messages container.
// ---

import {html} from '//resources/lit/v3_0/lit.rollup.js';

import type {CrA11yAnnouncerElement} from './cr_a11y_announcer.js';

export function getHtml(this: CrA11yAnnouncerElement) {
  return html`
<div id="messages" role="alert" aria-live="polite" aria-relevant="additions">
</div>`;
}
