// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mount test extension background script
// summary: Background script of the test extension that opens test.html to run the file browser mount tests.
// ---

chrome.tabs.create({url: 'test.html'});
