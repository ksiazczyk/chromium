// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Primary paste preference observer interface
// summary: Declares the PrimaryPastePrefObserver interface notified when the primary paste preference changes.
// ---

#ifndef UI_LINUX_PRIMARY_PASTE_PREF_OBSERVER_H_
#define UI_LINUX_PRIMARY_PASTE_PREF_OBSERVER_H_

#include "base/observer_list_types.h"

namespace ui {

class PrimaryPastePrefObserver : public base::CheckedObserver {
 public:
  virtual void OnPrimaryPastePrefChanged() = 0;

 protected:
  ~PrimaryPastePrefObserver() override = default;
};

}  // namespace ui

#endif  // UI_LINUX_PRIMARY_PASTE_PREF_OBSERVER_H_
