---
type: readme
title: IWA BrowserContext Service Factory directory README
summary: Explains that the directory provides a base BrowserContextKeyedServiceFactory that only instantiates IWA keyed services in browser contexts where isolated web apps are enabled.
relations:
  - documents /components/webapps/isolated_web_apps/service/isolated_web_app_browser_context_service_factory.cc
  - documents /components/webapps/isolated_web_apps/service/isolated_web_app_browser_context_service_factory.h
---

# IWA BrowserContext Service Factory (`components/webapps/isolated_web_apps/service`)

This directory provides the base `BrowserContextKeyedServiceFactory` for
Isolated Web App keyed services.

## Key Components

- `IsolatedWebAppBrowserContextServiceFactory`
  (`isolated_web_app_browser_context_service_factory.{h,cc}`): Base class for
  IWA keyed service factories (such as `IsolatedWebAppReaderRegistryFactory`)
  that overrides `GetBrowserContextToUse()` to only instantiate services for
  `content::BrowserContext` instances where Isolated Web Apps are enabled via
  `content::AreIsolatedWebAppsEnabled()`.
