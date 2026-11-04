// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Web App Database Factory Implementation
// summary: Provides the profile-backed sync store factory used to open the web app database and reports app sync status.
// ---

#include "chrome/browser/web_applications/web_app_database_factory.h"

#include "base/feature_list.h"
#include "chrome/browser/sync/data_type_store_service_factory.h"
#include "chrome/browser/web_applications/web_app_install_utils.h"
#include "chrome/browser/web_applications/web_app_utils.h"
#include "components/sync/model/data_type_store_service.h"

namespace web_app {

FakeWebAppDatabaseFactory*
AbstractWebAppDatabaseFactory::AsFakeWebAppDatabaseFactory() {
  return nullptr;
}

WebAppDatabaseFactory::WebAppDatabaseFactory(Profile* profile)
    : profile_(profile) {}

WebAppDatabaseFactory::~WebAppDatabaseFactory() = default;

syncer::OnceDataTypeStoreFactory WebAppDatabaseFactory::GetStoreFactory() {
  return DataTypeStoreServiceFactory::GetForProfile(profile_)
      ->GetStoreFactory();
}

bool WebAppDatabaseFactory::IsSyncingApps() {
  return IsSyncEnabledForApps(profile_);
}

}  // namespace web_app
