// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Header for keyboard resource utilities
// summary: Header declaring the keyboard extension URL and host constants, the resource list accessor, and the one-time keyboard resource initialization function.
// relations:
//   - depends_on /ash/keyboard/ui/keyboard_export.h
//   - depends_on /base/containers/span.h
//   - depends_on /ui/base/webui/resource_path.h
// ---

#ifndef ASH_KEYBOARD_UI_RESOURCES_KEYBOARD_RESOURCE_UTIL_H_
#define ASH_KEYBOARD_UI_RESOURCES_KEYBOARD_RESOURCE_UTIL_H_

#include <stddef.h>

#include "ash/keyboard/ui/keyboard_export.h"
#include "base/containers/span.h"
#include "ui/base/webui/resource_path.h"

namespace keyboard {

// The URL of the keyboard extension.
KEYBOARD_EXPORT extern const char kKeyboardURL[];

// The host of the keyboard extension URL.
KEYBOARD_EXPORT extern const char kKeyboardHost[];

// Get the list of keyboard resources.
KEYBOARD_EXPORT base::span<const webui::ResourcePath>
GetKeyboardExtensionResources();

// Initializes the keyboard module. This includes adding the necessary pak files
// for loading resources used in for the virtual keyboard. This becomes a no-op
// after the first call.
KEYBOARD_EXPORT void InitializeKeyboardResources();

}  // namespace keyboard

#endif  // ASH_KEYBOARD_UI_RESOURCES_KEYBOARD_RESOURCE_UTIL_H_
