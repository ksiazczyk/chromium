// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Header for the Pix validator fuzzer utility
// summary: Declares the fuzzer regex pattern constant used to generate Pix code test inputs.
// ---

#ifndef COMPONENTS_FACILITATED_PAYMENTS_CORE_VALIDATION_PIX_VALIDATOR_FUZZER_UTIL_H_
#define COMPONENTS_FACILITATED_PAYMENTS_CORE_VALIDATION_PIX_VALIDATOR_FUZZER_UTIL_H_

namespace payments::facilitated {

// The regular expression pattern for a valid Pix code, as used by the fuzzer
// tests to generate more test cases.
extern const char kPixValidatorFuzzerDomainRegexPattern[];

}  // namespace payments::facilitated

#endif  // COMPONENTS_FACILITATED_PAYMENTS_CORE_VALIDATION_PIX_VALIDATOR_FUZZER_UTIL_H_
