// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Content script for the Trusted Types bypass test
// summary: Content script that attempts to write 'bypass' into the page and reports to the extension background whether the write succeeded.
// ---

try {
  document.write('bypass');
} catch (e) {
}
const bypassSucess = document.body.innerText.indexOf('bypass') !== -1;
chrome.runtime.connect().postMessage(bypassSucess);
