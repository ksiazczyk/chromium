// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: EnterprisePromptType enum definition
// summary: Defines the EnterprisePromptType enum covering force sign out, restricted account and sync disabled prompts.
// ---

#ifndef IOS_CHROME_BROWSER_AUTHENTICATION_UI_BUNDLED_ENTERPRISE_ENTERPRISE_PROMPT_ENTERPRISE_PROMPT_TYPE_H_
#define IOS_CHROME_BROWSER_AUTHENTICATION_UI_BUNDLED_ENTERPRISE_ENTERPRISE_PROMPT_ENTERPRISE_PROMPT_TYPE_H_

#import <Foundation/Foundation.h>

// Enum that contains all type of enterprise prompt that can be displayed.
typedef NS_ENUM(NSInteger, EnterprisePromptType) {
  // Prompt displayed when sign in is disabled.
  EnterprisePromptTypeForceSignOut = 0,
  // Prompt displayed when account restrictions are enabled.
  EnterprisePromptTypeRestrictAccountSignedOut,
  // Prompt displayed when sync is disabled.
  EnterprisePromptTypeSyncDisabled,
};

#endif  // IOS_CHROME_BROWSER_AUTHENTICATION_UI_BUNDLED_ENTERPRISE_ENTERPRISE_PROMPT_ENTERPRISE_PROMPT_TYPE_H_
