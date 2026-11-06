// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Side panel action background service worker
// summary: Service worker for the test extension that opens the side panel on action click and reports readiness or failure to the Chrome test runner.
// ---

chrome.sidePanel.setPanelBehavior({openPanelOnActionClick: true})
    .catch(
        (error) => {return chrome.test.notifyFail(
            error ? error.toString() : 'Unknown error')})
    .then(() => chrome.test.sendMessage('running'));
