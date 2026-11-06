// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script for window.open popup test
// summary: Extension background script that opens content.html via window.open as part of the ChromeOS window.open extension API test.
// ---

window.open('content.html', 'content', '');
