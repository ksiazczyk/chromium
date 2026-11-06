// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Get views popup tests
// summary: Browser tests checking that chrome.extension.getViews finds the views of an empty popup and a popup opened with a URL.
// ---

chrome.test.runTests([
  function canGetViewsOfEmptyPopup() {
    testGetNewWindowView({type: 'popup'}, []);
  },

  function canGetViewsOfPopupWithUrl() {
    const urls = ['a.html'];
    testGetNewWindowView({type: 'popup', url: urls}, urls);
  },
]);
