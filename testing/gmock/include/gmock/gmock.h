// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: gmock.h forwarding header
// summary: Chromium forwarding header that includes the main gmock.h header from third_party/googletest until the Google Test layout stabilizes.
// ---

#ifndef TESTING_GMOCK_INCLUDE_GMOCK_GMOCK_H_
#define TESTING_GMOCK_INCLUDE_GMOCK_GMOCK_H_

// The file/directory layout of Google Test is not yet considered stable. Until
// it stabilizes, Chromium code will use forwarding headers in testing/gtest
// and testing/gmock, instead of directly including files in
// third_party/googletest.

#include "third_party/googletest/src/googlemock/include/gmock/gmock.h"  // IWYU pragma: export

#endif  // TESTING_GMOCK_INCLUDE_GMOCK_GMOCK_H_
