// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: App Switcher URL Opening Response struct
// summary: Declares the AppSwitcherUrlOpeningResponse struct holding App Switcher URL opening response parameters such as incognito and AI summarization flags, hashed user ID, timing, and error.
// ---

#ifndef IOS_CHROME_BROWSER_APP_SWITCHER_MODEL_APP_SWITCHER_URL_OPENING_RESPONSE_H_
#define IOS_CHROME_BROWSER_APP_SWITCHER_MODEL_APP_SWITCHER_URL_OPENING_RESPONSE_H_

#import <Foundation/Foundation.h>

#import <string>

#import "base/time/time.h"

// Response parameters for App Switcher URL opening response.
struct AppSwitcherUrlOpeningResponse {
  bool is_incognito = false;
  bool is_ai_summarization = false;
  std::string hashed_user_id;
  base::TimeTicks start_fetch_time;
  NSError* error = nil;
};

#endif  // IOS_CHROME_BROWSER_APP_SWITCHER_MODEL_APP_SWITCHER_URL_OPENING_RESPONSE_H_
