// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Localized relative date utility header
// summary: Declares GetRelativeDateLocalized, which returns a localized visit time string including a relative indicator such as today or yesterday.
// ---

#ifndef IOS_CHROME_BROWSER_SHARED_UI_UTIL_DATE_LOCALIZED_UTIL_H_
#define IOS_CHROME_BROWSER_SHARED_UI_UTIL_DATE_LOCALIZED_UTIL_H_

#include <string>

namespace base {
class Time;
}

namespace date_localized {

// Returns a localized version of `visit_time` including a relative
// indicator (e.g. today, yesterday).
std::u16string GetRelativeDateLocalized(base::Time visit_time);

}  // namespace date_localized

#endif  // IOS_CHROME_BROWSER_SHARED_UI_UTIL_DATE_LOCALIZED_UTIL_H_
