// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: PermissionCallback type alias
// summary: Defines the PermissionCallback alias as a base::OnceCallback that receives a boolean permission result.
// relations:
//   - depends_on /base/functional/callback.h
// ---

#ifndef ANDROID_WEBVIEW_BROWSER_PERMISSION_PERMISSION_CALLBACK_H_
#define ANDROID_WEBVIEW_BROWSER_PERMISSION_PERMISSION_CALLBACK_H_

#include "base/functional/callback.h"

namespace android_webview {

// Callback for permission requests.
using PermissionCallback = base::OnceCallback<void(bool)>;

}  // namespace android_webview

#endif  // ANDROID_WEBVIEW_BROWSER_PERMISSION_PERMISSION_CALLBACK_H_
