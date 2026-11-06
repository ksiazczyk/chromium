// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script for the onVolumeListChanged API test
// summary: Runs chrome.test checks that a newly mounted volume emits onVolumeListChanged and that getVolumeList reflects the updated volume count.
// ---

function runTests() {
  chrome.test.runTests([
    function onVolumeListChanged() {
      chrome.fileSystem.getVolumeList(
          chrome.test.callbackPass(function(volumeList) {
            const origLength = volumeList.length;

            // Confirm that adding a newly mounted volume emits an event, and
            // that the volume list is updated.
            chrome.fileSystem.onVolumeListChanged.addListener(
                chrome.test.callbackPass((event) => {
                  chrome.test.assertEq(origLength + 1, event.volumes.length);
                  chrome.fileSystem.getVolumeList(
                      chrome.test.callbackPass((volumeList) => {
                        chrome.test.assertEq(origLength + 1, volumeList.length);
                      }));
                }));
          }));
    },
  ]);
}

chrome.app.runtime.onLaunched.addListener(runTests);
