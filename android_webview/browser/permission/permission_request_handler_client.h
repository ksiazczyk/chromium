// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: PermissionRequestHandlerClient interface
// summary: Defines the abstract PermissionRequestHandlerClient interface with methods for handling and canceling Android WebView permission requests.
// relations:
//   - depends_on /base/android/scoped_java_ref.h
//   - depends_on /base/memory/weak_ptr.h
// ---

#ifndef ANDROID_WEBVIEW_BROWSER_PERMISSION_PERMISSION_REQUEST_HANDLER_CLIENT_H_
#define ANDROID_WEBVIEW_BROWSER_PERMISSION_PERMISSION_REQUEST_HANDLER_CLIENT_H_

#include <memory>

#include "base/android/scoped_java_ref.h"
#include "base/memory/weak_ptr.h"

namespace android_webview {

class AwPermissionRequest;
class AwPermissionRequestDelegate;

class PermissionRequestHandlerClient {
 public:
  PermissionRequestHandlerClient();
  virtual ~PermissionRequestHandlerClient();

  // Handles the permission request. Will return a WeakPtr to the created
  // AwPermissionRequest if one was instantiated, or `nullptr` if no Java
  // objects were created.
  virtual base::WeakPtr<AwPermissionRequest> OnPermissionRequest(
      std::unique_ptr<AwPermissionRequestDelegate> permission_request) = 0;
  virtual void OnPermissionRequestCanceled(AwPermissionRequest* request) = 0;
};

}  // namespace android_webview

#endif  // ANDROID_WEBVIEW_BROWSER_PERMISSION_PERMISSION_REQUEST_HANDLER_CLIENT_H_
