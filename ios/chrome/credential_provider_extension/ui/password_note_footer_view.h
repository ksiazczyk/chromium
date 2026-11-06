// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Password note footer view header
// summary: Declares a table view footer that displays a secondary-color caption label for the password note section.
// ---

#ifndef IOS_CHROME_CREDENTIAL_PROVIDER_EXTENSION_UI_PASSWORD_NOTE_FOOTER_VIEW_H_
#define IOS_CHROME_CREDENTIAL_PROVIDER_EXTENSION_UI_PASSWORD_NOTE_FOOTER_VIEW_H_

#import <UIKit/UIKit.h>

@interface PasswordNoteFooterView : UITableViewHeaderFooterView

// ReuseID for this class.
@property(class, readonly) NSString* reuseID;

// Label to hold the actual text.
@property(nonatomic, strong) UILabel* textLabel;

@end

#endif  // IOS_CHROME_CREDENTIAL_PROVIDER_EXTENSION_UI_PASSWORD_NOTE_FOOTER_VIEW_H_
