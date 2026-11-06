// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: MV3 isolated world CSP JavaScript URL test
// summary: 'Navigates to a javascript: URL to verify that the MV3 isolated world CSP blocks JavaScript URL navigation in content scripts.'
// ---

location.href = 'javascript:document.title="New Title";';
chrome.test.notifyPass();
