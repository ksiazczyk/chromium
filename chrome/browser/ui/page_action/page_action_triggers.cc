// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Page action trigger property keys
// summary: Defines UI class property keys that attach page action trigger and entry point values to views.
// ---

#include "chrome/browser/ui/page_action/page_action_triggers.h"

#include "ui/base/class_property.h"

DEFINE_UI_CLASS_PROPERTY_TYPE(page_actions::PageActionTrigger)
DEFINE_UI_CLASS_PROPERTY_TYPE(page_actions::PageActionEntryPoint)

namespace page_actions {

DEFINE_UI_CLASS_PROPERTY_KEY(std::underlying_type_t<PageActionTrigger>,
                             kPageActionTriggerKey,
                             kInvalidPageActionTrigger)
DEFINE_UI_CLASS_PROPERTY_KEY(std::underlying_type_t<PageActionEntryPoint>,
                             kPageActionEntryPointKey,
                             kInvalidPageActionEntryPoint)
}  // namespace page_actions
