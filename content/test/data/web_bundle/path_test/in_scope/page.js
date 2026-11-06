// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: In scope page script for web bundle path test
// summary: Test script that sets the document title from page_info to verify in-scope script serving in the web bundle path test.
// ---

document.title = page_info + ' / in scope script from server';
