// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Safari data import import view controller header
// summary: Declares the main import screen with the current import stage, target account email, and Safari data item table view.
// ---

#ifndef IOS_CHROME_BROWSER_SAFARI_DATA_IMPORT_UI_SAFARI_DATA_IMPORT_IMPORT_VIEW_CONTROLLER_H_
#define IOS_CHROME_BROWSER_SAFARI_DATA_IMPORT_UI_SAFARI_DATA_IMPORT_IMPORT_VIEW_CONTROLLER_H_

#import "ios/chrome/common/ui/promo_style/promo_style_view_controller.h"

enum class SafariDataImportStage;
@class ImportDataItemTableView;

/// Main screen presented for `SafariDataImportImportCoordinator`.
@interface SafariDataImportImportViewController : PromoStyleViewController

/// The current import stage.
@property(nonatomic, assign) SafariDataImportStage importStage;

/// Email of the account that will store imported data. `nil`if the data will be
/// stored in the profile instead.
@property(nonatomic, strong) NSString* email;

/// The table view  containing the import stages of each Safari data items.
@property(nonatomic, strong) ImportDataItemTableView* itemTableView;

@end

#endif  // IOS_CHROME_BROWSER_SAFARI_DATA_IMPORT_UI_SAFARI_DATA_IMPORT_IMPORT_VIEW_CONTROLLER_H_
