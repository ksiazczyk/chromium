// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Content script that sets the document title
// summary: Content script fixture that sets document.title to 'script injected' so tests can verify dynamic script injection.
// ---

document.title = 'script injected';
