// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Send tab to self bubble entry point
// summary: Provides a thin ShowBubble wrapper that delegates to the per-tab SendTabToSelfBubbleController.
// ---

#include "chrome/browser/ui/send_tab_to_self/send_tab_to_self_bubble.h"

#include "chrome/browser/ui/views/send_tab_to_self/send_tab_to_self_bubble_controller.h"

namespace send_tab_to_self {

// These methods should only be thin wrappers around
// SendTabToSelfBubbleController that can be called outside of /views/.

void ShowBubble(content::WebContents* web_contents,
                ShareEntryPoint entry_point,
                bool show_back_button) {
  SendTabToSelfBubbleController::GetOrCreateForWebContents(web_contents)
      ->ShowBubble(entry_point, show_back_button);
}

}  // namespace send_tab_to_self
