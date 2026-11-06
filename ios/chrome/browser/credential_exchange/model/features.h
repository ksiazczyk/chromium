// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Credential exchange FIDO extensions feature declaration
// summary: Declares the kCredentialExchangeFidoExtensions kill switch feature controlling passkey extension import and export during credential exchange.
// ---

#ifndef IOS_CHROME_BROWSER_CREDENTIAL_EXCHANGE_MODEL_FEATURES_H_
#define IOS_CHROME_BROWSER_CREDENTIAL_EXCHANGE_MODEL_FEATURES_H_

#import "base/feature_list.h"

// Kill switch to disable import / export of FIDO passkey extensions during
// credential exchange.
BASE_DECLARE_FEATURE(kCredentialExchangeFidoExtensions);

#endif  // IOS_CHROME_BROWSER_CREDENTIAL_EXCHANGE_MODEL_FEATURES_H_
