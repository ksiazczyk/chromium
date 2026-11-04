// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: View click listener interface for Ash tray views
// summary: Declares the ash::ViewClickListener interface with an OnViewClicked callback that views use to notify listeners when they are clicked.
// ---

#ifndef ASH_SYSTEM_TRAY_VIEW_CLICK_LISTENER_H_
#define ASH_SYSTEM_TRAY_VIEW_CLICK_LISTENER_H_

#include "ash/ash_export.h"

namespace views {
class View;
}

namespace ash {

class ASH_EXPORT ViewClickListener {
 public:
  // Called when `sender` is clicked. `sender` is non-null.
  virtual void OnViewClicked(views::View* sender) = 0;

 protected:
  virtual ~ViewClickListener() {}
};

}  // namespace ash

#endif  // ASH_SYSTEM_TRAY_VIEW_CLICK_LISTENER_H_
