// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: PanelItemCollectionViewCell interface
// summary: Declares a collection view cell with appearance lifecycle methods used to track how long it is onscreen.
// ---

#ifndef IOS_CHROME_BROWSER_CONTEXTUAL_PANEL_UI_PANEL_ITEM_COLLECTION_VIEW_CELL_H_
#define IOS_CHROME_BROWSER_CONTEXTUAL_PANEL_UI_PANEL_ITEM_COLLECTION_VIEW_CELL_H_

#import <UIKit/UIKit.h>

namespace base {
class TimeDelta;
}

@interface PanelItemCollectionViewCell : UICollectionViewCell

- (void)cellWillAppear;

- (void)cellDidDisappear;

- (base::TimeDelta)timeSinceAppearance;

@end

#endif  // IOS_CHROME_BROWSER_CONTEXTUAL_PANEL_UI_PANEL_ITEM_COLLECTION_VIEW_CELL_H_
