// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Google Password Manager user verification policy implementation
// summary: Implements GpmWillDoUserVerification, deciding per platform whether Google Password Manager performs user verification for a given requirement.
// ---

#include "components/webauthn/core/browser/gpm_user_verification_policy.h"

#include "build/build_config.h"
#include "device/fido/public/fido_types.h"

namespace webauthn {

bool GpmWillDoUserVerification(device::UserVerificationRequirement requirement,
                               bool platform_has_biometrics) {
  switch (requirement) {
    case device::UserVerificationRequirement::kRequired:
      return true;
    case device::UserVerificationRequirement::kPreferred:
#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_IOS)
      return platform_has_biometrics;
#elif BUILDFLAG(IS_LINUX)
      return false;
#else
      // This default is for unit tests.
      return true;
#endif
    case device::UserVerificationRequirement::kDiscouraged:
      return false;
  }
}

}  // namespace webauthn
