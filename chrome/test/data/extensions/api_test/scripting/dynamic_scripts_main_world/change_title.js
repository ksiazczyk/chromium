// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Content script that sets the page title by execution world
// summary: Test fixture content script that changes the document title depending on whether window.mainWorldFlag was set from the main world.
// ---

// Changes the document's title based on the existence/value of
// window.mainWorldFlag, which is set by a script that's part of a web page.
document.title = window.mainWorldFlag === 'from main world' ? 'MAIN_WORLD' :
                                                              'ISOLATED_WORLD';
