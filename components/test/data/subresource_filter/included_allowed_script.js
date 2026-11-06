// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Allowed test script setting a document flag
// summary: Test JavaScript file that sets document.scriptExecuted to true so tests can verify this allowed script ran.
// ---

document.scriptExecuted = true;
