// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Included script test fixture
// summary: Test script fixture that sets document.scriptExecuted to true so tests can verify the included script was executed.
// ---

document.scriptExecuted = true;