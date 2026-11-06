// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Language experiment feature definitions
// summary: Defines base feature flags for language and translate experiments such as detailed language settings, CCT auto translate, and the GmsCore ULP model.
// ---

#include "components/language/core/common/language_experiments.h"

namespace language {
// Features:
BASE_FEATURE(kDetailedLanguageSettings, base::FEATURE_ENABLED_BY_DEFAULT);
BASE_FEATURE(kCctAutoTranslate,
             "CCTAutoTranslate",
             base::FEATURE_ENABLED_BY_DEFAULT);

BASE_FEATURE(kTranslateOpenSettings, base::FEATURE_ENABLED_BY_DEFAULT);

BASE_FEATURE(kDisableGeoLanguageModel, base::FEATURE_ENABLED_BY_DEFAULT);

BASE_FEATURE(kGmsCoreUlp, base::FEATURE_DISABLED_BY_DEFAULT);

}  // namespace language
