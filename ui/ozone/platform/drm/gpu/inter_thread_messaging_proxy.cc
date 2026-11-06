// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Inter-thread messaging proxy implementation
// summary: Defines the destructor for InterThreadMessagingProxy, an interface that connects the GPU process side to the DRM thread.
// ---

#include "ui/ozone/platform/drm/gpu/inter_thread_messaging_proxy.h"

namespace ui {

InterThreadMessagingProxy::~InterThreadMessagingProxy() = default;

}  // namespace ui
