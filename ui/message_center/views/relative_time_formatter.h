// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Relative time formatter header for message center views
// summary: Declares the message_center function that converts a time delta into a localized relative time UI string and returns how long that string stays valid.
// ---

#ifndef UI_MESSAGE_CENTER_VIEWS_RELATIVE_TIME_FORMATTER_H_
#define UI_MESSAGE_CENTER_VIEWS_RELATIVE_TIME_FORMATTER_H_

#include <string>

#include "base/time/time.h"
#include "ui/message_center/message_center_export.h"

namespace message_center {

// Translates the given relative time in |delta| and writes the resulting UI
// string into |relative_time|. That string will be valid for the duration
// written to |next_update|.
MESSAGE_CENTER_EXPORT void GetRelativeTimeStringAndNextUpdateTime(
    base::TimeDelta delta,
    std::u16string* relative_time,
    base::TimeDelta* next_update);

}  // namespace message_center

#endif  // UI_MESSAGE_CENTER_VIEWS_RELATIVE_TIME_FORMATTER_H_
