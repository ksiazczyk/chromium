// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Android event log writer declaration
// summary: Declares EventLogWriteInt, which writes an integer event to the Android event log from native code.
// ---

#ifndef BASE_ANDROID_EVENT_LOG_H_
#define BASE_ANDROID_EVENT_LOG_H_

#include <jni.h>

#include "base/base_export.h"

namespace base {
namespace android {

void BASE_EXPORT EventLogWriteInt(int tag, int value);

}  // namespace android
}  // namespace base

#endif  // BASE_ANDROID_EVENT_LOG_H_
