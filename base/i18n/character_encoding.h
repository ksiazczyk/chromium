// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Canonical encoding name API
// summary: Declares GetCanonicalEncodingNameByAliasName, which returns the canonical encoding name for a given encoding alias.
// ---

#ifndef BASE_I18N_CHARACTER_ENCODING_H_
#define BASE_I18N_CHARACTER_ENCODING_H_

#include <string>

#include "base/i18n/base_i18n_export.h"

namespace base {

// Return canonical encoding name according to the encoding alias name.
BASE_I18N_EXPORT std::string GetCanonicalEncodingNameByAliasName(
    const std::string& alias_name);

}  // namespace base

#endif  // BASE_I18N_CHARACTER_ENCODING_H_
