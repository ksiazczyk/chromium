// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Fullscreen content adjustment utility declaration
// summary: Declares MoveContentBelowHeader, which adjusts web view content offset and padding so content stays visible under the header.
// ---

#ifndef IOS_CHROME_BROWSER_FULLSCREEN_UI_BUNDLED_FULLSCREEN_CONTENT_ADJUSTMENT_UTIL_H_
#define IOS_CHROME_BROWSER_FULLSCREEN_UI_BUNDLED_FULLSCREEN_CONTENT_ADJUSTMENT_UTIL_H_

#import <Foundation/Foundation.h>

@protocol CRWWebViewProxy;
class FullscreenModel;

// Updates `proxy`'s content offset and top padding to ensure that the content
// is fully visible under the header.
void MoveContentBelowHeader(id<CRWWebViewProxy> proxy, FullscreenModel* model);

#endif  // IOS_CHROME_BROWSER_FULLSCREEN_UI_BUNDLED_FULLSCREEN_CONTENT_ADJUSTMENT_UTIL_H_
