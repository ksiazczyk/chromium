// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Property change reason enum
// summary: Defines the PropertyChangeReason enum distinguishing property values set by an animation from those set directly.
// ---

#ifndef UI_COMPOSITOR_PROPERTY_CHANGE_REASON_H_
#define UI_COMPOSITOR_PROPERTY_CHANGE_REASON_H_

namespace ui {

enum class PropertyChangeReason {
  // The property value was set by an animation.
  FROM_ANIMATION,
  // The property value was set directly, without an animation.
  NOT_FROM_ANIMATION,
};

}  // namespace ui

#endif  // UI_COMPOSITOR_PROPERTY_CHANGE_REASON_H_
