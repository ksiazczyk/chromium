// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background service worker opening a new window
// summary: Service worker for the ChromeDriver test extension that creates a new browser window via chrome.windows.create().
// ---

chrome.windows.create();