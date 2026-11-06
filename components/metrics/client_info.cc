// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ClientInfo constructor and destructor definitions
// summary: Defines the constructor and destructor of the ClientInfo struct, which holds installation and reporting-enabled dates.
// ---

#include "components/metrics/client_info.h"

namespace metrics {

ClientInfo::ClientInfo() : installation_date(0), reporting_enabled_date(0) {}

ClientInfo::~ClientInfo() = default;

}  // namespace metrics
