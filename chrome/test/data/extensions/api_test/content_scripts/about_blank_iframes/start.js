// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Document-start script setting run flag
// summary: Document-start content script that sets a flag variable checked by end.js to confirm document_start execution.
// ---

// This variable will be checked in end.js
const hasRunContentScriptAtDocumentStart = true;
