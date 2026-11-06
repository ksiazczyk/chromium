// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: WindowPinType stream output implementation
// summary: Implements the ostream operator that prints WindowPinType enum values as readable strings such as kPinned and kTrustedPinned.
// ---

#include "chromeos/ui/base/window_pin_type.h"

#include "base/notreached.h"

namespace chromeos {

std::ostream& operator<<(std::ostream& out, WindowPinType pin_type) {
  switch (pin_type) {
    case WindowPinType::kNone:
      return out << "kNone";
    case WindowPinType::kPinned:
      return out << "kPinned";
    case WindowPinType::kTrustedPinned:
      return out << "kTrustedPinned";
  }

  NOTREACHED();
}

}  // namespace chromeos
