// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Legacy language tag helper
// summary: Inline helper that returns the language subtag of a locale string by parsing it as a LanguageTag, returning an empty string on failure.
// ---

#ifndef BASE_I18N_LEGACY_LANGUAGE_TAG_HELPERS_H_
#define BASE_I18N_LEGACY_LANGUAGE_TAG_HELPERS_H_

#include <string>
#include <string_view>

#include "base/i18n/language_tag.h"
#include "base/i18n/tag_converters.h"

namespace base::i18n {

inline std::string GetLanguageSubtagUsingLanguageTag(std::string_view locale) {
  std::optional<LanguageTag> tag = GetLanguageTagFromString(locale);
  if (!tag) {
    return std::string();
  }
  return std::string(tag->language_subtag());
}

}  // namespace base::i18n

#endif  // BASE_I18N_LEGACY_LANGUAGE_TAG_HELPERS_H_
