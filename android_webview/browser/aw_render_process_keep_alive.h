// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Render process keep-alive tracking for WebView renderers
// summary: Declares AwRenderProcessKeepAlive, which tracks attached WebView counts and keeps a render process alive for reuse via RenderProcessHost user data.
// relations:
//   - depends_on /base/memory/raw_ptr.h
//   - depends_on /base/supports_user_data.h
//   - depends_on /base/time/time.h
// ---

#ifndef ANDROID_WEBVIEW_BROWSER_AW_RENDER_PROCESS_KEEP_ALIVE_H_
#define ANDROID_WEBVIEW_BROWSER_AW_RENDER_PROCESS_KEEP_ALIVE_H_

#include "base/memory/raw_ptr.h"
#include "base/supports_user_data.h"
#include "base/time/time.h"

namespace content {
class RenderProcessHost;
}

namespace android_webview {

class AwRenderProcessKeepAlive : public base::SupportsUserData::Data {
 public:
  static AwRenderProcessKeepAlive* GetInstanceForRenderProcessHost(
      content::RenderProcessHost* host);

  AwRenderProcessKeepAlive(const AwRenderProcessKeepAlive&) = delete;
  AwRenderProcessKeepAlive& operator=(const AwRenderProcessKeepAlive&) = delete;

  ~AwRenderProcessKeepAlive() override;

  void AddAwContents();
  void RemoveAwContents();

  bool kept_alive() const { return kept_alive_; }

  bool has_aw_contents() const { return aw_contents_count_ > 0; }

 private:
  explicit AwRenderProcessKeepAlive(
      content::RenderProcessHost* render_process_host);

  raw_ptr<content::RenderProcessHost> render_process_host_;

  int aw_contents_count_ = 0;
  bool kept_alive_ = false;
  base::TimeTicks keep_alive_start_time_;
};

}  // namespace android_webview

#endif  // ANDROID_WEBVIEW_BROWSER_AW_RENDER_PROCESS_KEEP_ALIVE_H_
