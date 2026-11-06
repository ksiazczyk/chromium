// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock campaigns manager client implementation
// summary: Implements the constructor and destructor of MockCampaignsManagerClient, a gmock stub of CampaignsManagerClient used in tests.
// ---

#include "chromeos/ash/components/growth/mock_campaigns_manager_client.h"

namespace growth {

MockCampaignsManagerClient::MockCampaignsManagerClient() = default;
MockCampaignsManagerClient::~MockCampaignsManagerClient() = default;

}  // namespace growth
