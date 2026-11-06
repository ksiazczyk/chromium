// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock credential list UI handler header
// summary: Declares a mock CredentialListUIHandler for unit tests, initialized with allowed credentials and a relying party identifier.
// ---

#ifndef IOS_CHROME_CREDENTIAL_PROVIDER_EXTENSION_UI_MOCK_CREDENTIAL_LIST_UI_HANDLER_H_
#define IOS_CHROME_CREDENTIAL_PROVIDER_EXTENSION_UI_MOCK_CREDENTIAL_LIST_UI_HANDLER_H_

#import "ios/chrome/credential_provider_extension/ui/credential_list_ui_handler.h"

// Mock implementation of CredentialListUIHandler for unit tests.
@interface MockCredentialListUIHandler : NSObject <CredentialListUIHandler>

@property(nonatomic, readonly) NSArray<NSData*>* allowedCredentials;

@property(nonatomic, readonly) NSString* relyingPartyIdentifier;

- (instancetype)initWithAllowedCredentials:(NSArray<NSData*>*)allowedCredentials
                    relyingPartyIdentifier:(NSString*)relyingPartyIdentifier;

@end

#endif  // IOS_CHROME_CREDENTIAL_PROVIDER_EXTENSION_UI_MOCK_CREDENTIAL_LIST_UI_HANDLER_H_
