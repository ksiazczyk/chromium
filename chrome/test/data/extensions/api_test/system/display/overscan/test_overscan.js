// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// system.display.overscan* api test
// browser_tests \
//   --gtest_filter=SystemDisplayApiTest.OverscanCalibrationApp

// ---docerion
// type: test
// title: Overscan calibration API test script
// summary: Runs a chrome.test suite that starts, adjusts, and completes overscan calibration for a display via the system.display API as part of a browser test.
// ---

chrome.test.runTests([
  function testOverscan() {
    const id = 'display0';
    chrome.system.display.overscanCalibrationStart(id);
    chrome.system.display.overscanCalibrationAdjust(
        id, {left: 1, top: 1, right: -1, bottom: -1});
    chrome.system.display.overscanCalibrationComplete(id);
    chrome.test.notifyPass();
  },
]);
