// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Composebox menu mutator protocol
// summary: Declares the mutator protocol for the Composebox menu, with a callback for handling an item picked of a given menu item type.
// ---

#ifndef IOS_CHROME_BROWSER_COMPOSEBOX_MENU_UI_COMPOSEBOX_MENU_MUTATOR_H_
#define IOS_CHROME_BROWSER_COMPOSEBOX_MENU_UI_COMPOSEBOX_MENU_MUTATOR_H_

#import "ios/chrome/browser/composebox/menu/ui/composebox_menu_item_type.h"

// Mutator for the Composebox menu.
@protocol ComposeboxMenuMutator <NSObject>

// Handle an item picked of type `type`.
- (void)handleItemPickedWithType:(ComposeboxMenuItemType)type;

@end

#endif  // IOS_CHROME_BROWSER_COMPOSEBOX_MENU_UI_COMPOSEBOX_MENU_MUTATOR_H_
