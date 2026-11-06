// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: PageInfoClient interface for Android page info
// summary: Declares the PageInfoClient interface with setter and getter used to create a PageInfoDelegate for WebContents and to map native resource IDs to Java resource IDs.
// ---

#ifndef COMPONENTS_PAGE_INFO_ANDROID_PAGE_INFO_CLIENT_H_
#define COMPONENTS_PAGE_INFO_ANDROID_PAGE_INFO_CLIENT_H_

#include "components/page_info/page_info_delegate.h"
#include "components/page_info/page_info_ui_delegate.h"

#include <memory>

namespace content {
class WebContents;
}

namespace page_info {
class PageInfoClient;

// Setter and getter for the client.  The client should be set early, before any
// PageInfo code is called.
void SetPageInfoClient(PageInfoClient* page_info_client);
PageInfoClient* GetPageInfoClient();

class PageInfoClient {
 public:
  PageInfoClient() = default;
  ~PageInfoClient() = default;

  // Creates a PageInfoDelegate for |web_contents|.
  virtual std::unique_ptr<PageInfoDelegate> CreatePageInfoDelegate(
      content::WebContents* web_contents);

  // Gets the Java resource ID corresponding to |native_resource_id|.
  virtual int GetJavaResourceId(int native_resource_id);
};

}  // namespace page_info

#endif  // COMPONENTS_PAGE_INFO_ANDROID_PAGE_INFO_CLIENT_H_
