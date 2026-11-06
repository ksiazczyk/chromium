// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Content script that changes the page title
// summary: Content script registered as a dynamic script; it sets the document title so the test can verify the script was injected and executed.
// ---

document.title = 'CHANGED TITLE!';
