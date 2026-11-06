// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: AutofillBnplConsumer protocol header
// summary: Declares the AutofillBnplConsumer protocol used by AutofillBnplMediator, exposing the BNPL switch state.
// ---

#ifndef IOS_CHROME_BROWSER_SETTINGS_AUTOFILL_BNPL_UI_AUTOFILL_BNPL_CONSUMER_H_
#define IOS_CHROME_BROWSER_SETTINGS_AUTOFILL_BNPL_UI_AUTOFILL_BNPL_CONSUMER_H_

#import <Foundation/Foundation.h>

// Consumer for AutofillBnplMediator.
@protocol AutofillBnplConsumer <NSObject>
// The current state of the BNPL switch.
@property(nonatomic, assign) BOOL bnplSwitchIsOn;
@end

#endif  // IOS_CHROME_BROWSER_SETTINGS_AUTOFILL_BNPL_UI_AUTOFILL_BNPL_CONSUMER_H_
