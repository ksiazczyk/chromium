// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script redirecting the webview to the launch URL
// summary: Handles app launch, opens main.html, and points the embedded webview at the launched URL to verify no endless redirect loop occurs.
// ---

chrome.app.runtime.onLaunched.addListener(function (launchData) {
  // Complete correctness of launchData is tested in another test.
  chrome.test.assertNe('undefined', typeof launchData);

  chrome.app.window.create(
    "main.html",
    {},
    function(win) {
      win.contentWindow.onload = function() {
        // Redirect the embedded webview to the same URL we've been launched
        // with. This should not create an endless loop of redirecting on
        // ourselves with multiplying windows.
        var webview = win.contentWindow.document.getElementById('wv');
        webview.addEventListener("loadstop", function() {
          // The webview has successfully navigated. That means that redirection
          // didn't happen, as expected.
          chrome.test.sendMessage("Handler launched");
        });
        webview.src = launchData.url;
      }
    }
  );
});
