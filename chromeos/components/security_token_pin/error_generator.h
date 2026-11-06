// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Security token PIN error message generator declaration
// summary: Declares GenerateErrorMessage, which produces error messages for the security token PIN dialog based on error label, attempts left, and input acceptance.
// ---

#ifndef CHROMEOS_COMPONENTS_SECURITY_TOKEN_PIN_ERROR_GENERATOR_H_
#define CHROMEOS_COMPONENTS_SECURITY_TOKEN_PIN_ERROR_GENERATOR_H_

#include <string>

#include "base/component_export.h"
#include "chromeos/components/security_token_pin/constants.h"

namespace chromeos {
namespace security_token_pin {

// Generate an error message for a security pin token dialog, based on dialog
// parameters |error_label|, |attempts_left|, and |accept_input|.
COMPONENT_EXPORT(SECURITY_TOKEN_PIN)
std::u16string GenerateErrorMessage(ErrorLabel error_label,
                                    int attempts_left,
                                    bool accept_input);

}  // namespace security_token_pin
}  // namespace chromeos

#endif  // CHROMEOS_COMPONENTS_SECURITY_TOKEN_PIN_ERROR_GENERATOR_H_
