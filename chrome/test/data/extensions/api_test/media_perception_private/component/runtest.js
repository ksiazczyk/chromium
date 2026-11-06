// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Tests for mediaPerceptionPrivate setAnalyticsComponent
// summary: Runs browser tests that set the analytics component to LIGHT and FULL, verifying install success, failure codes, and behavior while a process is running.
// ---

function setAnalyticsComponentLight() {
  chrome.mediaPerceptionPrivate.setAnalyticsComponent(
      {
        type: 'LIGHT',
      },
      chrome.test.callbackPass(function(componentState) {
        chrome.test.assertEq('INSTALLED', componentState.status);
        chrome.test.assertEq('1.0', componentState.version);
      }));
}

function setAnalyticsComponentFullExpectFailure() {
  chrome.mediaPerceptionPrivate.setAnalyticsComponent(
      {
        type: 'FULL',
      },
      chrome.test.callbackPass(function(componentState) {
        chrome.test.assertEq('FAILED_TO_INSTALL', componentState.status);
        chrome.test.assertEq('NOT_FOUND', componentState.installationErrorCode);
      }));
}

function setAnalyticsComponentWithProcessRunningSuccess() {
  chrome.mediaPerceptionPrivate.setState(
      {
        status: 'RUNNING',
        deviceContext: 'device_context',
      },
      chrome.test.callbackPass(function(state) {
        chrome.test.assertEq('RUNNING', state.status);
      }));

  chrome.mediaPerceptionPrivate.setAnalyticsComponent(
      {
        type: 'LIGHT',
      },
      chrome.test.callbackPass(function(componentState) {
        chrome.test.assertEq('INSTALLED', componentState.status);
        chrome.test.assertEq('1.0', componentState.version);
      }));
}

chrome.test.runTests([
  setAnalyticsComponentLight,
  setAnalyticsComponentFullExpectFailure,
  setAnalyticsComponentWithProcessRunningSuccess,
]);
