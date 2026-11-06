// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Inaccessible iframe contents test script
// summary: Test script that calls chrome.test.notifyFail when loaded, verifying that an iframe from another extension not listed in web_accessible_resources is blocked.
// ---

console.info('here');
chrome.test.notifyFail(
    'Iframe from another extension not listed in ' +
    'web_accessible_resources should not have been loaded');
