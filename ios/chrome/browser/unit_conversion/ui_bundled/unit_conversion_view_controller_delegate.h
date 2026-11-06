// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Unit conversion view controller delegate protocol
// summary: Defines delegate callbacks for closing the unit conversion view controller and presenting the report-an-issue page.
// ---

#ifndef IOS_CHROME_BROWSER_UNIT_CONVERSION_UI_BUNDLED_UNIT_CONVERSION_VIEW_CONTROLLER_DELEGATE_H_
#define IOS_CHROME_BROWSER_UNIT_CONVERSION_UI_BUNDLED_UNIT_CONVERSION_VIEW_CONTROLLER_DELEGATE_H_

@class UnitConversionViewController;

// Handles presenting "Report an issue" page and dismissing the
// UnitConversionViewController.
@protocol UnitConversionViewControllerDelegate

// Called when the user has tapped the UnitConversionViewController's close
// button.
- (void)didTapCloseUnitConversionController:
    (UnitConversionViewController*)viewController;

// Called when user has tapped the "Report an issue" button.
- (void)didTapReportIssueUnitConversionController:
    (UnitConversionViewController*)viewController;

@end

#endif  // IOS_CHROME_BROWSER_UNIT_CONVERSION_UI_BUNDLED_UNIT_CONVERSION_VIEW_CONTROLLER_DELEGATE_H_
