// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: AwContextMenuHelper class declaration
// summary: Declares the WebContentsUserData-based helper that shows and dismisses context menus for WebView, holding a reference to its Java object.
// relations:
//   - depends_on /content/public/browser/context_menu_params.h
//   - depends_on /content/public/browser/web_contents_user_data.h
// ---

#ifndef ANDROID_WEBVIEW_BROWSER_AW_CONTEXT_MENU_HELPER_H_
#define ANDROID_WEBVIEW_BROWSER_AW_CONTEXT_MENU_HELPER_H_

#include "content/public/browser/context_menu_params.h"
#include "content/public/browser/web_contents_user_data.h"

namespace content {
class WebContents;
}

namespace android_webview {

class AwContextMenuHelper
    : public content::WebContentsUserData<AwContextMenuHelper> {
 public:
  AwContextMenuHelper(const AwContextMenuHelper&) = delete;
  AwContextMenuHelper& operator=(const AwContextMenuHelper&) = delete;

  ~AwContextMenuHelper() override;
  void ShowContextMenu(content::RenderFrameHost& render_frame_host,
                       const content::ContextMenuParams& params);

  void DismissContextMenu();

 private:
  explicit AwContextMenuHelper(content::WebContents* web_contents);
  friend class content::WebContentsUserData<AwContextMenuHelper>;

  base::android::ScopedJavaGlobalRef<jobject> java_obj_;

  WEB_CONTENTS_USER_DATA_KEY_DECL();
};

}  // namespace android_webview

#endif  // ANDROID_WEBVIEW_BROWSER_AW_CONTEXT_MENU_HELPER_H_
