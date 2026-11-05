// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: WebAuthn switch name constants
// summary: Defines string constants for WebAuthn command-line switch names, including remote proxied requests origins, enterprise attestation origins, and the GPM Magic Arch URL.
// ---

#include "chrome/browser/webauthn/webauthn_switches.h"

namespace webauthn::switches {

const char kRemoteProxiedRequestsAllowedAdditionalOrigin[] =
    "webauthn-remote-proxied-requests-allowed-additional-origin";

const char kPermitEnterpriseAttestationOriginList[] =
    "webauthn-permit-enterprise-attestation";

const char kGpmMagicArchUrlSwitch[] = "webauthn-gpm-magic-arch-url";

}  // namespace webauthn::switches
