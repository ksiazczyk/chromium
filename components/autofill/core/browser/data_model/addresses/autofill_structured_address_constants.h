// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Structured address constants
// summary: Defines name separator characters and a regular expression pattern for CJK name separators used by structured addresses.
// ---

#ifndef COMPONENTS_AUTOFILL_CORE_BROWSER_DATA_MODEL_ADDRESSES_AUTOFILL_STRUCTURED_ADDRESS_CONSTANTS_H_
#define COMPONENTS_AUTOFILL_CORE_BROWSER_DATA_MODEL_ADDRESSES_AUTOFILL_STRUCTURED_ADDRESS_CONSTANTS_H_

namespace autofill {

// List of name separators.
inline constexpr char16_t kNameSeparators[] = u" -";

// Regular expression pattern to match separators as used in CJK names:
// Included separators: \u002D, \u30FB, \u00B7, \u3000 or a simple space.
inline constexpr char kCjkNameSeparatorsRe[] = "(?:-|・|·|　|\\s+)";

}  // namespace autofill
#endif  // COMPONENTS_AUTOFILL_CORE_BROWSER_DATA_MODEL_ADDRESSES_AUTOFILL_STRUCTURED_ADDRESS_CONSTANTS_H_
