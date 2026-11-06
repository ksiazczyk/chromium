// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Best Features table view cell interface
// summary: Declares a table view cell that lays out an icon, title, and detail text for a Best Features item.
// ---

#ifndef IOS_CHROME_BROWSER_FIRST_RUN_BEST_FEATURES_UI_BEST_FEATURES_CELL_H_
#define IOS_CHROME_BROWSER_FIRST_RUN_BEST_FEATURES_UI_BEST_FEATURES_CELL_H_

#import "ios/chrome/browser/shared/ui/table_view/cells/legacy_table_view_cell.h"

@class BestFeaturesItem;

// Cell to layout a row in the table view for the Best Features Screen. Contains
// a leading icon image, title text, and detail text.
@interface BestFeaturesCell : LegacyTableViewCell

// Configures the cell for the given `item`.
- (void)setBestFeaturesItem:(BestFeaturesItem*)item;

@end

#endif  // IOS_CHROME_BROWSER_FIRST_RUN_BEST_FEATURES_UI_BEST_FEATURES_CELL_H_
