// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Reminder notifications date picker table view interface
// summary: Declares a self-sizing table view with date and time rows for selecting a future reminder notification date and time.
// ---

#ifndef IOS_CHROME_BROWSER_REMINDER_NOTIFICATIONS_UI_REMINDER_NOTIFICATIONS_DATE_PICKER_TABLE_VIEW_H_
#define IOS_CHROME_BROWSER_REMINDER_NOTIFICATIONS_UI_REMINDER_NOTIFICATIONS_DATE_PICKER_TABLE_VIEW_H_

#import <UIKit/UIKit.h>

#import "ios/chrome/browser/shared/ui/elements/self_sizing_table_view.h"

@protocol ReminderNotificationsDatePickerInteractionHandler;

// A table view that displays date and time picker rows for reminder
// notifications. Contains two rows: one for date selection and one for time
// selection.
@interface ReminderNotificationsDatePickerTableView : SelfSizingTableView

// The currently selected date and time for the reminder notification.
// Default value is the current date and time when the picker is initialized.
// Updates when the user selects a new date or time.
//
// Note: This always represents a future date as users cannot select past dates.
@property(nonatomic, readwrite) NSDate* date;

// Designated initializer.
- (instancetype)initWithInteractionHandler:
    (id<ReminderNotificationsDatePickerInteractionHandler>)interactionHandler
    NS_DESIGNATED_INITIALIZER;

- (instancetype)initWithFrame:(CGRect)frame
                        style:UITableViewStyle NS_UNAVAILABLE;
- (instancetype)initWithCoder:(NSCoder*)aDecoder NS_UNAVAILABLE;

@end

#endif  // IOS_CHROME_BROWSER_REMINDER_NOTIFICATIONS_UI_REMINDER_NOTIFICATIONS_DATE_PICKER_TABLE_VIEW_H_
