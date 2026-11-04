// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Android extension disabled error stub
// summary: Android implementation of the extension disabled error that is currently not implemented and logs a TODO for a special Android error UI.
// ---

#include "chrome/browser/extensions/extension_disabled_ui.h"

#include "base/logging.h"
#include "base/notimplemented.h"

namespace extensions {

void AddExtensionDisabledError(Profile* profile,
                               const Extension* extension,
                               bool is_remote_install) {
  // TODO(crbug.com/399680111): Android will need a special error UI because it
  // cannot use the views implementation of the error bubble.
  NOTIMPLEMENTED() << "Extension disabled error";
}

}  // namespace extensions
