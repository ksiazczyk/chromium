// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: OmniboxIconFormatter header
// summary: Declares OmniboxIconFormatter, a SimpleOmniboxIcon subclass initialized from an AutocompleteMatch.
// ---

#ifndef IOS_CHROME_BROWSER_OMNIBOX_MODEL_SUGGESTIONS_OMNIBOX_ICON_FORMATTER_H_
#define IOS_CHROME_BROWSER_OMNIBOX_MODEL_SUGGESTIONS_OMNIBOX_ICON_FORMATTER_H_

#import <UIKit/UIKit.h>

#import "ios/chrome/browser/omnibox/model/suggestions/simple_omnibox_icon.h"

struct AutocompleteMatch;

@interface OmniboxIconFormatter : SimpleOmniboxIcon

- (instancetype)initWithMatch:(const AutocompleteMatch&)match;

@end

#endif  // IOS_CHROME_BROWSER_OMNIBOX_MODEL_SUGGESTIONS_OMNIBOX_ICON_FORMATTER_H_
