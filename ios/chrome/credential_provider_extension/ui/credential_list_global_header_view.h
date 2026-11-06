// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Credential list global header view interface
// summary: Declares CredentialListGlobalHeaderView, a reusable table header/footer view for the credential list.
// ---

#ifndef IOS_CHROME_CREDENTIAL_PROVIDER_EXTENSION_UI_CREDENTIAL_LIST_GLOBAL_HEADER_VIEW_H_
#define IOS_CHROME_CREDENTIAL_PROVIDER_EXTENSION_UI_CREDENTIAL_LIST_GLOBAL_HEADER_VIEW_H_

#import <UIKit/UIKit.h>

@interface CredentialListGlobalHeaderView : UITableViewHeaderFooterView

// ReuseID for this class.
@property(class, readonly) NSString* reuseID;

@end

#endif  // IOS_CHROME_CREDENTIAL_PROVIDER_EXTENSION_UI_CREDENTIAL_LIST_GLOBAL_HEADER_VIEW_H_
