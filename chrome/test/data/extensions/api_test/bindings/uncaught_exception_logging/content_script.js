// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Content script throwing a test exception
// summary: Content script fixture that throws a literal exception so the test can verify uncaught exception logging in injected scripts.
// ---

// The test is counting on an error of a particular type being thrown. As such,
// throw a literal.
// eslint-disable-next-line no-throw-literal
throw 'Exception thrown in injected script.';
