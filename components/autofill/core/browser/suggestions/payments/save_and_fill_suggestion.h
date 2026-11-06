// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Save and fill availability strong alias
// summary: Defines a strong boolean alias indicating whether the save and fill feature is available.
// ---

#ifndef COMPONENTS_AUTOFILL_CORE_BROWSER_SUGGESTIONS_PAYMENTS_SAVE_AND_FILL_SUGGESTION_H_
#define COMPONENTS_AUTOFILL_CORE_BROWSER_SUGGESTIONS_PAYMENTS_SAVE_AND_FILL_SUGGESTION_H_

#include "base/types/strong_alias.h"

namespace autofill {

// A strong alias for a boolean that indicates whether save and fill is
// available.
using SaveAndFillAvailability =
    base::StrongAlias<class SaveAndFillAvailabilityTag, bool>;

}  // namespace autofill

#endif  // COMPONENTS_AUTOFILL_CORE_BROWSER_SUGGESTIONS_PAYMENTS_SAVE_AND_FILL_SUGGESTION_H_
