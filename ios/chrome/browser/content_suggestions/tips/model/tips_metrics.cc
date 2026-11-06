// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Tips metrics constant definitions
// summary: Defines UMA histogram names and user action strings for the Tips (Magic Stack) module and password promo dismissals.
// ---

#import "ios/chrome/browser/content_suggestions/tips/model/tips_metrics.h"

const char kTipsMagicStackModuleDisplayedTypeHistogram[] =
    "IOS.TipsMagicStack.Module.DisplayedType";

const char kTipsMagicStackModuleTappedTypeHistogram[] =
    "IOS.TipsMagicStack.Module.TappedType";

const char kSavePasswordsPromoDismissedAction[] =
    "MobileSavePasswordsPromoDismissed";

const char kAutofillPasswordsPromoDismissedAction[] =
    "MobileAutofillPasswordsPromoDismissed";
