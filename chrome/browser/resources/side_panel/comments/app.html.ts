// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Comments app Lit HTML template
// summary: Returns the Lit HTML template rendered by the comments-app custom element.
// ---

import {html} from '//resources/lit/v3_0/lit.rollup.js';

import type {CommentsAppElement} from './app.js';

export function getHtml(this: CommentsAppElement) {
  return html`<!--_html_template_start_-->
<div></div>
<!--_html_template_end_-->`;
}
