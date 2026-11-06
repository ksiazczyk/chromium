// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: NavigationHandleUserData implementation
// summary: Implements NavigationHandleUserData, defining the navigation handle user data key plus its constructor and destructor for attaching data to in-flight navigations.
// ---

#include "components/page_load_metrics/browser/navigation_handle_user_data.h"

namespace page_load_metrics {

NAVIGATION_HANDLE_USER_DATA_KEY_IMPL(NavigationHandleUserData);

NavigationHandleUserData::NavigationHandleUserData(
    content::NavigationHandle& navigation) {}

NavigationHandleUserData::~NavigationHandleUserData() = default;

}  // namespace page_load_metrics
