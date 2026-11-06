// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Fuzzer utility with Pix code regex pattern
// summary: Defines the regular expression pattern that the fuzzer uses to generate Pix-code-like test inputs.
// ---

#include "components/facilitated_payments/core/validation/pix_validator_fuzzer_util.h"

namespace payments::facilitated {

const char kPixValidatorFuzzerDomainRegexPattern[] = "^([0-9]{4}.+)+$";

}  // namespace payments::facilitated
