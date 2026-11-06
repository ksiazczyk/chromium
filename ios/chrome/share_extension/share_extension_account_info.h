// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Share extension account info interface
// summary: Declares a model object holding a Google account's Gaia ID, full name, email and avatar for the share extension.
// ---

#ifndef IOS_CHROME_SHARE_EXTENSION_SHARE_EXTENSION_ACCOUNT_INFO_H_
#define IOS_CHROME_SHARE_EXTENSION_SHARE_EXTENSION_ACCOUNT_INFO_H_

#import <UIKit/UIKit.h>

@interface ShareExtensionAccountInfo : NSObject
@property(nonatomic, copy) NSString* gaiaIDString;
// May be nil.
@property(nonatomic, copy) NSString* fullName;
@property(nonatomic, copy) NSString* email;
@property(nonatomic, copy) UIImage* avatar;
@end

#endif  // IOS_CHROME_SHARE_EXTENSION_SHARE_EXTENSION_ACCOUNT_INFO_H_
