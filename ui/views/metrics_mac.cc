// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Mac implementation of views metrics
// summary: Implements GetDoubleClickInterval and GetMenuShowDelay for macOS using fixed default values.
// ---

#include "ui/views/metrics.h"

namespace views {

base::TimeDelta GetDoubleClickInterval() {
  constexpr base::TimeDelta kDefaultDoubleClickInterval =
      base::Milliseconds(500);
  return kDefaultDoubleClickInterval;
}

base::TimeDelta GetMenuShowDelay() {
  return base::Milliseconds(0);
}

}  // namespace views
