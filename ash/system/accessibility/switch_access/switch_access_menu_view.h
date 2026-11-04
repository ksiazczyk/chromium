// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Switch Access menu view class header
// summary: Declares SwitchAccessMenuView, the view that lays out the action buttons of the Switch Access menu bubble.
// relations:
//   - depends_on /ui/base/metadata/metadata_header_macros.h
//   - depends_on /ui/views/view.h
//   - tested_by /ash/system/accessibility/switch_access/switch_access_menu_bubble_controller_unittest.cc
// ---

#ifndef ASH_SYSTEM_ACCESSIBILITY_SWITCH_ACCESS_SWITCH_ACCESS_MENU_VIEW_H_
#define ASH_SYSTEM_ACCESSIBILITY_SWITCH_ACCESS_SWITCH_ACCESS_MENU_VIEW_H_

#include <vector>

#include "ui/base/metadata/metadata_header_macros.h"
#include "ui/views/view.h"

namespace ash {

// View for the Switch Access menu.
class SwitchAccessMenuView : public views::View {
  METADATA_HEADER(SwitchAccessMenuView, views::View)

 public:
  SwitchAccessMenuView();
  ~SwitchAccessMenuView() override;

  SwitchAccessMenuView(const SwitchAccessMenuView&) = delete;
  SwitchAccessMenuView& operator=(const SwitchAccessMenuView&) = delete;

  int GetBubbleWidthDip() const;
  void SetActions(std::vector<std::string> actions);

 private:
  friend class SwitchAccessMenuBubbleControllerTest;
};

}  // namespace ash

#endif  // ASH_SYSTEM_ACCESSIBILITY_SWITCH_ACCESS_SWITCH_ACCESS_MENU_VIEW_H_
