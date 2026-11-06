// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ListItem base class holding model data for a list item
// summary: Declares the abstract ListItem base class that holds model data, a client-defined type and the cell class used with the item.
// ---

#ifndef IOS_CHROME_BROWSER_SHARED_UI_LIST_MODEL_LIST_ITEM_H_
#define IOS_CHROME_BROWSER_SHARED_UI_LIST_MODEL_LIST_ITEM_H_

#import <UIKit/UIKit.h>

// ListItem holds the model data for a given list item.  This is intended to be
// an abstract base class; callers should use one of the {collectionview,
// tableview}-specific subclasses.
@interface ListItem : NSObject <UIAccessibilityIdentification>

// A client-defined value.
@property(nonatomic, readonly, assign) NSInteger type;

// The cell class to use in conjunction with this item.
@property(nonatomic, strong) Class cellClass;

- (instancetype)initWithType:(NSInteger)type NS_DESIGNATED_INITIALIZER;

@end

#endif  // IOS_CHROME_BROWSER_SHARED_UI_LIST_MODEL_LIST_ITEM_H_
