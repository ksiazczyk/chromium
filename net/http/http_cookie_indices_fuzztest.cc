// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Fuzz test for Cookie-Indices header parsing
// summary: Fuzzes ParseCookieIndices with arbitrary HTTP header field values to check the robustness of the header parser.
// ---

#include "net/http/http_cookie_indices.h"
#include "net/http/http_response_headers.h"
#include "third_party/fuzztest/src/fuzztest/fuzztest.h"

namespace net {
namespace {

void FuzzParseFromHeader(std::string_view header_value) {
  auto headers = HttpResponseHeaders::Builder(HttpVersion(1, 1), "200 OK")
                     .AddHeader("cookie-indices", header_value)
                     .Build();
  ParseCookieIndices(*headers);
}

// While the range of well-formed values is in fact narrower (see field-value
// from RFC 9110), we might process HttpResponseHeaders which has filtered out
// only '\0', '\r' and '\n'.
auto HttpFieldValue() {
  return fuzztest::StringOf(fuzztest::Filter(
      [](char c) { return c != '\0' && c != '\n' && c != '\r'; },
      fuzztest::Arbitrary<char>()));
}

FUZZ_TEST(CookieIndicesFuzzTest, FuzzParseFromHeader)
    .WithDomains(HttpFieldValue());

}  // namespace
}  // namespace net
