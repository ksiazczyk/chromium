// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Unload storage test script 1
// summary: Test script for the tabs API basics extension test that sets did_run_unload_1 to yes in chrome.storage.local when its page unloads.
// ---

window.addEventListener('unload', (e) => {
  chrome.storage.local.set({'did_run_unload_1': 'yes'});
});
