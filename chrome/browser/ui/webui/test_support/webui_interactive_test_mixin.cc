// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: WebUI interactive test mixin event definitions
// summary: Defines the custom element event types for element rendering, button clicks, and iron-collapse content changes used by the WebUI interactive test mixin base class.
// ---

#include "chrome/browser/ui/webui/test_support/webui_interactive_test_mixin.h"

#include "ui/base/interaction/element_identifier.h"

DEFINE_CLASS_CUSTOM_ELEMENT_EVENT_TYPE(WebUiInteractiveTestMixinBase,
                                       kElementRenders);
DEFINE_CLASS_CUSTOM_ELEMENT_EVENT_TYPE(WebUiInteractiveTestMixinBase,
                                       kButtonWasClicked);
DEFINE_CLASS_CUSTOM_ELEMENT_EVENT_TYPE(WebUiInteractiveTestMixinBase,
                                       kIronCollapseContentShows);
