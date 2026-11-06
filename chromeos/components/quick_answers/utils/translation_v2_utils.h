// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Translation v2 utils header
// summary: Declares the TranslationV2Utils class with a static IsSupported check for Translate v2 API language support.
// ---

#ifndef CHROMEOS_COMPONENTS_QUICK_ANSWERS_UTILS_TRANSLATION_V2_UTILS_H_
#define CHROMEOS_COMPONENTS_QUICK_ANSWERS_UTILS_TRANSLATION_V2_UTILS_H_

#include <string_view>

namespace quick_answers {

class TranslationV2Utils {
 public:
  static bool IsSupported(std::string_view);
};

}  // namespace quick_answers

#endif  // CHROMEOS_COMPONENTS_QUICK_ANSWERS_UTILS_TRANSLATION_V2_UTILS_H_
