// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script opening a 10000x10000 popup window
// summary: Opens content.html in a 10000x10000 pixel window as part of the ChromeOS extension window.open API test.
// ---

window.open('content.html', 'content', 'height=10000,width=10000');
