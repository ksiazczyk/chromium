// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: PasswordIssueContentItem interface header
// summary: Declares a table view item that wraps a PasswordIssue for the password issues list.
// ---

#ifndef IOS_CHROME_BROWSER_SETTINGS_UI_BUNDLED_PASSWORD_PASSWORD_ISSUES_PASSWORD_ISSUE_CONTENT_ITEM_H_
#define IOS_CHROME_BROWSER_SETTINGS_UI_BUNDLED_PASSWORD_PASSWORD_ISSUES_PASSWORD_ISSUE_CONTENT_ITEM_H_

#import "ios/chrome/browser/settings/ui_bundled/password/password_issues/password_issue.h"
#import "ios/chrome/browser/shared/ui/table_view/cells/table_view_url_item.h"

// Table view item used by `PasswordIssuesTableViewController`. It is created to
// hold `PasswordIssueWithForm`.
@interface PasswordIssueContentItem : TableViewURLItem

// Associated password issue. Settings this property will change `title` and
// `detailText`.
@property(nonatomic, strong) PasswordIssue* password;

@end

#endif  // IOS_CHROME_BROWSER_SETTINGS_UI_BUNDLED_PASSWORD_PASSWORD_ISSUES_PASSWORD_ISSUE_CONTENT_ITEM_H_
