// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Autofill type utility header
// summary: Declares GetMostRelevantFieldType, which reduces the FieldTypes encapsulated by an AutofillType to a single most relevant one.
// ---

#ifndef COMPONENTS_ANDROID_AUTOFILL_BROWSER_AUTOFILL_TYPE_UTIL_H_
#define COMPONENTS_ANDROID_AUTOFILL_BROWSER_AUTOFILL_TYPE_UTIL_H_

#include "components/autofill/core/browser/autofill_type.h"
#include "components/autofill/core/browser/field_types.h"

namespace autofill {

// Picks the most relevant of the FieldTypes encapsulated by the given
// AutofillType to a single one: Password Manager > Credit > Addresses.
FieldType GetMostRelevantFieldType(const AutofillType& type);

}  // namespace autofill

#endif  // COMPONENTS_ANDROID_AUTOFILL_BROWSER_AUTOFILL_TYPE_UTIL_H_
