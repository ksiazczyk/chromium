// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: What's New registrar declarations
// summary: Declares functions for registering What's New modules and editions and for creating the WhatsNewRegistry.
// ---

#ifndef CHROME_BROWSER_UI_WEBUI_WHATS_NEW_WHATS_NEW_REGISTRAR_H_
#define CHROME_BROWSER_UI_WEBUI_WHATS_NEW_WHATS_NEW_REGISTRAR_H_

#include "components/user_education/webui/whats_new_registry.h"

namespace whats_new {
namespace features {
// Declare local features here.
}  // namespace features

void RegisterWhatsNewModules(whats_new::WhatsNewRegistry* registry);

void RegisterWhatsNewEditions(whats_new::WhatsNewRegistry* registry);

std::unique_ptr<WhatsNewRegistry> CreateWhatsNewRegistry();
}  // namespace whats_new

#endif  // CHROME_BROWSER_UI_WEBUI_WHATS_NEW_WHATS_NEW_REGISTRAR_H_
