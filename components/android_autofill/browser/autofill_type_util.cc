// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Autofill type utility implementation
// summary: Implements GetMostRelevantFieldType, which picks the most relevant field type among password manager, credit card and address types.
// ---

#include "components/android_autofill/browser/autofill_type_util.h"

#include "components/autofill/core/browser/autofill_type.h"
#include "components/autofill/core/browser/field_types.h"

namespace autofill {

FieldType GetMostRelevantFieldType(const AutofillType& type) {
  if (FieldType field_type = type.GetPasswordManagerType();
      field_type != UNKNOWN_TYPE) {
    return field_type;
  }
  if (FieldType field_type = type.GetCreditCardType();
      field_type != UNKNOWN_TYPE) {
    return field_type;
  }
  if (FieldType field_type = type.GetAddressType();
      field_type != UNKNOWN_TYPE) {
    return field_type;
  }
  if (FieldTypeSet types = type.GetTypes(); !types.empty()) {
    return *types.begin();
  }
  return UNKNOWN_TYPE;
}

}  // namespace autofill
