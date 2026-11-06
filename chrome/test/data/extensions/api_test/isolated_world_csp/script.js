// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test script that sets the document title
// summary: JavaScript fixture that sets the document title, used as test payload in the isolated world CSP extension API test.
// ---

document.title = 'New Title';
