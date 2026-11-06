// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Share extension sheet delegate protocol
// summary: Declares the ShareExtensionDelegate protocol with callbacks for closing the share sheet and opening, searching, or showing more options in Chrome.
// ---

#ifndef IOS_CHROME_SHARE_EXTENSION_SHARE_EXTENSION_DELEGATE_H_
#define IOS_CHROME_SHARE_EXTENSION_SHARE_EXTENSION_DELEGATE_H_

#import <Foundation/Foundation.h>

@class ShareExtensionSheet;

// Delegate protocol for `ShareExtensionSheet`.
@protocol ShareExtensionDelegate

- (void)didTapCloseShareExtensionSheet:
    (ShareExtensionSheet*)shareExtensionSheet;
- (void)didTapOpenInChromeShareExtensionSheet:
            (ShareExtensionSheet*)shareExtensionSheet
                                       gaiaID:(NSString*)gaiaID;
- (void)didTapMoreOptionsShareExtensionSheet:
            (ShareExtensionSheet*)shareExtensionSheet
                                      gaiaID:(NSString*)gaiaID;
- (void)didTapSearchInChromeShareExtensionSheet:
            (ShareExtensionSheet*)shareExtensionSheet
                                         gaiaID:(NSString*)gaiaID;
- (void)didTapSearchInIncognitoShareExtensionSheet:
            (ShareExtensionSheet*)shareExtensionSheet
                                            gaiaID:(NSString*)gaiaID;
- (void)shareExtensionSheetDidDisappear:
    (ShareExtensionSheet*)shareExtensionSheet;

@end

#endif  // IOS_CHROME_SHARE_EXTENSION_SHARE_EXTENSION_DELEGATE_H_
