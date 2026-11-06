// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Injected script setting the document title
// summary: Script injected via chrome.tabs.executeScript from a file to verify file-based script injection sets the tab title to executeScript1.
// ---

document.title = 'executeScript1';
