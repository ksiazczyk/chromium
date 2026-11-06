// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Content script that changes extension storage
// summary: Content script for b.com that sets a test value in chrome.storage.sync to trigger a storage change event.
// ---

chrome.storage.sync.set({test: true});
