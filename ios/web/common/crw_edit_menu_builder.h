// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: CRWEditMenuBuilder protocol header
// summary: Defines the CRWEditMenuBuilder protocol for objects that customize the iOS edit menu through a UIMenuBuilder.
// ---

#ifndef IOS_WEB_COMMON_CRW_EDIT_MENU_BUILDER_H_
#define IOS_WEB_COMMON_CRW_EDIT_MENU_BUILDER_H_

#import <UIKit/UIKit.h>

// Any object that adopts this protocol can customize the edit menu.
@protocol CRWEditMenuBuilder <NSObject>

- (void)buildMenuWithBuilder:(id<UIMenuBuilder>)builder;

@end

#endif  // IOS_WEB_COMMON_CRW_EDIT_MENU_BUILDER_H_
