// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Content script that marks the document as injected
// summary: Content script for the privileged web contents API test that sets document.title to INJECTED so the test can detect its injection.
// ---

// Marks the document to signal that the content script was injected. The test
// checks document.title to detect injection.
document.title = 'INJECTED';
