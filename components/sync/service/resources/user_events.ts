// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: User event writer
// summary: Wires the create-event button to write a user event using the time and navigation ID inputs via chrome_sync.
// ---

import {assert} from 'chrome://resources/js/assert.js';

import {writeUserEvent} from './chrome_sync.js';

function write() {
  const timeInput =
      document.querySelector<HTMLInputElement>('#event-time-usec-input');
  const navigationInput =
      document.querySelector<HTMLInputElement>('#navigation-id-input');
  assert(timeInput && navigationInput);
  writeUserEvent(timeInput.value, navigationInput.value);
}

document.addEventListener('DOMContentLoaded', () => {
  const button = document.querySelector<HTMLElement>('#create-event-button');
  assert(button);
  button.addEventListener('click', write);
}, false);
