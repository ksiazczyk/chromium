// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: SQLite result code test matchers
// summary: Provides gmock matchers that verify the primary result or error code of SQLite result codes in tests.
// ---

#ifndef SQL_TEST_MATCHERS_H_
#define SQL_TEST_MATCHERS_H_

#include "sql/sqlite_result_code.h"
#include "testing/gmock/include/gmock/gmock.h"

namespace sql::test {

// Matcher verifying that the primary result code of an `SqliteResultCode`
// matches `expected`.
MATCHER_P(PrimaryResultIs, expected, "") {
  return ToPrimaryResultCode(arg) == expected;
}

// Matcher verifying that the primary error code of an `SqliteErrorCode` matches
// `expected`.
MATCHER_P(PrimaryErrorIs, expected, "") {
  return ToPrimaryErrorCode(arg) == expected;
}

}  // namespace sql::test

#endif  // SQL_TEST_MATCHERS_H_
