// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Security token PIN request types and error labels
// summary: Declares the CodeType and ErrorLabel enums describing the information requested from the user and the errors shown during security token PIN requests.
// ---

#ifndef CHROMEOS_COMPONENTS_SECURITY_TOKEN_PIN_CONSTANTS_H_
#define CHROMEOS_COMPONENTS_SECURITY_TOKEN_PIN_CONSTANTS_H_

// This header contains types related to the security token PIN requests.

namespace chromeos {
namespace security_token_pin {

// Type of the information asked from the user during a security token PIN
// request.
enum class CodeType {
  kPin = 0,
  kPuk = 1,
};

// Error to be displayed in the security token PIN request.
enum class ErrorLabel {
  kNone = 0,
  kUnknown = 1,
  kInvalidPin = 2,
  kInvalidPuk = 3,
  kMaxAttemptsExceeded = 4,
};

}  // namespace security_token_pin
}  // namespace chromeos

#endif  // CHROMEOS_COMPONENTS_SECURITY_TOKEN_PIN_CONSTANTS_H_
