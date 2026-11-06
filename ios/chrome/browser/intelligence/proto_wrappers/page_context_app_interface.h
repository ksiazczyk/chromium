// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: App interface for fetching page context in integration tests
// summary: Declares an app interface letting integration tests fetch the latest annotated page content with configurable extraction modes.
// ---

#ifndef IOS_CHROME_BROWSER_INTELLIGENCE_PROTO_WRAPPERS_PAGE_CONTEXT_APP_INTERFACE_H_
#define IOS_CHROME_BROWSER_INTELLIGENCE_PROTO_WRAPPERS_PAGE_CONTEXT_APP_INTERFACE_H_

#import <Foundation/Foundation.h>

// App interface to interact with the PageContextWrapper from integration tests.
@interface PageContextAppInterface : NSObject

// Fetches the latest APC with specific configuration.
+ (NSData*)fetchLatestAPCWithRichExtraction:(BOOL)useRichExtraction
                             actionableMode:(BOOL)useActionableMode;

@end

#endif  // IOS_CHROME_BROWSER_INTELLIGENCE_PROTO_WRAPPERS_PAGE_CONTEXT_APP_INTERFACE_H_
