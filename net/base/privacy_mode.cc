// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Privacy mode debug string helper
// summary: Implements PrivacyModeToDebugString, converting PrivacyMode enum values into human-readable debug strings.
// ---

#include "net/base/privacy_mode.h"

#include "base/notreached.h"

namespace net {

const char* PrivacyModeToDebugString(PrivacyMode privacy_mode) {
  switch (privacy_mode) {
    case PRIVACY_MODE_DISABLED:
      return "disabled";
    case PRIVACY_MODE_ENABLED:
      return "enabled";
    case PRIVACY_MODE_ENABLED_WITHOUT_CLIENT_CERTS:
      return "enabled without client certs";
    case PRIVACY_MODE_ENABLED_PARTITIONED_STATE_ALLOWED:
      return "enabled partitioned state allowed";
  }
  NOTREACHED();
}

}  // namespace net
