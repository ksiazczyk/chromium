// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Permission usage session implementation
// summary: Implements validity checks for permission usage sessions, ensuring origins are not opaque and usage intervals are well formed.
// ---

#include "components/permissions/permission_usage_session.h"

#include <tuple>

namespace permissions {

bool PermissionUsageSession::IsValid() const {
  return !(origin.opaque() || usage_start.is_null() || usage_end.is_null() ||
           usage_end < usage_start);
}

}  // namespace permissions
