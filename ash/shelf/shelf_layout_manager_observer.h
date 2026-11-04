// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ShelfLayoutManagerObserver interface
// summary: Defines an observer interface for shelf layout changes such as visibility, auto-hide, background animation, hotseat state, and work area inset updates.
// relations:
//   - references /ash/ash_export.h
//   - references /ash/public/cpp/shelf_types.h
//   - references /ash/shelf/shelf_background_animator.h
// ---

#ifndef ASH_SHELF_SHELF_LAYOUT_MANAGER_OBSERVER_H_
#define ASH_SHELF_SHELF_LAYOUT_MANAGER_OBSERVER_H_

#include "ash/ash_export.h"
#include "ash/public/cpp/shelf_types.h"
#include "ash/shelf/shelf_background_animator.h"

namespace ash {

enum class AnimationChangeType;

class ASH_EXPORT ShelfLayoutManagerObserver {
 public:
  virtual ~ShelfLayoutManagerObserver() {}

  // Called when the target ShelfLayoutManager will be deleted.
  virtual void WillDeleteShelfLayoutManager() {}

  // Called when the shelf visibility state changes.
  virtual void OnShelfVisibilityStateChanged(ShelfVisibilityState new_state) {}

  // Called when the auto hide state is changed.
  virtual void OnAutoHideStateChanged(ShelfAutoHideState new_state) {}

  // Called when shelf background animation is started.
  virtual void OnBackgroundUpdated(ShelfBackgroundType background_type,
                                   AnimationChangeType change_type) {}

  // Called when the hotseat state changes.
  virtual void OnHotseatStateChanged(HotseatState old_state,
                                     HotseatState new_state) {}

  // Called when ShelfLayoutManager has updated Shelf insets in work area
  // insets.
  virtual void OnWorkAreaInsetsChanged() {}
};

}  // namespace ash

#endif  // ASH_SHELF_SHELF_LAYOUT_MANAGER_OBSERVER_H_
