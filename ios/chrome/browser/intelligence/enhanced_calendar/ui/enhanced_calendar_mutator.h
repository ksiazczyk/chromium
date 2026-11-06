// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Enhanced Calendar mutator protocol
// summary: Declares the Objective-C protocol the view controller uses to tell the mediator to cancel in-flight Enhanced Calendar requests and dismiss the bottom sheet.
// ---

#ifndef IOS_CHROME_BROWSER_INTELLIGENCE_ENHANCED_CALENDAR_UI_ENHANCED_CALENDAR_MUTATOR_H_
#define IOS_CHROME_BROWSER_INTELLIGENCE_ENHANCED_CALENDAR_UI_ENHANCED_CALENDAR_MUTATOR_H_

// Mutator protocol for the view controller to communicate with the
// EnhancedCalendarMediator.
@protocol EnhancedCalendarMutator

// Cancels any in-flight EnhancedCalendar requests and dismisses the bottom
// sheet. User-triggered.
- (void)cancelEnhancedCalendarRequestAndDismissBottomSheet;

@end

#endif  // IOS_CHROME_BROWSER_INTELLIGENCE_ENHANCED_CALENDAR_UI_ENHANCED_CALENDAR_MUTATOR_H_
