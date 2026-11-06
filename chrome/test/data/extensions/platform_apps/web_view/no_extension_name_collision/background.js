// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script regression test for guest view name collisions
// summary: Declares constants named like guest view globals to verify the extension background page throws no redeclaration syntax error, a regression test for crbug.com/40653142.
// ---

// Regression test for https://crbug.com/40653142
// Since this is an extension's background page, the following lines should not
// throw a syntax error due to redeclaration.
const ExtensionOptions = {};
const AppView = {};
const WebView = {};
window.testPassed = true;
