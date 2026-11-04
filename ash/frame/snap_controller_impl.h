// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Ash SnapControllerImpl header
// summary: Declares SnapControllerImpl, the Ash-only implementation of the ChromeOS snap controller that checks snap eligibility, shows snap previews, and commits snaps using a PhantomWindowController.
// relations:
//   - depends_on /ash/ash_export.h
//   - implements /chromeos/ui/frame/caption_buttons/snap_controller.h
// ---

#ifndef ASH_FRAME_SNAP_CONTROLLER_IMPL_H_
#define ASH_FRAME_SNAP_CONTROLLER_IMPL_H_

#include <memory>

#include "ash/ash_export.h"
#include "chromeos/ui/frame/caption_buttons/snap_controller.h"

namespace ash {

class PhantomWindowController;

// A controller for toplevel window actions which can only run in Ash.
class ASH_EXPORT SnapControllerImpl : public chromeos::SnapController {
 public:
  SnapControllerImpl();

  SnapControllerImpl(const SnapControllerImpl&) = delete;
  SnapControllerImpl& operator=(const SnapControllerImpl&) = delete;

  ~SnapControllerImpl() override;

  bool CanSnap(aura::Window* window) override;
  void ShowSnapPreview(aura::Window* window,
                       chromeos::SnapDirection snap,
                       bool allow_haptic_feedback) override;
  void CommitSnap(aura::Window* window,
                  chromeos::SnapDirection snap,
                  float snap_ratio,
                  SnapRequestSource snap_request_source) override;

  const PhantomWindowController* phantom_window_controller_for_testing() const {
    return phantom_window_controller_.get();
  }

 private:
  std::unique_ptr<PhantomWindowController> phantom_window_controller_;
};

}  // namespace ash

#endif  // ASH_FRAME_SNAP_CONTROLLER_IMPL_H_
