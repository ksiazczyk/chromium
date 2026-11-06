// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Out scope script for web bundle path test
// summary: JavaScript test fixture, under a Chromium BSD license header, that sets the document title from page_info for the out scope web bundle path test.
// ---

document.title = page_info + ' / out scope script from server';
