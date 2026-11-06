// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test server root path constant for WebEngine tests
// summary: Defines the kTestServerRoot constant pointing to the directory of test data served by the embedded test server in WebEngine browser tests.
// ---

#include "fuchsia_web/webengine/test/test_data.h"

#include "base/files/file_path.h"

const char kTestServerRoot[] = "fuchsia_web/webengine/test/data";
