// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Language detection details implementation
// summary: Implements the default constructor, copy constructor, and destructor for the LanguageDetectionDetails structure in the translate namespace.
// ---

#include "components/translate/core/common/language_detection_details.h"

namespace translate {

LanguageDetectionDetails::LanguageDetectionDetails() = default;

LanguageDetectionDetails::LanguageDetectionDetails(
    const LanguageDetectionDetails& other) = default;

LanguageDetectionDetails::~LanguageDetectionDetails() = default;

}  // namespace translate
