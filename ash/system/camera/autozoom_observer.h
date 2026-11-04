// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Autozoom observer interface
// summary: Defines the observer interface for autozoom state and control-enabled change notifications.
// relations:
//   - depends_on /base/observer_list_types.h
// ---

#ifndef ASH_SYSTEM_CAMERA_AUTOZOOM_OBSERVER_H_
#define ASH_SYSTEM_CAMERA_AUTOZOOM_OBSERVER_H_

#include "base/observer_list_types.h"
#include "media/capture/video/chromeos/mojom/cros_camera_service.mojom.h"

namespace ash {

class AutozoomObserver : public base::CheckedObserver {
 public:
  // Called when the autozoom state has changed.
  virtual void OnAutozoomStateChanged(
      cros::mojom::CameraAutoFramingState state) {}

  // Called when the autozoom control enabled state has changed.
  virtual void OnAutozoomControlEnabledChanged(bool enabled) {}
};

}  // namespace ash

#endif  // ASH_SYSTEM_CAMERA_AUTOZOOM_OBSERVER_H_
