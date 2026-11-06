// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Extension page script throwing a test exception
// summary: Extension page fixture that throws a literal exception so the test can verify uncaught exception logging in extension pages.
// ---

// The test is counting on an error of a particular type being thrown. As such,
// throw a literal.
// eslint-disable-next-line no-throw-literal
throw 'Exception thrown in extension page.';
