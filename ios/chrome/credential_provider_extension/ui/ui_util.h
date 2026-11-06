// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Credential provider UI utilities header
// summary: Declares UI helpers returning the service identifier prompt and icons for password visibility, credential info and note errors.
// ---

#ifndef IOS_CHROME_CREDENTIAL_PROVIDER_EXTENSION_UI_UI_UTIL_H_
#define IOS_CHROME_CREDENTIAL_PROVIDER_EXTENSION_UI_UI_UTIL_H_

#import <UIKit/UIKit.h>

@class ASCredentialServiceIdentifier;

// Prompt for the top of the navigation controller telling what the current site
// is.
NSString* PromptForServiceIdentifiers(
    NSArray<ASCredentialServiceIdentifier*>* serviceIdentifiers);

// Returns the icon to show or hide a password.
UIImage* GetPasswordVisibilityIcon(bool is_visible);

// Returns the credential info icon.
UIImage* GetCredentialInfoIcon();

// Returns the note error icon.
UIImage* GetNoteErrorIcon();

#endif  // IOS_CHROME_CREDENTIAL_PROVIDER_EXTENSION_UI_UI_UTIL_H_
