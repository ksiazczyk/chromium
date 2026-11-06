// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script for small popup window.open test
// summary: Opens content.html in a 200x200 popup window as part of the ChromeOS window.open extension API test.
// ---

window.open('content.html', 'content', 'height=200,width=200');
