// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background service worker for the no-certs native messaging test extension
// summary: Service worker that calls chrome.runtime.sendNativeMessage to the Android test app and reports success, errors, or unexpected responses via chrome.test.sendMessage.
// ---

try {
  chrome.runtime.sendNativeMessage(
      {application: 'org.chromium.chrome.tests.support'}, {text: 'hello'},
      (response) => {
        if (chrome.runtime.lastError) {
          chrome.test.sendMessage(`error: ${chrome.runtime.lastError.message}`);
        } else if (
            response && response.echo && response.echo.text === 'hello') {
          chrome.test.sendMessage('success');
        } else {
          chrome.test.sendMessage(
              `unexpected response: ${JSON.stringify(response)}`);
        }
      });
} catch (e) {
  chrome.test.sendMessage(`caught error: ${e.message}`);
}
