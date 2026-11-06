// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: First run utility declarations
// summary: Declares functions for first run status, first run recency checks, and client age.
// ---

#ifndef IOS_CHROME_BROWSER_SHARED_MODEL_UTILS_FIRST_RUN_UTIL_H_
#define IOS_CHROME_BROWSER_SHARED_MODEL_UTILS_FIRST_RUN_UTIL_H_

#import "base/time/time.h"

// Returns whether chrome is first run or forced first run.
BOOL IsFirstRun();

// Returns whether first run was more recent than `timeDelta`.
BOOL IsFirstRunRecent(base::TimeDelta timeDelta);

// Returns the time since first run.
base::TimeDelta ClientAge();

#endif  // IOS_CHROME_BROWSER_SHARED_MODEL_UTILS_FIRST_RUN_UTIL_H_
