// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Attestation switch declarations
// summary: Declares the kUseVaDevKeys switch that specifies whether to use the Verified Access server's DEV keys.
// ---

#ifndef COMPONENTS_ENTERPRISE_DEVICE_TRUST_CORE_ATTESTATION_ATTESTATION_SWITCHES_H_
#define COMPONENTS_ENTERPRISE_DEVICE_TRUST_CORE_ATTESTATION_ATTESTATION_SWITCHES_H_

namespace enterprise_connectors::switches {

// Specifies whether to use Verified Access server's DEV keys.
extern const char kUseVaDevKeys[];

}  // namespace enterprise_connectors::switches

#endif  // COMPONENTS_ENTERPRISE_DEVICE_TRUST_CORE_ATTESTATION_ATTESTATION_SWITCHES_H_
