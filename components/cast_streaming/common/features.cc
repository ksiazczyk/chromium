// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Cast remoting feature flag helper
// summary: Implements IsCastRemotingEnabled, returning true or false based on the CAST_STREAMING_ENABLE_REMOTING build flag.
// ---

#include "components/cast_streaming/common/public/features.h"

#include "components/cast_streaming/buildflags.h"

namespace cast_streaming {

bool IsCastRemotingEnabled() {
#if BUILDFLAG(CAST_STREAMING_ENABLE_REMOTING)
  return true;
#else   // BUILDFLAG(CAST_STREAMING_ENABLE_REMOTING)
  return false;
#endif  // BUILDFLAG(CAST_STREAMING_ENABLE_REMOTING)
}

}  // namespace cast_streaming
