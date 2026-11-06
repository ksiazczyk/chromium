// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Content script for fetch and XHR extension test
// summary: Content script that reads the data_for_content_script resource via fetch() and XMLHttpRequest and reports Success or Failure back to the background page.
// ---

fetch(chrome.runtime.getURL('data_for_content_script'))
    .then(function(res) {
      return res.text();
    })
    .then(function(txt) {
      if (txt !== 'original data\n') {
        throw new Error(`Fetch() result error: ${txt}`);
      }
      return new Promise(function(resolve) {
        const xhr = new XMLHttpRequest();
        xhr.addEventListener('load', function() {
          resolve(xhr.response);
        });
        xhr.open('GET', chrome.runtime.getURL('data_for_content_script'));
        xhr.send();
      });
    })
    .then(function(txt) {
      if (txt !== 'original data\n') {
        throw new Error(`XMLHttpRequest result error: ${txt}`);
      }
      chrome.runtime.connect().postMessage('Success');
    })
    .catch(function(e) {
      chrome.runtime.connect().postMessage(`Failure: ${e}`);
    });
