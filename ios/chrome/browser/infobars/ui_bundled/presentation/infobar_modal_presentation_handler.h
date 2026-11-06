// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: InfobarModalPresentationHandler protocol
// summary: Declares the InfobarModalPresentationHandler protocol used to request a resize of the infobar modal when its content is updated.
// ---

#ifndef IOS_CHROME_BROWSER_INFOBARS_UI_BUNDLED_PRESENTATION_INFOBAR_MODAL_PRESENTATION_HANDLER_H_
#define IOS_CHROME_BROWSER_INFOBARS_UI_BUNDLED_PRESENTATION_INFOBAR_MODAL_PRESENTATION_HANDLER_H_

#import <Foundation/Foundation.h>

// Handler for the infobar modal presentation.
@protocol InfobarModalPresentationHandler <NSObject>

// The content inside the modal has been updated and the frame needs to be
// resized.
- (void)resizeInfobarModal;

@end

#endif  // IOS_CHROME_BROWSER_INFOBARS_UI_BUNDLED_PRESENTATION_INFOBAR_MODAL_PRESENTATION_HANDLER_H_
