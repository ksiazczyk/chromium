// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Trust Tokens operating system matching implementation
// summary: Implements IsCurrentOperatingSystem, which checks whether a given OS value matches the operating system the code was built on, currently only recognizing Android.
// ---

#include "services/network/trust_tokens/operating_system_matching.h"

#include "build/build_config.h"

namespace network {

bool IsCurrentOperatingSystem(mojom::TrustTokenKeyCommitmentResult::Os os) {
#if BUILDFLAG(IS_ANDROID)
  return os == mojom::TrustTokenKeyCommitmentResult::Os::kAndroid;
#else
  return false;
#endif
}

}  // namespace network
