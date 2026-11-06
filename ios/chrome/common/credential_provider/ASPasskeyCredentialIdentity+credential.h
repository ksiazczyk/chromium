// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ASPasskeyCredentialIdentity credential category header
// summary: Declares a category on ASPasskeyCredentialIdentity with an initializer that builds the identity from a Credential's rpId, username, credential ID, user handle and record identifier.
// ---

#ifndef IOS_CHROME_COMMON_CREDENTIAL_PROVIDER_ASPASSKEYCREDENTIALIDENTITY_CREDENTIAL_H_
#define IOS_CHROME_COMMON_CREDENTIAL_PROVIDER_ASPASSKEYCREDENTIALIDENTITY_CREDENTIAL_H_

#import <AuthenticationServices/AuthenticationServices.h>

@protocol Credential;

// Category on ASPasskeyCredentialIdentity for convenience when working with
// Credentials.
@interface ASPasskeyCredentialIdentity (Credential)

// Create instance from `credential` data.
- (instancetype)cr_initWithCredential:(id<Credential>)credential;

@end

#endif  // IOS_CHROME_COMMON_CREDENTIAL_PROVIDER_ASPASSKEYCREDENTIALIDENTITY_CREDENTIAL_H_
