// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Permission prompt factory header
// summary: Declares a helper that decides whether a WebContents may request permissions even when the omnibox has been edited or emptied.
// ---

#ifndef CHROME_BROWSER_UI_VIEWS_PERMISSIONS_PERMISSION_PROMPT_FACTORY_H_
#define CHROME_BROWSER_UI_VIEWS_PERMISSIONS_PERMISSION_PROMPT_FACTORY_H_

// Note: the most important things in the .cc are declared in
// chrome/browser/ui/permission_bubble/permission_prompt.h

namespace content {
class WebContents;
}  // namespace content

// This returns true if `web_contents` should be able to request permissions
// even when the user has edited the omibox, due to it being some sort of
// special basically-part-of-Chrome-UI kind of page.
bool ShouldShowPermissionPromptEvenIfOmniboxEditedOrEmpty(
    content::WebContents* web_contents);

#endif  // CHROME_BROWSER_UI_VIEWS_PERMISSIONS_PERMISSION_PROMPT_FACTORY_H_
