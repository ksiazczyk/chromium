// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ContentSuggestionsCommands protocol
// summary: Protocol defining commands to show the Set Up List see-more view and the add and edit modals for pinned sites.
// ---

#ifndef IOS_CHROME_BROWSER_CONTENT_SUGGESTIONS_UI_CONTENT_SUGGESTIONS_COMMANDS_H_
#define IOS_CHROME_BROWSER_CONTENT_SUGGESTIONS_UI_CONTENT_SUGGESTIONS_COMMANDS_H_

@class MostVisitedItem;

// Commands related to Content Suggestions.
@protocol ContentSuggestionsCommands

// Show the "See More" Set Up List view, which shows all items in the list.
// If `expanded` is YES, the view will use the "large" detent by default,
// otherwise the "medium" detent will be used.
- (void)showSetUpListSeeMoreMenuExpanded:(BOOL)expanded;

// Show the "Add site" modal.
- (void)showPinnedSiteCreator;

// Show the "Edit site" modal for `item`.
- (void)showPinnedSiteEditorForItem:(MostVisitedItem*)item;

@end

#endif  // IOS_CHROME_BROWSER_CONTENT_SUGGESTIONS_UI_CONTENT_SUGGESTIONS_COMMANDS_H_
