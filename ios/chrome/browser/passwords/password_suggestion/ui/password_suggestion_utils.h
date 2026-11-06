// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Password suggestion utilities header
// summary: Declares helper functions returning the backup password suggestion icon and the default globe favicon attributes for the suggestion UI.
// ---

#ifndef IOS_CHROME_BROWSER_PASSWORDS_PASSWORD_SUGGESTION_UI_PASSWORD_SUGGESTION_UTILS_H_
#define IOS_CHROME_BROWSER_PASSWORDS_PASSWORD_SUGGESTION_UI_PASSWORD_SUGGESTION_UTILS_H_

#import <UIKit/UIKit.h>

@class FaviconAttributes;

// Returns the icon to display in the UI in order to visually differentiate a
// backup password suggestion from the main password suggestion.
UIImage* GetBackupPasswordSuggestionIcon();

// Returns the attributes for the default globe favicon.
FaviconAttributes* GetDefaultGlobeFaviconAttributes();

#endif  // IOS_CHROME_BROWSER_PASSWORDS_PASSWORD_SUGGESTION_UI_PASSWORD_SUGGESTION_UTILS_H_
