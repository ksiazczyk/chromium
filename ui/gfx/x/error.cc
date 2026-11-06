// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: X11 error base class implementation
// summary: Provides the default constructor and destructor definitions for the x11::Error base class.
// ---

#include "ui/gfx/x/error.h"

namespace x11 {

Error::Error() = default;

Error::~Error() = default;

}  // namespace x11
