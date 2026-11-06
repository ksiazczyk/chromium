// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: System identity capability result enum
// summary: Defines the SystemIdentityCapabilityResult enum with wire-stable values for account capability states of true, false, and unknown.
// ---

#ifndef IOS_CHROME_BROWSER_SIGNIN_MODEL_CAPABILITIES_TYPES_H_
#define IOS_CHROME_BROWSER_SIGNIN_MODEL_CAPABILITIES_TYPES_H_

// Value representing account capabilities. The enumerator values must not
// be changed as they correspond to the value exchanged on the wire with
// the server.
enum class SystemIdentityCapabilityResult {
  kFalse = 0,    // Capability not allowed for identity.
  kTrue = 1,     // Capability allowed for identity.
  kUnknown = 2,  // Capability not set for identity.
};

#endif  // IOS_CHROME_BROWSER_SIGNIN_MODEL_CAPABILITIES_TYPES_H_
