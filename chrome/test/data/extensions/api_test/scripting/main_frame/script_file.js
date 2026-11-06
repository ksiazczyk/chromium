// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Injected script file setting the document title
// summary: Injected script fixture that sets the document title to 'Goodnight' when run via chrome.scripting.executeScript in the main frame tests.
// ---

document.title = 'Goodnight';
document.title;
