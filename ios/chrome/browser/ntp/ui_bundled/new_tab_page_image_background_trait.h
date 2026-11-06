// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: New tab page image background trait declarations
// summary: Declares a custom UI trait definition and trait accessor extensions for tracking whether the new tab page has an image background.
// ---

#ifndef IOS_CHROME_BROWSER_NTP_UI_BUNDLED_NEW_TAB_PAGE_IMAGE_BACKGROUND_TRAIT_H_
#define IOS_CHROME_BROWSER_NTP_UI_BUNDLED_NEW_TAB_PAGE_IMAGE_BACKGROUND_TRAIT_H_

#import "ios/chrome/browser/shared/ui/util/custom_ui_trait_accessor.h"

// A trait definition for whether New Tab Page has an image background.
@interface NewTabPageImageBackgroundTrait : NSObject <UIObjectTraitDefinition>

// `UIObjectTraitDefinition`'s default value must be an object, so this exposes
// a version that is a BOOL.
+ (BOOL)defaultBoolValue;

@end

// Extension for the `CustomUITraitAccessor` class to add
// `NewTabPageImageBackgroundTrait`-related methods.
@interface CustomUITraitAccessor (NewTabPageImageBackgroundTrait)

// Sets the `NewTabPageImageBackgroundTrait` boolean value in a type-safe way.
- (void)setBoolForNewTabPageImageBackgroundTrait:(BOOL)boolean;

// Gets the `NewTabPageImageBackgroundTrait` boolean value in a type-safe way.
- (BOOL)boolForNewTabPageImageBackgroundTrait;

@end

// Extension for the `CustomUITraitAccessor` class to add
// `NewTabPageImageBackgroundTrait`-related methods.
@interface UITraitCollection (NewTabPageImageBackgroundTrait)

// Gets the `NewTabPageImageBackgroundTrait` boolean value in a type-safe way.
- (BOOL)boolForNewTabPageImageBackgroundTrait;

@end

#endif  // IOS_CHROME_BROWSER_NTP_UI_BUNDLED_NEW_TAB_PAGE_IMAGE_BACKGROUND_TRAIT_H_
