// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: X11 error base class declaration
// summary: Declares the abstract x11::Error interface whose only capability is rendering an X11 error as a human-readable string.
// ---

#ifndef UI_GFX_X_ERROR_H_
#define UI_GFX_X_ERROR_H_

#include <string>

#include "base/component_export.h"

namespace x11 {

// This class is a generic interface for X11 errors.  Currently the only
// functionality is printing the error as a human-readable string.
class COMPONENT_EXPORT(X11) Error {
 public:
  Error();
  virtual ~Error();

  virtual std::string ToString() const = 0;
};

}  // namespace x11

#endif  // UI_GFX_X_ERROR_H_
