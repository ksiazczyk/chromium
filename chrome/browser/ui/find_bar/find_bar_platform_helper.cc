// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: FindBarPlatformHelper implementation
// summary: Implements the platform helper factory, returning null on non-Mac platforms and providing the base constructor and destructor.
// ---

#include "chrome/browser/ui/find_bar/find_bar_platform_helper.h"

#include "build/build_config.h"

#if !BUILDFLAG(IS_MAC)
// static
std::unique_ptr<FindBarPlatformHelper> FindBarPlatformHelper::Create(
    FindBarController* find_bar_controller) {
  return nullptr;
}
#endif

FindBarPlatformHelper::FindBarPlatformHelper(
    FindBarController* find_bar_controller)
    : find_bar_controller_(find_bar_controller) {}

FindBarPlatformHelper::~FindBarPlatformHelper() = default;
