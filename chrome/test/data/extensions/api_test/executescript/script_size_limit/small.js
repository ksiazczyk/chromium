// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Small script fixture within the executeScript size limit
// summary: Fixture script that sets the page title to 'small' and stays under the size limit, used for the successful executeScript case.
// ---

document.title = 'small';
