// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Bookmarks folder chooser mediator delegate protocol
// summary: Defines the delegate protocol the mediator uses to request dismissal of the folder chooser UI.
// ---

#ifndef IOS_CHROME_BROWSER_BOOKMARKS_FOLDER_CHOOSER_COORDINATOR_BOOKMARKS_FOLDER_CHOOSER_MEDIATOR_DELEGATE_H_
#define IOS_CHROME_BROWSER_BOOKMARKS_FOLDER_CHOOSER_COORDINATOR_BOOKMARKS_FOLDER_CHOOSER_MEDIATOR_DELEGATE_H_

@class BookmarksFolderChooserMediator;

// Delegate protocol for the `BookmarksFolderChooserMediator` class.
@protocol BookmarksFolderChooserMediatorDelegate <NSObject>

// Called when folder chooser mediator wants to dismiss the UI.
- (void)bookmarksFolderChooserMediatorWantsDismissal:
    (BookmarksFolderChooserMediator*)mediator;

@end

#endif  // IOS_CHROME_BROWSER_BOOKMARKS_FOLDER_CHOOSER_COORDINATOR_BOOKMARKS_FOLDER_CHOOSER_MEDIATOR_DELEGATE_H_
