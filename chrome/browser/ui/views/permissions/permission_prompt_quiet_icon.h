// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Quiet permission prompt icon declaration
// summary: Declares PermissionPromptQuietIcon, a desktop prompt disposition that presents permission requests as a location bar icon.
// ---

#ifndef CHROME_BROWSER_UI_VIEWS_PERMISSIONS_PERMISSION_PROMPT_QUIET_ICON_H_
#define CHROME_BROWSER_UI_VIEWS_PERMISSIONS_PERMISSION_PROMPT_QUIET_ICON_H_

#include "chrome/browser/ui/views/permissions/permission_prompt_desktop.h"

namespace content {
class WebContents;
}

class PermissionPromptQuietIcon : public PermissionPromptDesktop {
 public:
  PermissionPromptQuietIcon(content::WebContents* web_contents,
                            Delegate* delegate);
  ~PermissionPromptQuietIcon() override;
  PermissionPromptQuietIcon(const PermissionPromptQuietIcon&) = delete;
  PermissionPromptQuietIcon& operator=(const PermissionPromptQuietIcon&) =
      delete;

  // permissions::PermissionPrompt:
  permissions::PermissionPromptDisposition GetPromptDisposition()
      const override;
  std::optional<gfx::Rect> GetViewBoundsInScreen() const override;
};

#endif  // CHROME_BROWSER_UI_VIEWS_PERMISSIONS_PERMISSION_PROMPT_QUIET_ICON_H_
