// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Base class implementation for keyboard container behavior
// summary: Implements the constructor and destructor of the ContainerBehavior base class in the keyboard namespace.
// relations:
//   - implements /ash/keyboard/ui/container_behavior.h
// ---

#include "ash/keyboard/ui/container_behavior.h"

namespace keyboard {

ContainerBehavior::ContainerBehavior(Delegate* delegate)
    : delegate_(delegate) {}

ContainerBehavior::~ContainerBehavior() = default;

}  // namespace keyboard
