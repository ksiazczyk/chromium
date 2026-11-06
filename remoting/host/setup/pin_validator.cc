// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: PIN validator implementation
// summary: Implements the PIN validity check that requires a numeric PIN of at least six digits.
// ---

#include <stddef.h>

#include "remoting/host/setup/pin_validator.h"

namespace remoting {

bool IsPinValid(const std::string& pin) {
  if (pin.length() < 6) {
    return false;
  }
  for (char c : pin) {
    if (c < '0' || c > '9') {
      return false;
    }
  }
  return true;
}

}  // namespace remoting
