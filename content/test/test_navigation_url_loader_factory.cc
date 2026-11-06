// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test navigation URL loader factory implementation
// summary: Registers itself as the NavigationURLLoader factory for testing so created loaders are TestNavigationURLLoader instances, and unregisters on destruction.
// ---

#include "content/test/test_navigation_url_loader_factory.h"

#include <utility>

#include "content/browser/loader/navigation_url_loader.h"
#include "content/public/browser/navigation_ui_data.h"
#include "content/test/test_navigation_url_loader.h"

namespace content {

TestNavigationURLLoaderFactory::TestNavigationURLLoaderFactory() {
  NavigationURLLoader::SetFactoryForTesting(this);
}

TestNavigationURLLoaderFactory::~TestNavigationURLLoaderFactory() {
  NavigationURLLoader::SetFactoryForTesting(nullptr);
}

std::unique_ptr<NavigationURLLoader>
TestNavigationURLLoaderFactory::CreateLoader(
    StoragePartition* storage_partition,
    std::unique_ptr<NavigationRequestInfo> request_info,
    std::unique_ptr<NavigationUIData> navigation_ui_data,
    ServiceWorkerMainResourceHandle* service_worker_handle,
    NavigationURLLoaderDelegate* delegate,
    NavigationURLLoader::LoaderType loader_type) {
  return std::unique_ptr<NavigationURLLoader>(new TestNavigationURLLoader(
      std::move(request_info), delegate, loader_type));
}

}  // namespace content
