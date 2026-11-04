// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Other device tabs sub menu model implementation
// summary: Implements the OtherDeviceTabsSubMenuModel, a simple menu model whose command execution is currently empty.
// ---

#include "chrome/browser/ui/tabs/other_device_tabs_sub_menu_model.h"

OtherDeviceTabsSubMenuModel::OtherDeviceTabsSubMenuModel()
    : ui::SimpleMenuModel(this) {}

OtherDeviceTabsSubMenuModel::~OtherDeviceTabsSubMenuModel() = default;

void OtherDeviceTabsSubMenuModel::ExecuteCommand(int command_id,
                                                 int event_flags) {}
