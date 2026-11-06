// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: vCard mediator delegate protocol
// summary: Declares the VcardMediatorDelegate protocol with the dismissVcardForWebState method used to dismiss presented vCard UI for a given web state.
// ---

#ifndef IOS_CHROME_BROWSER_DOWNLOAD_COORDINATOR_VCARD_MEDIATOR_DELEGATE_H_
#define IOS_CHROME_BROWSER_DOWNLOAD_COORDINATOR_VCARD_MEDIATOR_DELEGATE_H_

#import <Foundation/Foundation.h>

namespace web {
class WebState;
}

// Delegate protocol for VcardMediator to dismiss presented vCard UI.
@protocol VcardMediatorDelegate <NSObject>

// Instructs the delegate to dismiss any presented vCard UI associated with
// `webState`.
- (void)dismissVcardForWebState:(web::WebState*)webState;

@end

#endif  // IOS_CHROME_BROWSER_DOWNLOAD_COORDINATOR_VCARD_MEDIATOR_DELEGATE_H_
