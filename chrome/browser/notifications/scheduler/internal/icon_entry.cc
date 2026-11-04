// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: IconEntry implementation
// summary: Implements the default and move constructors of the IconEntry notification icon database entry.
// ---

#include "chrome/browser/notifications/scheduler/internal/icon_entry.h"

namespace notifications {

IconEntry::IconEntry() = default;

IconEntry::IconEntry(IconEntry&& other) {
  data.swap(other.data);
}

}  // namespace notifications
