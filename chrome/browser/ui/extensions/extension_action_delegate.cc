// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Extension action delegate default implementation
// summary: Provides the default ExtensionActionDelegate behavior, returning a null active web contents so callers fall back to the browser's active tab.
// ---

#include "chrome/browser/ui/extensions/extension_action_delegate.h"

content::WebContents* ExtensionActionDelegate::GetActiveWebContents() const {
  return nullptr;
}
