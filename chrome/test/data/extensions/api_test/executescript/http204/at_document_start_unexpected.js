// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Unexpected document start marker script
// summary: Content script that sets a flag marking an unexpected run at document start, letting the test detect injection into the wrong page.
// ---

window.didRunAtDocumentStartUnexpected = true;
