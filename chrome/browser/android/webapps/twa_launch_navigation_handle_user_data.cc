// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: TWA launch navigation handle user data implementation
// summary: Implements the NavigationHandle user data that stores the launch token, launch parameters, and Digital Asset Links verification status for a TWA launch.
// ---

#include "chrome/browser/android/webapps/twa_launch_navigation_handle_user_data.h"

#include "chrome/browser/android/webapps/twa_launch_queue_tab_helper.h"
#include "components/webapps/browser/launch_queue/launch_queue.h"
#include "content/public/browser/navigation_handle.h"
#include "content/public/browser/web_contents.h"

namespace webapps {

TwaLaunchNavigationHandleUserData::~TwaLaunchNavigationHandleUserData() =
    default;

TwaLaunchNavigationHandleUserData::TwaLaunchNavigationHandleUserData(
    content::NavigationHandle& navigation_handle,
    int64_t launch_token,
    LaunchParams launch_params,
    DigitalAssetLinksVerificationStatus status)
    : launch_token_(launch_token),
      launch_params_(std::move(launch_params)),
      status_(status) {}

NAVIGATION_HANDLE_USER_DATA_KEY_IMPL(TwaLaunchNavigationHandleUserData);

}  // namespace webapps
