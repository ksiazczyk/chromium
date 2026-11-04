// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: MockDataRetriever implementation
// summary: Implements the MockDataRetriever constructor and destructor for the gmock mock of WebAppDataRetriever used in web app tests.
// ---

#include "chrome/browser/web_applications/test/mock_data_retriever.h"

namespace web_app {

MockDataRetriever::MockDataRetriever() = default;
MockDataRetriever::~MockDataRetriever() = default;

}  // namespace web_app
