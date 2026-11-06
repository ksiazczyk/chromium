// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Image retriever protocol
// summary: Declares the ImageRetriever protocol that fetches an image for a given URL and delivers it through a completion handler.
// ---

#ifndef IOS_CHROME_BROWSER_OMNIBOX_UI_POPUP_ROW_IMAGE_RETRIEVER_H_
#define IOS_CHROME_BROWSER_OMNIBOX_UI_POPUP_ROW_IMAGE_RETRIEVER_H_

class GURL;

@protocol ImageRetriever <NSObject>
- (void)fetchImage:(GURL)imageURL completion:(void (^)(UIImage*))completion;
@end

#endif  // IOS_CHROME_BROWSER_OMNIBOX_UI_POPUP_ROW_IMAGE_RETRIEVER_H_
