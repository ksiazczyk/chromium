// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Content script reporting main element color
// summary: 'Content script that replies to messages with the computed color of the #main element so tests can verify CSS state.'
// ---

'use strict';

chrome.runtime.onMessage.addListener((message, sender, sendResponse) => {
  const element = document.getElementById('main');
  const style = getComputedStyle(element);
  const color = style.getPropertyValue('color');
  sendResponse(color);
});
