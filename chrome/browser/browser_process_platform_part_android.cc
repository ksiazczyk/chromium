// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Android BrowserProcessPlatformPart
// summary: Android platform part that initializes memory pressure handling and exits by telling the Java code to finish the activity.
// ---

#include "chrome/browser/browser_process_platform_part_android.h"

#include "base/android/memory_pressure_listener_android.h"
#include "chrome/browser/lifetime/application_lifetime_android.h"

BrowserProcessPlatformPart::BrowserProcessPlatformPart() {
  base::android::MemoryPressureListenerAndroid::Initialize(
      base::android::AttachCurrentThread());
}

BrowserProcessPlatformPart::~BrowserProcessPlatformPart() = default;

void BrowserProcessPlatformPart::AttemptExit(bool try_to_quit_application) {
  // Tell the Java code to finish() the Activity.
  chrome::TerminateAndroid();
}
