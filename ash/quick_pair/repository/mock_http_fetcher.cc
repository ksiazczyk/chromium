// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock HTTP fetcher implementation
// summary: Implements the MockHttpFetcher constructor and destructor for the mocked HttpFetcher used in tests.
// ---

#include "ash/quick_pair/repository/mock_http_fetcher.h"

namespace ash {
namespace quick_pair {

MockHttpFetcher::MockHttpFetcher() : HttpFetcher() {}

MockHttpFetcher::~MockHttpFetcher() = default;

}  // namespace quick_pair
}  // namespace ash
