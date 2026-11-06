// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Permission dialog delegate header
// summary: Declares the PermissionDialogDelegate Objective-C interface that pairs a permission prompt with web contents for showing dialogs.
// ---

#ifndef COMPONENTS_PERMISSIONS_IOS_CONTENT_PERMISSION_PROMPT_PERMISSION_DIALOG_DELEGATE_H_
#define COMPONENTS_PERMISSIONS_IOS_CONTENT_PERMISSION_PROMPT_PERMISSION_DIALOG_DELEGATE_H_

#import <UIKit/UIKit.h>

namespace content {
class WebContents;
}

namespace permissions {
class PermissionPromptIOS;
}

@interface PermissionDialogDelegate : NSObject

- (instancetype)initWithPrompt:(permissions::PermissionPromptIOS*)prompt
                   webContents:(content::WebContents*)webContents;

@end

#endif  // COMPONENTS_PERMISSIONS_IOS_CONTENT_PERMISSION_PROMPT_PERMISSION_DIALOG_DELEGATE_H_
