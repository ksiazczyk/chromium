// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background service worker of the DOM activity telemetry test extension
// summary: Service worker that injects a script into the active tab when the extension action is clicked, triggering the script injection telemetry signal.
// ---

chrome.action.onClicked.addListener((tab) => {
  console.log('Action clicked, injecting script...');
  if (tab.id) {
    chrome.scripting.executeScript({
      target: {tabId: tab.id},
      func: () => {
        console.log(
            'Injected script running via chrome.scripting.executeScript.');
        // We can optionally trigger DOM signals from here as well,
        // but this call itself triggers TelemetrySignalType::kScriptInjection
        // according to the provided C++ code.
      }
    });
  }
});
