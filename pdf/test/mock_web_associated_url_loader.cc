// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock WebAssociatedURLLoader implementation
// summary: Provides an empty mock implementation of the WebAssociatedURLLoader for use in PDF tests.
// ---

#include "pdf/test/mock_web_associated_url_loader.h"

namespace chrome_pdf {

MockWebAssociatedURLLoader::MockWebAssociatedURLLoader() = default;
MockWebAssociatedURLLoader::~MockWebAssociatedURLLoader() = default;

}  // namespace chrome_pdf
