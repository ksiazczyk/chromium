// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: SavedFilesServiceFactory implementation
// summary: Implements the browser-context keyed service factory that creates SavedFilesService instances, redirecting incognito contexts to the original profile so guest sessions can use the service.
// relations:
//   - depends_on /apps/saved_files_service_factory.h
//   - depends_on /apps/saved_files_service.h
//   - depends_on /components/keyed_service/content/browser_context_dependency_manager.h
// ---

#include "apps/saved_files_service_factory.h"

#include "apps/saved_files_service.h"
#include "components/keyed_service/content/browser_context_dependency_manager.h"
#include "content/public/browser/browser_context.h"
#include "extensions/browser/extension_host_registry.h"
#include "extensions/browser/extensions_browser_client.h"

namespace apps {

// static
SavedFilesService* SavedFilesServiceFactory::GetForBrowserContext(
    content::BrowserContext* context) {
  return static_cast<SavedFilesService*>(
      GetInstance()->GetServiceForBrowserContext(context, true));
}

// static
SavedFilesService* SavedFilesServiceFactory::GetForBrowserContextIfExists(
    content::BrowserContext* context) {
  return static_cast<SavedFilesService*>(
      GetInstance()->GetServiceForBrowserContext(context, false));
}

// static
SavedFilesServiceFactory* SavedFilesServiceFactory::GetInstance() {
  static base::NoDestructor<SavedFilesServiceFactory> instance;
  return instance.get();
}

SavedFilesServiceFactory::SavedFilesServiceFactory()
    : BrowserContextKeyedServiceFactory(
          "SavedFilesService",
          BrowserContextDependencyManager::GetInstance()) {
  DependsOn(extensions::ExtensionHostRegistry::GetFactory());
}

SavedFilesServiceFactory::~SavedFilesServiceFactory() = default;

std::unique_ptr<KeyedService>
SavedFilesServiceFactory::BuildServiceInstanceForBrowserContext(
    content::BrowserContext* context) const {
  return std::make_unique<SavedFilesService>(context);
}

content::BrowserContext* SavedFilesServiceFactory::GetBrowserContextToUse(
    content::BrowserContext* context) const {
  // Make sure that the service is created even for incognito profile. The goal
  // is to make this service available in guest sessions, where it could be used
  // when apps white-listed in guest sessions attempt to use chrome.fileSystem
  // API.
  return extensions::ExtensionsBrowserClient::Get()
      ->GetContextRedirectedToOriginal(context);
}

}  // namespace apps
