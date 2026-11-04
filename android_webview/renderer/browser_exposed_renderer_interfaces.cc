// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Browser-exposed renderer interfaces implementation
// summary: Exposes WebView renderer Mojo interfaces to the browser, binding the visited link notification sink to the visited link reader.
// relations:
//   - implements /android_webview/renderer/browser_exposed_renderer_interfaces.h
//   - depends_on /android_webview/renderer/aw_content_renderer_client.h
//   - depends_on /base/task/single_thread_task_runner.h
// ---

#include "android_webview/renderer/browser_exposed_renderer_interfaces.h"

#include "android_webview/renderer/aw_content_renderer_client.h"
#include "base/task/single_thread_task_runner.h"
#include "components/visitedlink/renderer/visitedlink_reader.h"
#include "mojo/public/cpp/bindings/binder_map.h"

namespace android_webview {

void ExposeRendererInterfacesToBrowser(AwContentRendererClient* client,
                                       mojo::BinderMap* binders) {
  binders->Add<visitedlink::mojom::VisitedLinkNotificationSink>(
      client->visited_link_reader()->GetBindCallback(),
      base::SingleThreadTaskRunner::GetCurrentDefault());
}

}  // namespace android_webview
