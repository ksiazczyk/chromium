// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Window Event Listener Service Worker
// summary: Service worker that registers chrome.windows listeners for bounds changed, created, focus changed, and removed events and logs each event.
// ---

importScripts('test_utils.js');

console.log(`Start adding window event listeners...`);

chrome.windows.onBoundsChanged.addListener(window => {
    console.log(`Window bounds changed: ${JSON.stringify(window)}`);
});
chrome.windows.onCreated.addListener(window => {
    console.log(`Window created: ${JSON.stringify(window)}`);
});
chrome.windows.onFocusChanged.addListener(windowId => {
    console.log(`Window focus changed - newly focused window: ${windowId}`);
});
chrome.windows.onRemoved.addListener(windowId => {
    console.log(`Window removed: ${windowId}`);
});

console.log(`Window event listeners added.`);
