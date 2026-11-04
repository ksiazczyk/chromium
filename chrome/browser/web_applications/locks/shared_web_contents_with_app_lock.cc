// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: SharedWebContentsWithAppLock implementation
// summary: Implements the lock description and grant logic for a lock that combines exclusive access to the shared web contents with locks on the given app ids.
// ---

#include "chrome/browser/web_applications/locks/shared_web_contents_with_app_lock.h"

#include <memory>

#include "chrome/browser/web_applications/locks/app_lock.h"
#include "chrome/browser/web_applications/locks/lock.h"
#include "chrome/browser/web_applications/locks/partitioned_lock_manager.h"
#include "chrome/browser/web_applications/locks/shared_web_contents_lock.h"

namespace web_app {

SharedWebContentsWithAppLockDescription::
    SharedWebContentsWithAppLockDescription(
        base::flat_set<webapps::AppId> app_ids)
    : LockDescription(std::move(app_ids),
                      LockDescription::Type::kAppAndWebContents) {}
SharedWebContentsWithAppLockDescription::
    SharedWebContentsWithAppLockDescription(
        SharedWebContentsWithAppLockDescription&&) = default;
SharedWebContentsWithAppLockDescription::
    ~SharedWebContentsWithAppLockDescription() = default;

SharedWebContentsWithAppLock::SharedWebContentsWithAppLock() = default;
SharedWebContentsWithAppLock::~SharedWebContentsWithAppLock() = default;

void SharedWebContentsWithAppLock::GrantLock(
    WebAppLockManager& lock_manager,
    content::WebContents& shared_web_contents) {
  GrantLockResources(lock_manager);
  GrantWithAppResources(lock_manager);
  GrantWithSharedWebContentsResources(lock_manager, shared_web_contents);
}

}  // namespace web_app
