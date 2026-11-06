// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: On print job finished test script
// summary: Browser test adding a listener for chrome.printingMetrics.onPrintJobFinished and checking the finished job's title.
// ---

chrome.printingMetrics.onPrintJobFinished.addListener(printJobInfo => {
  chrome.test.assertEqual('title', printJobInfo.title);
  chrome.test.notifyPass();
});
