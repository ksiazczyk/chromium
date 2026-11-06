// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Autofill constants implementation
// summary: Defines the settings origin constant and a helper that decides whether a disused Autofill entry's use date makes it deletable.
// ---

#include "components/autofill/core/common/autofill_constants.h"

#include "build/build_config.h"
#include "components/autofill/core/common/autofill_clock.h"
#include "components/autofill/core/common/autofill_features.h"

namespace autofill {

const char kSettingsOrigin[] = "Chrome settings";

bool IsAutofillEntryWithUseDateDeletable(base::Time use_date) {
  return use_date < AutofillClock::Now() - kDisusedDataModelDeletionTimeDelta;
}

}  // namespace autofill
