// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: X11 event observer interface
// summary: Declares the EventObserver interface whose OnEvent callback lets classes receive X11 events directly instead of via a platform event observer.
// ---

#ifndef UI_GFX_X_EVENT_OBSERVER_H_
#define UI_GFX_X_EVENT_OBSERVER_H_

#include "base/component_export.h"

namespace x11 {

class Event;

// This interface is used by classes wanting to receive
// Events directly.  For input events (mouse, keyboard, touch), a
// PlatformEventObserver should be used instead.
class COMPONENT_EXPORT(X11) EventObserver {
 public:
  virtual void OnEvent(const Event& xevent) = 0;

 protected:
  virtual ~EventObserver() = default;
};

}  // namespace x11

#endif  // UI_GFX_X_EVENT_OBSERVER_H_
