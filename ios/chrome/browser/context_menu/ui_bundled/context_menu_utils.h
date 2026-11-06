// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Context menu utils header
// summary: Declares helpers that compute the context menu title and whether the title comes from an image.
// ---

#ifndef IOS_CHROME_BROWSER_CONTEXT_MENU_UI_BUNDLED_CONTEXT_MENU_UTILS_H_
#define IOS_CHROME_BROWSER_CONTEXT_MENU_UI_BUNDLED_CONTEXT_MENU_UTILS_H_

#include <UIKit/UIKit.h>

namespace web {
struct ContextMenuParams;
}

// Returns the title for the context menu `params`.
NSString* GetContextMenuTitle(web::ContextMenuParams params);

// Returns whether the title for context menu `params` is an image title.
bool IsImageTitle(web::ContextMenuParams params);

#endif  // IOS_CHROME_BROWSER_CONTEXT_MENU_UI_BUNDLED_CONTEXT_MENU_UTILS_H_
