// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: TabStripTabItem interface
// summary: Declares a tab strip item subclassing WebStateTabSwitcherItem to represent individual tabs in the tab strip.
// ---

#ifndef IOS_CHROME_BROWSER_TAB_SWITCHER_TAB_STRIP_UI_TAB_STRIP_TAB_ITEM_H_
#define IOS_CHROME_BROWSER_TAB_SWITCHER_TAB_STRIP_UI_TAB_STRIP_TAB_ITEM_H_

#import "ios/chrome/browser/tab_switcher/ui_bundled/web_state_tab_switcher_item.h"

// Item for tabs in tab strip overriding the methods from
// WebStateTabSwitcherItem.
@interface TabStripTabItem : WebStateTabSwitcherItem

@end

#endif  // IOS_CHROME_BROWSER_TAB_SWITCHER_TAB_STRIP_UI_TAB_STRIP_TAB_ITEM_H_
