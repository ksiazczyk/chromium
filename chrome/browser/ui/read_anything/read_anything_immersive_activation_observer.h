// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Read Anything immersive activation observer interface
// summary: Declares a checked observer interface notified when immersive Reading Mode is shown or closed.
// ---

#ifndef CHROME_BROWSER_UI_READ_ANYTHING_READ_ANYTHING_IMMERSIVE_ACTIVATION_OBSERVER_H_
#define CHROME_BROWSER_UI_READ_ANYTHING_READ_ANYTHING_IMMERSIVE_ACTIVATION_OBSERVER_H_

#include "base/observer_list_types.h"
#include "chrome/browser/ui/read_anything/read_anything_enums.h"

class ReadAnythingImmersiveActivationObserver : public base::CheckedObserver {
 public:
  virtual void OnShowImmersive(
      read_anything::mojom::ReadAnythingOpenTrigger trigger) {}
  virtual void OnCloseImmersive() {}
};

#endif  // CHROME_BROWSER_UI_READ_ANYTHING_READ_ANYTHING_IMMERSIVE_ACTIVATION_OBSERVER_H_
