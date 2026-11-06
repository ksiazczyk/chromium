// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Omnibox autocomplete controller delegate protocol
// summary: Declares the delegate protocol for the omnibox autocomplete controller, covering suggestion updates, text alignment, semantic content, and suggestion groups.
// ---

#ifndef IOS_CHROME_BROWSER_OMNIBOX_MODEL_OMNIBOX_AUTOCOMPLETE_CONTROLLER_DELEGATE_H_
#define IOS_CHROME_BROWSER_OMNIBOX_MODEL_OMNIBOX_AUTOCOMPLETE_CONTROLLER_DELEGATE_H_

#import <UIKit/UIKit.h>

@protocol AutocompleteSuggestionGroup;
@class OmniboxAutocompleteController;

// The delegate for the OmniboxAutocompleteController.
@protocol OmniboxAutocompleteControllerDelegate

/// Notifies the delegate the new suggestions are available.
- (void)omniboxAutocompleteControllerDidUpdateSuggestions:
            (OmniboxAutocompleteController*)autocompleteController
                                           hasSuggestions:(BOOL)hasSuggestions
                                               isFocusing:(BOOL)isFocusing;

/// Notifies the delegate of text alignment change.
- (void)omniboxAutocompleteController:
            (OmniboxAutocompleteController*)omniboxAutocompleteController
               didUpdateTextAlignment:(NSTextAlignment)alignment;

/// Notifies the delegate of semantic content attribute change
- (void)omniboxAutocompleteController:
            (OmniboxAutocompleteController*)omniboxAutocompleteController
    didUpdateSemanticContentAttribute:
        (UISemanticContentAttribute)semanticContentAttribute;

/// Notifies the delegate of the updated suggestions groups.
- (void)omniboxAutocompleteController:
            (OmniboxAutocompleteController*)omniboxAutocompleteController
           didUpdateSuggestionsGroups:
               (NSArray<id<AutocompleteSuggestionGroup>>*)suggestionGroups;

@end

#endif  // IOS_CHROME_BROWSER_OMNIBOX_MODEL_OMNIBOX_AUTOCOMPLETE_CONTROLLER_DELEGATE_H_
