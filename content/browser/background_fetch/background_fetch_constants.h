// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Background Fetch constants header
// summary: Declares Background Fetch constants, including the maximum number of parallel requests and the invalid request index value.
// ---

#ifndef CONTENT_BROWSER_BACKGROUND_FETCH_BACKGROUND_FETCH_CONSTANTS_H_
#define CONTENT_BROWSER_BACKGROUND_FETCH_BACKGROUND_FETCH_CONSTANTS_H_

namespace content {

// Maximum number of parallel requests that a Background Fetch should fetch.
constexpr size_t kMaximumBackgroundFetchParallelRequests = 1;

// Value used to refer to an invalid request index for Background Fetch.
constexpr int kInvalidBackgroundFetchRequestIndex = -1;

}  // namespace content

#endif  // CONTENT_BROWSER_BACKGROUND_FETCH_BACKGROUND_FETCH_CONSTANTS_H_
