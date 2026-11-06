// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock UKM data manager implementation
// summary: Implements the constructor and destructor of the MockUkmDataManager test double for the segmentation platform.
// ---

#include "components/segmentation_platform/internal/mock_ukm_data_manager.h"

namespace segmentation_platform {

MockUkmDataManager::MockUkmDataManager() = default;
MockUkmDataManager::~MockUkmDataManager() = default;

}  // namespace segmentation_platform
