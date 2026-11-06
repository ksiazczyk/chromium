// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: User script that sets the document title
// summary: User script that changes the document title to NEW TITLE, used as a fixture by the userScripts register API tests.
// ---

document.title = 'NEW TITLE';
