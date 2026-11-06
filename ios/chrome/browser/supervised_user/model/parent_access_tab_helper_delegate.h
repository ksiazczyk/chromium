// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Parent access tab helper delegate protocol
// summary: Objective-C protocol letting the ParentAccessTabHelper delegate hide the PACP bottom sheet and record metrics after processing widget messages.
// ---

#ifndef IOS_CHROME_BROWSER_SUPERVISED_USER_MODEL_PARENT_ACCESS_TAB_HELPER_DELEGATE_H_
#define IOS_CHROME_BROWSER_SUPERVISED_USER_MODEL_PARENT_ACCESS_TAB_HELPER_DELEGATE_H_

#import <Foundation/Foundation.h>

#import "components/supervised_user/core/common/supervised_user_constants.h"

// A delegate for the ParentAccessTabHelper to handle UI actions following the
// processing of PACP widget messages.
@protocol ParentAccessTabHelperDelegate <NSObject>

// Hides the PACP bottom sheet and records the relevant metrics.
- (void)hideParentAccessBottomSheetWithResult:
            (supervised_user::LocalApprovalResult)result
                                    errorType:
                                        (std::optional<
                                            supervised_user::
                                                LocalWebApprovalErrorType>)
                                            errorType;

@end

#endif  // IOS_CHROME_BROWSER_SUPERVISED_USER_MODEL_PARENT_ACCESS_TAB_HELPER_DELEGATE_H_
