// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Promise app utils implementation
// summary: Implements IsPromiseAppCompleted, which reports whether a promise app installation has finished successfully or was cancelled.
// ---

#include "chrome/browser/apps/app_service/promise_apps/promise_app_utils.h"

namespace apps {

bool IsPromiseAppCompleted(apps::PromiseStatus status) {
  return status == PromiseStatus::kSuccess ||
         status == PromiseStatus::kCancelled;
}

}  // namespace apps
