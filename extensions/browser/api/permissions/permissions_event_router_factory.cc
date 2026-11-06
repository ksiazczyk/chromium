// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Implementation of the permissions event router factory
// summary: Implements the BrowserContextKeyedServiceFactory that builds PermissionsEventRouter instances with dependencies on the event router and permissions manager.
// ---

#include "extensions/browser/api/permissions/permissions_event_router_factory.h"

#include "base/no_destructor.h"
#include "components/keyed_service/content/browser_context_dependency_manager.h"
#include "content/public/browser/browser_context.h"
#include "extensions/browser/api/permissions/permissions_event_router.h"
#include "extensions/browser/event_router_factory.h"
#include "extensions/browser/extensions_browser_client.h"
#include "extensions/browser/permissions_manager.h"

namespace extensions {

// static
PermissionsEventRouterFactory* PermissionsEventRouterFactory::GetInstance() {
  static base::NoDestructor<PermissionsEventRouterFactory> factory;
  return factory.get();
}

PermissionsEventRouterFactory::PermissionsEventRouterFactory()
    : BrowserContextKeyedServiceFactory(
          "PermissionsEventRouter",
          BrowserContextDependencyManager::GetInstance()) {
  DependsOn(EventRouterFactory::GetInstance());
  DependsOn(PermissionsManager::GetFactory());
}

content::BrowserContext* PermissionsEventRouterFactory::GetBrowserContextToUse(
    content::BrowserContext* context) const {
  return ExtensionsBrowserClient::Get()->GetContextRedirectedToOriginal(
      context);
}

std::unique_ptr<KeyedService>
PermissionsEventRouterFactory::BuildServiceInstanceForBrowserContext(
    content::BrowserContext* context) const {
  return std::make_unique<PermissionsEventRouter>(context);
}

bool PermissionsEventRouterFactory::ServiceIsCreatedWithBrowserContext() const {
  return true;
}

}  // namespace extensions
