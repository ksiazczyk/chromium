// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Accelerator shortcut encoding declarations
// summary: Declares GetEncodedShortcut, which encodes a keyboard shortcut as an integer with the key code in the low 16 bits and modifiers in the high 16 bits.
// relations:
//   - depends_on /ash/ash_export.h
//   - depends_on /ui/events/keycodes/keyboard_codes.h
// ---

#ifndef ASH_ACCELERATORS_ACCELERATOR_ENCODING_H_
#define ASH_ACCELERATORS_ACCELERATOR_ENCODING_H_

#include "ash/ash_export.h"
#include "ui/events/keycodes/keyboard_codes.h"

namespace ash {

// Encode a shortcut as an int for the purposes of recording it as a metric.
// - The low 16 bits represent the key code.
// - The high 16 bits represent the modififers.
//   - The 31 bit: Command key
//   - The 30 bit: Alt key
//   - The 29 bit: Control key
//   - The 28 bit: Shift key
//   - All other bits are 0
ASH_EXPORT int GetEncodedShortcut(const int modifiers,
                                  const ui::KeyboardCode key_code);

}  // namespace ash

#endif  // ASH_ACCELERATORS_ACCELERATOR_ENCODING_H_
