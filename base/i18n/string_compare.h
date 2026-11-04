// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: String comparison header
// summary: Declares CompareString16WithCollator for comparing UTF-16 strings with a specified ICU collator in the base::i18n namespace.
// ---

#ifndef BASE_I18N_STRING_COMPARE_H_
#define BASE_I18N_STRING_COMPARE_H_

#include <string_view>

#include "base/i18n/base_i18n_export.h"
#include "third_party/icu/source/i18n/unicode/coll.h"

namespace base {
namespace i18n {

// Compares the two strings using the specified collator.
BASE_I18N_EXPORT UCollationResult
CompareString16WithCollator(const icu::Collator& collator,
                            const std::u16string_view lhs,
                            const std::u16string_view rhs);

}  // namespace i18n
}  // namespace base

#endif  // BASE_I18N_STRING_COMPARE_H_
