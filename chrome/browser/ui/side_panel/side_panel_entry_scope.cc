// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Side panel entry scope implementation
// summary: Implements the SidePanelEntryScope constructor that stores whether the entry scope is browser or tab based.
// ---

#include "chrome/browser/ui/side_panel/side_panel_entry_scope.h"

SidePanelEntryScope::SidePanelEntryScope(ScopeType scope_type)
    : scope_type_(scope_type) {}
