// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Slow tracing page logic
// summary: TypeScript that wires the enable and disable tracing buttons, sends tracing commands via chrome.send, and reacts to tracing preference changes.
// ---

import {addWebUIListener} from 'chrome://resources/ash/common/cr.m.js';
import {$} from 'chrome://resources/ash/common/util.js';

function initialize() {
  $('slow-disable').addEventListener('click', () => disableTracing());
  $('slow-enable').addEventListener('click', () => enableTracing());
  addWebUIListener('tracing-pref-changed', tracingPrefChanged);
}

function disableTracing() {
  chrome.send('disableTracing');
}

function enableTracing() {
  chrome.send('enableTracing');
}

function tracingPrefChanged(enabled: boolean) {
  $('slow-disable').hidden = !enabled;
  $('slow-enable').hidden = enabled;
}

document.addEventListener('DOMContentLoaded', () => {
  initialize();
  chrome.send('loadComplete');
});
