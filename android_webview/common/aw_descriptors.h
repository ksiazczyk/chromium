// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: IPC file descriptor constants
// summary: Defines enum constants for WebView's IPC file descriptors such as locale pak, main pak, and crash signal.
// relations:
//   - depends_on /content/public/common/content_descriptors.h
// ---

#ifndef ANDROID_WEBVIEW_COMMON_AW_DESCRIPTORS_H_
#define ANDROID_WEBVIEW_COMMON_AW_DESCRIPTORS_H_

#include "content/public/common/content_descriptors.h"

enum {
  kAndroidWebViewLocalePakDescriptor = kContentIPCDescriptorMax + 1,
  kAndroidWebViewMainPakDescriptor,
  kAndroidWebView100PercentPakDescriptor,
  kAndroidWebViewCrashSignalDescriptor,
  kAndroidMinidumpDescriptor,
};

#endif  // ANDROID_WEBVIEW_COMMON_AW_DESCRIPTORS_H_
