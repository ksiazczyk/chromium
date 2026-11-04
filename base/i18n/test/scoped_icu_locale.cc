// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Scoped default ICU locale test helper
// summary: Implements ScopedDefaultIcuLocale, a RAII helper that sets the default ICU locale for a test and restores the original on destruction.
// ---

#include "base/i18n/test/scoped_icu_locale.h"

#include "base/i18n/icubridge/default_icu_locale.h"
#include "base/i18n/language_tag.h"

namespace base::i18n {

ScopedDefaultIcuLocale::ScopedDefaultIcuLocale(const LanguageTag& locale)
    : original_locale_(GetDefaultIcuLocale()) {
  SetDefaultIcuLocale(DefaultIcuLocaleSetterKey(), locale);
}

ScopedDefaultIcuLocale::~ScopedDefaultIcuLocale() {
  SetDefaultIcuLocale(DefaultIcuLocaleSetterKey(), original_locale_);
}

}  // namespace base::i18n
