// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Viz test data path keys
// summary: Declares the Paths enum with the DIR_TEST_DATA key and the registration function for the viz test path provider.
// ---

#ifndef COMPONENTS_VIZ_TEST_PATHS_H_
#define COMPONENTS_VIZ_TEST_PATHS_H_

namespace viz {

class Paths {
 public:
  enum {
    PATH_START = 5000,

    // Valid only in development and testing environments.
    DIR_TEST_DATA,
    PATH_END
  };

  // Call once to register the provider for the path keys defined above.
  static void RegisterPathProvider();
};

}  // namespace viz

#endif  // COMPONENTS_VIZ_TEST_PATHS_H_
