// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Content script that changes the page title
// summary: Test content script that sets the document title to 'I CHANGED TITLE!!!' when injected into a page.
// ---

document.title = 'I CHANGED TITLE!!!';
