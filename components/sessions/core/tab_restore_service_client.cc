// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Tab restore service client implementation
// summary: Provides the default destructor and OnTabRestored implementation for the TabRestoreServiceClient interface.
// ---

#include "components/sessions/core/tab_restore_service_client.h"

namespace sessions {

TabRestoreServiceClient::~TabRestoreServiceClient() = default;

void TabRestoreServiceClient::OnTabRestored(const GURL& url) {}

}  // namespace sessions
