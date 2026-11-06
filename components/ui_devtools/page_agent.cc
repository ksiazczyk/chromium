// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Page agent implementation for UI DevTools
// summary: Implements the PageAgent constructor and destructor for the Page protocol backend of UI DevTools.
// ---

#include "components/ui_devtools/page_agent.h"

namespace ui_devtools {

PageAgent::PageAgent(DOMAgent* dom_agent) : dom_agent_(dom_agent) {}

PageAgent::~PageAgent() = default;

}  // namespace ui_devtools
