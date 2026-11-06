// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Data import UI utils header
// summary: Declares a helper returning table view separator insets for the data import workflow.
// ---

#ifndef IOS_CHROME_BROWSER_DATA_IMPORT_UI_UI_UTILS_H_
#define IOS_CHROME_BROWSER_DATA_IMPORT_UI_UI_UTILS_H_

#import <UIKit/UIKit.h>

/// Get separator inset for table views in the workflow based on whether they
/// are in multi-selection mode (radio-button in the leading edge), which does
/// not change for data import cells.
UIEdgeInsets GetDataImportSeparatorInset(BOOL multiSelectionMode);

#endif  // IOS_CHROME_BROWSER_DATA_IMPORT_UI_UI_UTILS_H_
