// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Password breach consumer protocol
// summary: Declares the PasswordBreachConsumer protocol used to set title, subtitle, and action strings on the password breach screen before its view is created.
// ---

#ifndef IOS_CHROME_BROWSER_PASSWORDS_PASSWORD_BREACH_UI_PASSWORD_BREACH_CONSUMER_H_
#define IOS_CHROME_BROWSER_PASSWORDS_PASSWORD_BREACH_UI_PASSWORD_BREACH_CONSUMER_H_

#import <Foundation/Foundation.h>

// Consumer for the Password Breach Screen. All of the setters should be called
// before the view is created.
@protocol PasswordBreachConsumer <NSObject>

// Sets the respective state in the consumer.
- (void)setTitleString:(NSString*)titleString
           subtitleString:(NSString*)subtitleString
      primaryActionString:(NSString*)primaryActionString
    secondaryActionString:(NSString*)secondaryActionString;

@end

#endif  // IOS_CHROME_BROWSER_PASSWORDS_PASSWORD_BREACH_UI_PASSWORD_BREACH_CONSUMER_H_
