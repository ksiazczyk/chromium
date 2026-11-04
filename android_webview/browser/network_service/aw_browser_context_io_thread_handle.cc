// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: AwBrowserContextIoThreadHandle implementation
// summary: Implements thread-safe access to the AwBrowserContext from the UI thread and retrieval of the service worker IO thread client on the IO thread.
// relations:
//   - implements /android_webview/browser/network_service/aw_browser_context_io_thread_handle.h
//   - depends_on /content/public/browser/browser_thread.h
// ---

#include "android_webview/browser/network_service/aw_browser_context_io_thread_handle.h"

#include "content/public/browser/browser_thread.h"

namespace android_webview {

AwBrowserContextIoThreadHandle::AwBrowserContextIoThreadHandle(
    AwBrowserContext* browser_context)
    : browser_context_(browser_context) {
  DCHECK(browser_context_);
}

AwBrowserContextIoThreadHandle::~AwBrowserContextIoThreadHandle() = default;

AwBrowserContext* AwBrowserContextIoThreadHandle::GetOnUiThread() {
  DCHECK_CURRENTLY_ON(content::BrowserThread::UI);
  return browser_context_;
}

std::unique_ptr<AwContentsIoThreadClient>
AwBrowserContextIoThreadHandle::GetServiceWorkerIoThreadClient() {
  DCHECK_CURRENTLY_ON(content::BrowserThread::IO);
  return browser_context_->GetServiceWorkerIoThreadClientThreadSafe();
}

}  // namespace android_webview
