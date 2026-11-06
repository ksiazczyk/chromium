// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Fake tab collection consumer declaration
// summary: Declares a fake TabCollectionConsumer exposing items, groups and selection for test verification.
// ---

#ifndef IOS_CHROME_BROWSER_TAB_SWITCHER_UI_BUNDLED_TEST_FAKE_TAB_COLLECTION_CONSUMER_H_
#define IOS_CHROME_BROWSER_TAB_SWITCHER_UI_BUNDLED_TEST_FAKE_TAB_COLLECTION_CONSUMER_H_

#import <vector>

#import "ios/chrome/browser/tab_switcher/ui_bundled/tab_collection_consumer.h"

namespace web {
class WebStateID;
}  // namespace web
class TabGroup;

#import "ios/chrome/browser/tab_switcher/ui_bundled/tab_grid/inactive_tabs/inactive_tabs_info_consumer.h"

// Test object that conforms to TabCollectionConsumer and exposes inner state
// for test verification.
@interface FakeTabCollectionConsumer
    : NSObject <InactiveTabsInfoConsumer, TabCollectionConsumer>

// The fake consumer only keeps the identifiers of items for simplicity.
@property(nonatomic, readonly) const std::vector<web::WebStateID>& items;
@property(nonatomic, readonly) const std::vector<const TabGroup*>& groups;
@property(nonatomic, strong) GridItemIdentifier* selectedItem;
@property(nonatomic, assign) TabGridMode mode;
@property(nonatomic, assign) BOOL multipleScenesAvailable;
@property(nonatomic, assign) NSUInteger replaceItemCount;

@end

#endif  // IOS_CHROME_BROWSER_TAB_SWITCHER_UI_BUNDLED_TEST_FAKE_TAB_COLLECTION_CONSUMER_H_
