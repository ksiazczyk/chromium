// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Parser utility for Google API JSON responses
// summary: Declares shared JSON key constants for API responses and a helper to check whether a response has the expected resource kind.
// ---

#ifndef GOOGLE_APIS_COMMON_PARSER_UTIL_H_
#define GOOGLE_APIS_COMMON_PARSER_UTIL_H_

#include <string>

#include "base/values.h"

namespace google_apis {

// Common JSON names
constexpr char kApiResponseETagKey[] = "etag";
constexpr char kApiResponseIdKey[] = "id";
constexpr char kApiResponseItemsKey[] = "items";
constexpr char kApiResponseKindKey[] = "kind";
constexpr char kApiResponseNameKey[] = "name";
constexpr char kApiResponseNextPageTokenKey[] = "nextPageToken";

// Checks if the JSON is expected kind.
bool IsResourceKindExpected(const base::Value& value,
                            const std::string& expected_kind);

}  // namespace google_apis

#endif  // GOOGLE_APIS_COMMON_PARSER_UTIL_H_
