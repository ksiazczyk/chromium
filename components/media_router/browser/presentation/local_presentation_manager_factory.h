// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Local presentation manager factory class declaration
// summary: Declares LocalPresentationManagerFactory with static accessors to get or create the LocalPresentationManager for a WebContents or BrowserContext.
// ---

#ifndef COMPONENTS_MEDIA_ROUTER_BROWSER_PRESENTATION_LOCAL_PRESENTATION_MANAGER_FACTORY_H_
#define COMPONENTS_MEDIA_ROUTER_BROWSER_PRESENTATION_LOCAL_PRESENTATION_MANAGER_FACTORY_H_

#include "components/keyed_service/content/browser_context_keyed_service_factory.h"

namespace content {
class BrowserContext;
class WebContents;
}  // namespace content

namespace media_router {

class LocalPresentationManager;

class LocalPresentationManagerFactory
    : public BrowserContextKeyedServiceFactory {
 public:
  static LocalPresentationManager* GetOrCreateForWebContents(
      content::WebContents* web_contents);
  static LocalPresentationManager* GetOrCreateForBrowserContext(
      content::BrowserContext* context);

 protected:
  LocalPresentationManagerFactory();
  LocalPresentationManagerFactory(const LocalPresentationManagerFactory&) =
      delete;
  LocalPresentationManagerFactory& operator=(
      const LocalPresentationManagerFactory&) = delete;
  ~LocalPresentationManagerFactory() override;

  // BrowserContextKeyedServiceFactory interface.
  std::unique_ptr<KeyedService> BuildServiceInstanceForBrowserContext(
      content::BrowserContext* context) const override;
};

}  // namespace media_router

#endif  // COMPONENTS_MEDIA_ROUTER_BROWSER_PRESENTATION_LOCAL_PRESENTATION_MANAGER_FACTORY_H_
