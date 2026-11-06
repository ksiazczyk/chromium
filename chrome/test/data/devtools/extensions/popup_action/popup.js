// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Popup Action test extension script
// summary: Script loaded by the popup page that signals test completion via chrome.test.notifyPass().
// ---

chrome.test.notifyPass();
