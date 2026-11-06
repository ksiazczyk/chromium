// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: User script world detection test script
// summary: Test helper that sets the document title based on window.mainWorldFlag to verify whether a user script runs in the main world or the user script world.
// ---

// Changes the document's title based on the existence/value of
// window.mainWorldFlag, which is set by a script that's part of a web page.
document.title = window.mainWorldFlag === 'from main world' ?
    'MAIN_WORLD' :
    'USER_SCRIPT_WORLD';
