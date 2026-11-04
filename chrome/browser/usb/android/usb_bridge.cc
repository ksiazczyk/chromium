// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: UsbBridge native JNI implementation
// summary: Implements the native side of the UsbBridge JNI interface, reporting whether a WebContents is actively connected to a USB device.
// ---

#include "content/public/browser/web_contents.h"

// Must come after all headers that specialize FromJniType() / ToJniType().
#include "chrome/browser/usb/android/jni_headers/UsbBridge_jni.h"

static bool JNI_UsbBridge_IsWebContentsConnectedToUsbDevice(
    JNIEnv* env,
    const base::android::JavaRef<jobject>& java_web_contents) {
  return content::WebContents::FromJavaWebContents(java_web_contents)
      ->IsCapabilityActive(content::WebContentsCapabilityType::kUSB);
}

DEFINE_JNI(UsbBridge)
