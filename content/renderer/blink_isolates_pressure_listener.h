// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Blink isolates pressure listener header
// summary: Declares BlinkIsolatesPressureListener, a memory consumer that responds to memory limit updates and release requests and tracks renderer visibility.
// ---

#ifndef CONTENT_RENDERER_BLINK_ISOLATES_PRESSURE_LISTENER_H_
#define CONTENT_RENDERER_BLINK_ISOLATES_PRESSURE_LISTENER_H_

#include "base/memory_coordinator/async_memory_consumer_registration.h"
#include "base/memory_coordinator/memory_consumer.h"

namespace content {

class BlinkIsolatesPressureListener : public base::MemoryConsumer {
 public:
  BlinkIsolatesPressureListener();
  ~BlinkIsolatesPressureListener() override;

  // base::MemoryConsumer:
  void OnUpdateMemoryLimit() override;
  void OnReleaseMemory() override;

  void OnRendererVisible();
  void OnRendererHidden();

 private:
  base::AsyncMemoryConsumerRegistration memory_consumer_registration_;

  bool is_renderer_visible_ = true;
};

}  // namespace content

#endif  // CONTENT_RENDERER_BLINK_ISOLATES_PRESSURE_LISTENER_H_
