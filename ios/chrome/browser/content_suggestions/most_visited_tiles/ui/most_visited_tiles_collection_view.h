// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: MostVisitedTilesCollectionView interface
// summary: Declares the collection view backing the most visited tiles grid, with content size change callback and maximum visible items.
// ---

#ifndef IOS_CHROME_BROWSER_CONTENT_SUGGESTIONS_MOST_VISITED_TILES_UI_MOST_VISITED_TILES_COLLECTION_VIEW_H_
#define IOS_CHROME_BROWSER_CONTENT_SUGGESTIONS_MOST_VISITED_TILES_UI_MOST_VISITED_TILES_COLLECTION_VIEW_H_

#import <UIKit/UIKit.h>

@class MostVisitedTilesConfig;

/// Implementation for the Most Visited Tiles so that its model can directly
/// update it.
@interface MostVisitedTilesCollectionView : UICollectionView

/// Callback invoked when the collection view's content size changes.
@property(nonatomic, copy) void (^onContentSizeChanged)(CGSize newSize);

/// Maximum number of items that should be fully visible on the screen.
@property(nonatomic, assign) NSUInteger maxVisibleItems;

/// Initializes the collection view with `config` and `spacing` between the
/// cells.
- (instancetype)initWithConfig:(MostVisitedTilesConfig*)config
    NS_DESIGNATED_INITIALIZER;

- (instancetype)initWithFrame:(CGRect)frame NS_UNAVAILABLE;
- (instancetype)initWithCoder:(NSCoder*)aDecoder NS_UNAVAILABLE;
- (instancetype)initWithFrame:(CGRect)frame
         collectionViewLayout:(UICollectionViewLayout*)layout NS_UNAVAILABLE;

@end

#endif  // IOS_CHROME_BROWSER_CONTENT_SUGGESTIONS_MOST_VISITED_TILES_UI_MOST_VISITED_TILES_COLLECTION_VIEW_H_
