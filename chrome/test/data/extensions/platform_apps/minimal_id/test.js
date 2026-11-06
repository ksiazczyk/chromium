// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script creating the minimal_id window
// summary: Listens for the app launch event and creates main.html as a window with ID 'minimal_id'.
// ---

chrome.app.runtime.onLaunched.addListener(function() {
  chrome.app.window.create('main.html', {id: 'minimal_id'});
});
