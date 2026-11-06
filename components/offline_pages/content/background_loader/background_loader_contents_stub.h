// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: BackgroundLoaderContentsStub class declaration
// summary: Declares a BackgroundLoaderContents subclass for testing that overrides LoadPage and exposes an is_loading() accessor for verifying load requests.
// ---

#ifndef COMPONENTS_OFFLINE_PAGES_CONTENT_BACKGROUND_LOADER_BACKGROUND_LOADER_CONTENTS_STUB_H_
#define COMPONENTS_OFFLINE_PAGES_CONTENT_BACKGROUND_LOADER_BACKGROUND_LOADER_CONTENTS_STUB_H_

#include "components/offline_pages/content/background_loader/background_loader_contents.h"

namespace content {
class BrowserContext;
}

namespace background_loader {

// Stub BackgroundLoaderContents for testing use.
class BackgroundLoaderContentsStub : public BackgroundLoaderContents {
 public:
  BackgroundLoaderContentsStub(content::BrowserContext* browser_context);

  BackgroundLoaderContentsStub(const BackgroundLoaderContentsStub&) = delete;
  BackgroundLoaderContentsStub& operator=(const BackgroundLoaderContentsStub&) =
      delete;

  ~BackgroundLoaderContentsStub() override;

  void LoadPage(const GURL& url) override;
  bool is_loading() const { return is_loading_; }

 private:
  bool is_loading_;
};

}  // namespace background_loader
#endif  // COMPONENTS_OFFLINE_PAGES_CONTENT_BACKGROUND_LOADER_BACKGROUND_LOADER_CONTENTS_STUB_H_
