// Copyright 2009 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Change page title test content script
// summary: Content script fixture that sets the document title to 'modified' so the incognito content scripts API test can detect injection.
// ---

document.title = 'modified';
