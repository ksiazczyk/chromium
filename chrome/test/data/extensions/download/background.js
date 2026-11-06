// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test extension background script
// summary: Background script of the download test extension that opens the test_download.html page in a new tab.
// ---

url = chrome.runtime.getURL('test_download.html');
chrome.tabs.create({'url': url});
