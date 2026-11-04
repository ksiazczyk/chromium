// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: WebView WebContents view delegate implementation
// summary: Implements the WebView WebContents view delegate, showing and dismissing context menus through the context menu helper when the hyperlink context menu feature is enabled.
// relations:
//   - implements /android_webview/browser/aw_web_contents_view_delegate.h
//   - depends_on /android_webview/browser/aw_context_menu_helper.h
//   - depends_on /android_webview/common/aw_features.h
// ---

#include "android_webview/browser/aw_web_contents_view_delegate.h"

#include "android_webview/browser/aw_context_menu_helper.h"
#include "android_webview/common/aw_features.h"

namespace android_webview {

AwWebContentsViewDelegate::AwWebContentsViewDelegate(
    content::WebContents* web_contents)
    : web_contents_(web_contents) {
  // Cannot instantiate web_contents_view_delegate_ here because
  // AwContents::SetWebDelegate is not called yet.
  if (base::FeatureList::IsEnabled(features::kWebViewHyperlinkContextMenu)) {
    AwContextMenuHelper::CreateForWebContents(web_contents_);
  }
}

AwWebContentsViewDelegate::~AwWebContentsViewDelegate() {}

content::WebDragDestDelegate* AwWebContentsViewDelegate::GetDragDestDelegate() {
  // GetDragDestDelegate is a pure virtual method from WebContentsViewDelegate
  // and must have an implementation although android doesn't use it.
  NOTREACHED();
}

void AwWebContentsViewDelegate::ShowContextMenu(
    content::RenderFrameHost& render_frame_host,
    const content::ContextMenuParams& params) {
  AwContextMenuHelper* helper =
      AwContextMenuHelper::FromWebContents(web_contents_);
  if (helper) {
    helper->ShowContextMenu(render_frame_host, params);
  }
}

void AwWebContentsViewDelegate::DismissContextMenu() {
  AwContextMenuHelper* helper =
      AwContextMenuHelper::FromWebContents(web_contents_);
  if (helper) {
    helper->DismissContextMenu();
  }
}

}  // namespace android_webview
