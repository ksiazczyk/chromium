// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Data region policy handler implementation
// summary: Implements DataRegionPolicyHandler as an IntRangePolicyHandler that accepts data region policy values from 0 to 2 and maps them to a preference path.
// ---

#include "components/enterprise/browser/data_region/data_region_policy_handler.h"

namespace policy {

DataRegionPolicyHandler::DataRegionPolicyHandler(const char* policy_name,
                                                 const char* pref_path)
    : IntRangePolicyHandler(policy_name, pref_path, 0, 2, false) {}
DataRegionPolicyHandler::~DataRegionPolicyHandler() = default;

}  // namespace policy
