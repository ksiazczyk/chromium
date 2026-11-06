// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Autofill AI base item type enum
// summary: Declares the AutofillAIBaseItemType enum with header and entity item types used by Autofill AI settings pages.
// ---

#ifndef IOS_CHROME_BROWSER_SETTINGS_AUTOFILL_AUTOFILL_AND_PASSWORDS_UI_AUTOFILL_AI_BASE_ITEM_TYPE_H_
#define IOS_CHROME_BROWSER_SETTINGS_AUTOFILL_AUTOFILL_AND_PASSWORDS_UI_AUTOFILL_AI_BASE_ITEM_TYPE_H_

#import "ios/chrome/browser/shared/ui/list_model/list_model.h"

// Item types for Autofill AI settings pages.
enum AutofillAIBaseItemType {
  kAutofillAIBaseItemTypeHeader = kItemTypeEnumZero,
  kAutofillAIBaseItemTypeEntity,
};

#endif  // IOS_CHROME_BROWSER_SETTINGS_AUTOFILL_AUTOFILL_AND_PASSWORDS_UI_AUTOFILL_AI_BASE_ITEM_TYPE_H_
