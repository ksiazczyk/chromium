// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Address validation types for the autofill profile bridge
// summary: Defines the AddressValidationType enum that selects between PaymentRequest and account address validation rules for Android.
// ---

#ifndef CHROME_BROWSER_AUTOFILL_ANDROID_AUTOFILL_PROFILE_BRIDGE_H_
#define CHROME_BROWSER_AUTOFILL_ANDROID_AUTOFILL_PROFILE_BRIDGE_H_

namespace autofill {

// Specifies which rules are to be used for address validation.
// GENERATED_JAVA_ENUM_PACKAGE: org.chromium.chrome.browser.autofill
enum class AddressValidationType {
  // Validation rules used for the PaymentRequest API (e.g. for billing
  // addresses).
  kPaymentRequest = 0,
  // Validation rules used for addresses stored in the user account.
  kAccount = 1
};

}  // namespace autofill

#endif  // CHROME_BROWSER_AUTOFILL_ANDROID_AUTOFILL_PROFILE_BRIDGE_H_
