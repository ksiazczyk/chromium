// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Payment profile preferences registration
// summary: Registers the payments profile preferences for completed first transaction and the syncable canMakePayment enabled flag.
// ---

#include "components/payments/core/payment_prefs.h"

#include "components/pref_registry/pref_registry_syncable.h"

namespace payments {

void RegisterProfilePrefs(user_prefs::PrefRegistrySyncable* registry) {
  registry->RegisterBooleanPref(kPaymentsFirstTransactionCompleted, false);
  registry->RegisterBooleanPref(
      kCanMakePaymentEnabled, true,
      user_prefs::PrefRegistrySyncable::SYNCABLE_PREF);
}

}  // namespace payments
