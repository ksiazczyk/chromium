// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: PasskeyRequestDetails testing category interface
// summary: Declares a testing category on PasskeyRequestDetails exposing extra initializers and large blob support checks for unit tests.
// ---

#ifndef IOS_CHROME_CREDENTIAL_PROVIDER_EXTENSION_PASSKEY_REQUEST_DETAILS_TESTING_H_
#define IOS_CHROME_CREDENTIAL_PROVIDER_EXTENSION_PASSKEY_REQUEST_DETAILS_TESTING_H_

#import <AuthenticationServices/AuthenticationServices.h>

#import "ios/chrome/credential_provider_extension/passkey_request_details.h"

// Unit test interface for PasskeyRequestDetails.
@interface PasskeyRequestDetails (Testing)

+ (BOOL)isLargeBlobSupportRequestedFromRegistrationInput:
    (ASPasskeyRegistrationCredentialExtensionInput*)registrationInput;

// Init with the URL, to use as the relying party identifier.
- (instancetype)initWithURL:(NSString*)url
                   username:(NSString*)username
        excludedCredentials:(NSArray<NSData*>*)excludedCredentials;

@end

#endif  // IOS_CHROME_CREDENTIAL_PROVIDER_EXTENSION_PASSKEY_REQUEST_DETAILS_TESTING_H_
