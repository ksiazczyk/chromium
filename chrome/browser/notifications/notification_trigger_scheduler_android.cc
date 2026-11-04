// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Android notification trigger scheduler implementation
// summary: Android-specific NotificationTriggerScheduler that uses JNI to receive wake-up calls from Java and trigger all pending notifications on the UI thread.
// ---

#include "chrome/browser/notifications/notification_trigger_scheduler_android.h"

#include "chrome/browser/notifications/platform_notification_service_impl.h"
#include "content/public/browser/browser_thread.h"

// Must come after all headers that specialize FromJniType() / ToJniType().
#include "chrome/android/chrome_jni_headers/NotificationTriggerScheduler_jni.h"

using content::BrowserThread;

// static
static void JNI_NotificationTriggerScheduler_TriggerNotifications(JNIEnv* env) {
  CHECK_CURRENTLY_ON(BrowserThread::UI, base::NotFatalUntil::M161);
  NotificationTriggerScheduler::TriggerNotifications();
}

NotificationTriggerSchedulerAndroid::NotificationTriggerSchedulerAndroid() {
  CHECK_CURRENTLY_ON(BrowserThread::UI, base::NotFatalUntil::M161);
  JNIEnv* env = base::android::AttachCurrentThread();

  java_notification_trigger_scheduler_.Reset(
      Java_NotificationTriggerScheduler_getInstance(env));
}

NotificationTriggerSchedulerAndroid::~NotificationTriggerSchedulerAndroid() =
    default;

DEFINE_JNI(NotificationTriggerScheduler)
