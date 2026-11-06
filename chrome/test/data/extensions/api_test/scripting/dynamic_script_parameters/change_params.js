// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Change params content script
// summary: Test extension content script that sets chrome.scripting.globalParams to a changed value for the dynamic script parameters API test.
// ---

chrome.scripting.globalParams = {
  value: 'changed',
};
