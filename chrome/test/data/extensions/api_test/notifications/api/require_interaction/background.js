// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Notifications requireInteraction test background script
// summary: Background script for the notifications API test that creates a basic notification with requireInteraction enabled and signals the test runner.
// ---

const redDot = 'data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAUA' +
    'AAAFCAYAAACNbyblAAAAHElEQVQI12P4//8/w38GIAXDIBKE0DHxgljNBAAO' +
    '9TXL0Y4OHwAAAABJRU5ErkJggg==';

const options = {
  iconUrl: redDot,
  title: 'hello',
  message: 'world',
  type: 'basic',
  requireInteraction: true,
};

chrome.notifications.create('test', options, () => chrome.test.sendMessage(''));
