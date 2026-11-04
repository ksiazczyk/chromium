// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Help app test message interfaces
// summary: Defines TypeScript interfaces for test message data exchanged between the host and guest contexts.
// ---

/** Reply to test messages. Contents depend on the test message sent. */
export interface TestMessageResponseData {
  testQueryResult: string;
  testQueryResultData?: any;
}

/** Data for the "run-test-case" Message Pipe message. */
export interface TestMessageRunTestCase {
  testCase: string;
}
