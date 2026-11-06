// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script for browser is_app popup test
// summary: Background script of the test extension that opens popup windows via window.open to exercise is_app() behavior.
// ---

window.open('content.html', 'content', 'height=200,width=200');
window.open('a.com', 'a_com', 'height=200,width=200');
