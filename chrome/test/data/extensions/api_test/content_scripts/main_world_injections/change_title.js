// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Content script that sets document title by execution world
// summary: Test extension content script that sets the document title to MAIN_WORLD or ISOLATED_WORLD depending on the window.mainWorldFlag value.
// ---

// Changes the document's title based on the existence/value of
// window.mainWorldFlag, which is set by a script that's part of a web page.
document.title = window.mainWorldFlag === 'from main world' ? 'MAIN_WORLD' :
                                                              'ISOLATED_WORLD';
