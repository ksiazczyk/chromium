// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Second injected script appending to the document title
// summary: Second injected script fixture that returns the document title plus ' From Second Script', used to exercise script file injection.
// ---

document.title + ' From Second Script';
