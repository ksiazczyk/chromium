// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Tabs API sanity test script
// summary: Defines testTabsAPI, called from the C++ browser test to verify that extension APIs can be called from a page.
// ---

// This function is called from the C++ browser test. It do a basic sanity
// test that we can call extension APIs.
function testTabsAPI() {
  return new Promise(resolve => {
    chrome.tabs.query({active: true}, function(tabs) {
      resolve(tabs[0].title == document.title && tabs[0].url == location.href);
    });
  });
}
