// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Notification creation on window blur
// summary: Creates a basic notification with two buttons when the app window is blurred and signals 'created' to the test.
// ---

const redDot = 'data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAUA' +
    'AAAFCAYAAACNbyblAAAAHElEQVQI12P4//8/w38GIAXDIBKE0DHxgljNBAAO' +
    '9TXL0Y4OHwAAAABJRU5ErkJggg==';

const options = {
  iconUrl: redDot,
  title: 'hi',
  message: 'there',
  type: 'basic',
  buttons: [{title: 'Button'}, {title: 'Button'}],
};

window.onblur = function() {
  chrome.notifications.create('test', options, function() {
    chrome.test.sendMessage('created');
  });
};
