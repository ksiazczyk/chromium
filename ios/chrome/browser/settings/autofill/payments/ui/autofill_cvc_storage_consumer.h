// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: CVC storage consumer protocol
// summary: Declares the consumer interface exposing the CVC storage switch state and whether saved CVCs exist.
// ---

#ifndef IOS_CHROME_BROWSER_SETTINGS_AUTOFILL_PAYMENTS_UI_AUTOFILL_CVC_STORAGE_CONSUMER_H_
#define IOS_CHROME_BROWSER_SETTINGS_AUTOFILL_PAYMENTS_UI_AUTOFILL_CVC_STORAGE_CONSUMER_H_

#import <Foundation/Foundation.h>

// Consumer for AutofillCvcStorageViewMediator.
@protocol AutofillCvcStorageConsumer <NSObject>
// The current state of the CVC storage switch.
@property(nonatomic, assign) BOOL cvcStorageSwitchIsOn;
// Whether there are any saved CVCs.
@property(nonatomic, assign) BOOL hasSavedCvcs;
@end

#endif  // IOS_CHROME_BROWSER_SETTINGS_AUTOFILL_PAYMENTS_UI_AUTOFILL_CVC_STORAGE_CONSUMER_H_
