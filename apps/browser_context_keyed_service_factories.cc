// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Apps keyed service factory helpers
// summary: Ensures the apps keyed service factories are built and notifies the restore and saved files services when the application is terminating.
// relations:
//   - depends_on /apps/browser_context_keyed_service_factories.h
//   - depends_on /apps/app_lifetime_monitor_factory.h
//   - depends_on /apps/app_restore_service.h
// ---

#include "apps/browser_context_keyed_service_factories.h"

#include "apps/app_lifetime_monitor_factory.h"
#include "apps/app_restore_service.h"
#include "apps/app_restore_service_factory.h"
#include "apps/saved_files_service.h"
#include "apps/saved_files_service_factory.h"
#include "content/public/browser/browser_context.h"

namespace apps {

void EnsureBrowserContextKeyedServiceFactoriesBuilt() {
  AppLifetimeMonitorFactory::GetInstance();
  AppRestoreServiceFactory::GetInstance();
  SavedFilesServiceFactory::GetInstance();
}

void NotifyApplicationTerminating(content::BrowserContext* browser_context) {
  AppRestoreService* restore_service =
      AppRestoreServiceFactory::GetForBrowserContext(browser_context);
  CHECK(restore_service);
  restore_service->OnApplicationTerminating();

  SavedFilesService* saved_files_service =
      SavedFilesServiceFactory::GetForBrowserContextIfExists(browser_context);
  if (saved_files_service)
    saved_files_service->OnApplicationTerminating();
}

}  // namespace apps
