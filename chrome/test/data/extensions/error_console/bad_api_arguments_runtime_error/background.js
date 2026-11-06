// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script triggering a runtime error with bad API arguments
// summary: Background script that calls chrome.alarms.getAll with an invalid argument to produce a runtime error for error console testing.
// ---

chrome.alarms.getAll('ThisShouldBeAFunction');
