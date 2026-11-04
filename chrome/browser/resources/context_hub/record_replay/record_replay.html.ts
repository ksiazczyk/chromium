// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Record and Replay HTML template
// summary: Lit HTML template for the RecordReplayElement, rendering a container with a heading and skeleton text for the Record and Replay feature.
// ---

import {html} from '//resources/lit/v3_0/lit.rollup.js';

import type {RecordReplayElement} from './record_replay.js';

export function getHtml(this: RecordReplayElement) {
  return html`
    <div id="container">
      <h2>Record and Replay</h2>
      <p>Skeleton code for Record and Replay feature.</p>
    </div>
  `;
}
