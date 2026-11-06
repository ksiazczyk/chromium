// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Implementation of WebContentsHasActiveWebModal
// summary: Implements WebContentsHasActiveWebModal, which reports whether a WebContents has an active web modal dialog via its dialog manager.
// ---

#include "components/web_modal/web_modal_utils.h"

#include "components/web_modal/web_contents_modal_dialog_manager.h"

namespace web_modal {

bool WebContentsHasActiveWebModal(content::WebContents* web_contents) {
  auto* manager = WebContentsModalDialogManager::FromWebContents(web_contents);
  return manager && manager->IsDialogActive();
}

}  // namespace web_modal
