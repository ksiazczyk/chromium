// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Omnibox Lens delegate protocol
// summary: Declares a delegate protocol for Lens interactions, deciding whether to use Lens for copied images and searching them.
// ---

#ifndef IOS_CHROME_BROWSER_OMNIBOX_MODEL_OMNIBOX_LENS_DELEGATE_H_
#define IOS_CHROME_BROWSER_OMNIBOX_MODEL_OMNIBOX_LENS_DELEGATE_H_

// Delegate for Lens interactions.
@protocol OmniboxLensDelegate <NSObject>

// Whether to use Lens for copied images.
- (BOOL)shouldUseLensForCopiedImage;

// Searches the image from pasteboard with Lens.
- (void)lensCopiedImage;

@end

#endif  // IOS_CHROME_BROWSER_OMNIBOX_MODEL_OMNIBOX_LENS_DELEGATE_H_
