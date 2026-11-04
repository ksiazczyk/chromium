// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: QueuedContainerType class declaration
// summary: Declares QueuedContainerType, which couples a queued container type change with a callback invoked once the animation and container changes complete.
// relations:
//   - depends_on /ash/public/cpp/keyboard/keyboard_types.h
//   - depends_on /base/functional/callback.h
//   - depends_on /base/memory/raw_ptr.h
// ---

#ifndef ASH_KEYBOARD_UI_QUEUED_CONTAINER_TYPE_H_
#define ASH_KEYBOARD_UI_QUEUED_CONTAINER_TYPE_H_

#include "ash/public/cpp/keyboard/keyboard_types.h"
#include "base/functional/callback.h"
#include "base/memory/raw_ptr.h"
#include "ui/gfx/geometry/rect.h"

namespace keyboard {

class KeyboardUIController;

// Tracks a queued ContainerType change request. Couples a container type with a
// callback to invoke once the necessary animation and container changes are
// complete.
// The callback will be invoked once this object goes out of scope. Success
// is defined as the KeyboardUIController's current container behavior matching
// the same container type as the queued container type.
class QueuedContainerType {
 public:
  QueuedContainerType(KeyboardUIController* controller,
                      ContainerType container_type,
                      gfx::Rect bounds,
                      base::OnceCallback<void(bool success)> callback);
  ~QueuedContainerType();
  ContainerType container_type() { return container_type_; }
  gfx::Rect target_bounds() { return bounds_; }

 private:
  raw_ptr<KeyboardUIController> controller_;
  ContainerType container_type_;
  gfx::Rect bounds_;
  base::OnceCallback<void(bool success)> callback_;
};

}  // namespace keyboard

#endif  // ASH_KEYBOARD_UI_QUEUED_CONTAINER_TYPE_H_
