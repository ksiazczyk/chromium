// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Core unwinders implementation for non-Android platforms
// summary: Provides non-Android implementations of unwind prerequisite checks and the core unwinders factory, delegating to the base implementation.
// ---

#include "chrome/common/profiler/core_unwinders.h"

#include "base/profiler/core_unwinders.h"
#include "build/build_config.h"

static_assert(!BUILDFLAG(IS_ANDROID),
              "Android platform should use core_unwinders_android.cc instead");

bool AreUnwindPrerequisitesAvailable(
    version_info::Channel channel,
    UnwindPrerequisitesDelegate* prerequites_delegate) {
  return true;
}

void RequestUnwindPrerequisitesInstallation(
    version_info::Channel channel,
    UnwindPrerequisitesDelegate* prerequites_delegate) {}

base::StackSamplingProfiler::UnwindersFactory CreateCoreUnwindersFactory() {
  // Delegate to the base implementation for non-Android.
  return base::CreateCoreUnwindersFactory();
}
