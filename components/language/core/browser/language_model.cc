// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Language model details implementation
// summary: Implements the LanguageDetails constructors that pair a language code with an importance score in the user language model.
// ---

#include "components/language/core/browser/language_model.h"

#include <string_view>

namespace language {

LanguageModel::LanguageDetails::LanguageDetails() : LanguageDetails("", 0.0f) {}

LanguageModel::LanguageDetails::LanguageDetails(std::string_view in_lang_code,
                                                const float in_score)
    : lang_code(in_lang_code), score(in_score) {}

}  // namespace language
