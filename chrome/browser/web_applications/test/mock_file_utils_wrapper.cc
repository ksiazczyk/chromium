// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: MockFileUtilsWrapper implementation
// summary: Implements the MockFileUtilsWrapper constructor and destructor for the gmock mock of FileUtilsWrapper used in web app tests.
// ---

#include "chrome/browser/web_applications/test/mock_file_utils_wrapper.h"

namespace web_app {

MockFileUtilsWrapper::MockFileUtilsWrapper() = default;
MockFileUtilsWrapper::~MockFileUtilsWrapper() = default;

}  // namespace web_app
