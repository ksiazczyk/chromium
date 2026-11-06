// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Content script for injection test
// summary: Content script that rewrites the page's content element to prove it was injected into another extension's page.
// ---

console.info('INJECTOR: Injecting content script!');

const content = document.getElementById('content');
if (content) {
  content.innerText = 'Injected!!!';
  console.info('INJECTOR: Changed content to: ' + content.innerText);
} else {
  console.info('INJECTOR: Cannot find content!?');
}
