// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Language settings consumer protocol
// summary: Declares the consumer protocol for receiving updates when translate or accept language preferences change.
// ---

#ifndef IOS_CHROME_BROWSER_SETTINGS_UI_BUNDLED_LANGUAGE_LANGUAGE_SETTINGS_CONSUMER_H_
#define IOS_CHROME_BROWSER_SETTINGS_UI_BUNDLED_LANGUAGE_LANGUAGE_SETTINGS_CONSUMER_H_

#include <Foundation/Foundation.h>

// The consumer protocol for the LanguageSettingsDataSource.
@protocol LanguageSettingsConsumer

// Called when the value of translate::prefs::kOfferTranslateEnabled changes to
// `enabled`.
- (void)translateEnabled:(BOOL)enabled;

// Called when the value of language::prefs::kAcceptLanguages or
// translate::prefs::kBlockedLanguages change.
- (void)languagePrefsChanged;

@end

#endif  // IOS_CHROME_BROWSER_SETTINGS_UI_BUNDLED_LANGUAGE_LANGUAGE_SETTINGS_CONSUMER_H_
