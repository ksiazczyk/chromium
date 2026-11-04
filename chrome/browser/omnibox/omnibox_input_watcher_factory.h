// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: OmniboxInputWatcherFactory class header
// summary: Declares OmniboxInputWatcherFactory, a keyed service factory exposing GetForBrowserContext to access the per-profile OmniboxInputWatcher service.
// ---

#ifndef CHROME_BROWSER_OMNIBOX_OMNIBOX_INPUT_WATCHER_FACTORY_H_
#define CHROME_BROWSER_OMNIBOX_OMNIBOX_INPUT_WATCHER_FACTORY_H_

#include "base/no_destructor.h"
#include "components/keyed_service/content/browser_context_keyed_service_factory.h"

class OmniboxInputWatcher;

class OmniboxInputWatcherFactory : public BrowserContextKeyedServiceFactory {
 public:
  static OmniboxInputWatcher* GetForBrowserContext(
      content::BrowserContext* context);

  static OmniboxInputWatcherFactory* GetInstance();

  OmniboxInputWatcherFactory(const OmniboxInputWatcherFactory&) = delete;
  OmniboxInputWatcherFactory& operator=(const OmniboxInputWatcherFactory&) =
      delete;

 private:
  friend base::NoDestructor<OmniboxInputWatcherFactory>;

  OmniboxInputWatcherFactory();
  ~OmniboxInputWatcherFactory() override;

  // BrowserContextKeyedServiceFactory overrides.
  std::unique_ptr<KeyedService> BuildServiceInstanceForBrowserContext(
      content::BrowserContext* context) const override;
  content::BrowserContext* GetBrowserContextToUse(
      content::BrowserContext* context) const override;
};

#endif  // CHROME_BROWSER_OMNIBOX_OMNIBOX_INPUT_WATCHER_FACTORY_H_
