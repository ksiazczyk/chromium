// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Credential import manager Swift bridging header
// summary: Bridging header exposing pure Objective-C credential exchange types, such as passwords, passkeys, and import stats, to Swift import code.
// ---

#ifndef IOS_CHROME_BROWSER_CREDENTIAL_EXCHANGE_MODEL_CREDENTIAL_IMPORT_MANAGER_SWIFT_BRIDGE_H_
#define IOS_CHROME_BROWSER_CREDENTIAL_EXCHANGE_MODEL_CREDENTIAL_IMPORT_MANAGER_SWIFT_BRIDGE_H_

// Bridging header between Swift and Obj-C. These types/imports need to be pure
// Obj-C and have no C++ in them.

#import "ios/chrome/browser/credential_exchange/model/credential_exchange_passkey.h"
#import "ios/chrome/browser/credential_exchange/model/credential_exchange_password.h"
#import "ios/chrome/browser/credential_exchange/model/import_stats.h"

#endif  // IOS_CHROME_BROWSER_CREDENTIAL_EXCHANGE_MODEL_CREDENTIAL_IMPORT_MANAGER_SWIFT_BRIDGE_H_
