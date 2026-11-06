// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Content script that modifies the page title
// summary: Content script matched on a.com that sets window.title to Hello so the test script can detect whether the modify script actually ran.
// ---

window.title = 'Hello';
