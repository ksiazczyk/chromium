// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Content script self-injection test
// summary: Chrome test that loads another extension's frame and fails or succeeds based on whether the injected content script changed its content.
// ---

chrome.test.runTests([function contentSelfInjectTest() {
  window.addEventListener('message', function(event) {
    const msg = event.data;
    if (msg === 'original') {
      console.info('INJECTOR: No content changed.');
      chrome.test.fail('INJECTOR: No content changed!');
    } else {
      console.info(`INJECTOR: Successfully self-injected content - ${msg}`);
      chrome.test.succeed();
    }
  }, false);

  chrome.test.getConfig(function(config) {
    chrome.test.log('Creating tab...');
    const testUrl = `http://a.com:${config.testServer.port}` +
        '/extensions/api_test/content_scripts/other_extensions/' +
        `iframe_content.html#${escape(chrome.runtime.getURL('test.html'))}`;
    console.info(`Opening frame: ${testUrl}`);
    document.getElementById('content_frame').src = testUrl;
  });
}]);
