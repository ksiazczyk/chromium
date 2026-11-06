// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ListItem category letting view controllers set the item type
// summary: Declares a ListItem category that redeclares the type property as readwrite so only the managing view controllers can set the item type.
// ---

#ifndef IOS_CHROME_BROWSER_SHARED_UI_LIST_MODEL_LIST_ITEM_CONTROLLER_H_
#define IOS_CHROME_BROWSER_SHARED_UI_LIST_MODEL_LIST_ITEM_CONTROLLER_H_

// ListItem can be created with a default item type but it needs to
// have a valid item type to be inserted in the model. Only the
// UIViewControllers managing the item are allowed to set the item type.
@interface ListItem (Controller)

// Redeclared as readwrite.
@property(nonatomic, readwrite, assign) NSInteger type;

@end

#endif  // IOS_CHROME_BROWSER_SHARED_UI_LIST_MODEL_LIST_ITEM_CONTROLLER_H_
