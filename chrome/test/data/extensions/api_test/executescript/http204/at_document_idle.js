// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Document idle content script counter
// summary: Content script that increments a window counter each time it runs at document idle, used to verify script injection timing in the HTTP 204 test.
// ---

window.documentIdle = window.documentIdle ? documentIdle + 1 : 1;
