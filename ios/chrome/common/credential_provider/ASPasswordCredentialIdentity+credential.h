// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ASPasswordCredentialIdentity credential category header
// summary: Declares a category on ASPasswordCredentialIdentity with an initializer that builds the identity from a Credential using a URL service identifier.
// ---

#ifndef IOS_CHROME_COMMON_CREDENTIAL_PROVIDER_ASPASSWORDCREDENTIALIDENTITY_CREDENTIAL_H_
#define IOS_CHROME_COMMON_CREDENTIAL_PROVIDER_ASPASSWORDCREDENTIALIDENTITY_CREDENTIAL_H_

#import <AuthenticationServices/AuthenticationServices.h>

@protocol Credential;

// Category on ASPasswordCredentialIdentity for convenience when working with
// Credentials.
@interface ASPasswordCredentialIdentity (Credential)

// Create instance from `credential` data.
- (instancetype)cr_initWithCredential:(id<Credential>)credential;

@end

#endif  // IOS_CHROME_COMMON_CREDENTIAL_PROVIDER_ASPASSWORDCREDENTIALIDENTITY_CREDENTIAL_H_
