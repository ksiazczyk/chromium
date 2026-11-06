// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: SyncInvalidation version ordering implementation
// summary: Implements version-based ordering of sync invalidations, handling unknown-version cases for the syncer component.
// ---

#include "components/sync/base/sync_invalidation.h"

namespace syncer {

bool SyncInvalidation::LessThanByVersion(const SyncInvalidation& a,
                                         const SyncInvalidation& b) {
  if (a.IsUnknownVersion() && !b.IsUnknownVersion()) {
    return true;
  }

  if (!a.IsUnknownVersion() && b.IsUnknownVersion()) {
    return false;
  }

  if (a.IsUnknownVersion() && b.IsUnknownVersion()) {
    return false;
  }

  return a.GetVersion() < b.GetVersion();
}

SyncInvalidation::SyncInvalidation() = default;

SyncInvalidation::~SyncInvalidation() = default;

}  // namespace syncer
