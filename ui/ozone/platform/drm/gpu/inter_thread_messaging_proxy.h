// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Inter-thread messaging proxy interface
// summary: Declares the InterThreadMessagingProxy interface whose implementations attach a DRM thread for cross-thread messaging.
// ---

#ifndef UI_OZONE_PLATFORM_DRM_GPU_INTER_THREAD_MESSAGING_PROXY_H_
#define UI_OZONE_PLATFORM_DRM_GPU_INTER_THREAD_MESSAGING_PROXY_H_

namespace ui {

class DrmThread;

class InterThreadMessagingProxy {
 public:
  virtual ~InterThreadMessagingProxy();
  virtual void SetDrmThread(DrmThread* thread) = 0;
};

}  // namespace ui

#endif  // UI_OZONE_PLATFORM_DRM_GPU_INTER_THREAD_MESSAGING_PROXY_H_
