// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Speak selected text extension function implementation
// summary: Implements the accessibilityServicePrivate.speakSelectedText extension function, which notifies the ChromeOS accessibility manager when Select-to-Speak is triggered from the context menu.
// ---

#include "chrome/browser/chromeos/extensions/accessibility_service_private/accessibility_service_private.h"

#include "chrome/browser/ash/accessibility/accessibility_manager.h"

namespace extensions {

ExtensionFunction::ResponseAction
AccessibilityServicePrivateSpeakSelectedTextFunction::Run() {
  ash::AccessibilityManager::Get()->OnSelectToSpeakContextMenuClick();
  return RespondNow(NoArguments());
}

}  // namespace extensions
