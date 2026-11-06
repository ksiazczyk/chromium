// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: MockUkmDatabase implementation
// summary: Implements the constructor and destructor of the MockUkmDatabase used in unit tests.
// ---

#include "components/segmentation_platform/internal/database/mock_ukm_database.h"

#include "base/files/file_path.h"

namespace segmentation_platform {

MockUkmDatabase::MockUkmDatabase() = default;
MockUkmDatabase::~MockUkmDatabase() = default;

}  // namespace segmentation_platform
