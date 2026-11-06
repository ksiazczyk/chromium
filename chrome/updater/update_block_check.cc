// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Metered network update block check, non-Windows
// summary: Non-Windows implementation of the metered network check that never blocks updates, since Linux and macOS lack metered connection detection.
// ---

#include "chrome/updater/update_block_check.h"

#include <utility>

#include "base/functional/callback.h"
#include "build/build_config.h"
#include "chrome/updater/update_service.h"

namespace updater {

#if !BUILDFLAG(IS_WIN)

// Linux and macOS don't have mechanisms to detect if a connection is metered.
void ShouldBlockUpdateForMeteredNetwork(
    UpdateService::Priority,
    base::OnceCallback<void(bool)> callback) {
  std::move(callback).Run(false);
}

#endif

}  // namespace updater
