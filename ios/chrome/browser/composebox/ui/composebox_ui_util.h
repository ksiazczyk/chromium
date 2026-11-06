// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Composebox UI util header
// summary: Declares ImageForIconResourceId, which returns an image for an omnibox icon resource ID at a given point size.
// ---

#ifndef IOS_CHROME_BROWSER_COMPOSEBOX_UI_COMPOSEBOX_UI_UTIL_H_
#define IOS_CHROME_BROWSER_COMPOSEBOX_UI_COMPOSEBOX_UI_UTIL_H_

#import <UIKit/UIKit.h>

#import "third_party/omnibox_proto/icon_resource_ids.pb.h"

// Returns an image for the given icon resource ID with the given point size, or
// nil if the ID is unspecified or unknown.
UIImage* ImageForIconResourceId(omnibox::IconResourceIds icon_id,
                                CGFloat point_size);

#endif  // IOS_CHROME_BROWSER_COMPOSEBOX_UI_COMPOSEBOX_UI_UTIL_H_
