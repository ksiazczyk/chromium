// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Sync file system service factory declaration
// summary: Declares SyncFileSystemServiceFactory, providing per-profile access to SyncFileSystemService and a test builder with a mock remote service.
// ---

#ifndef CHROME_BROWSER_SYNC_FILE_SYSTEM_SYNC_FILE_SYSTEM_SERVICE_FACTORY_H_
#define CHROME_BROWSER_SYNC_FILE_SYSTEM_SYNC_FILE_SYSTEM_SERVICE_FACTORY_H_

#include <memory>

#include "base/no_destructor.h"
#include "chrome/browser/profiles/profile_keyed_service_factory.h"

class Profile;

namespace sync_file_system {

class RemoteFileSyncService;
class SyncFileSystemService;

class SyncFileSystemServiceFactory : public ProfileKeyedServiceFactory {
 public:
  static SyncFileSystemService* GetForProfile(Profile* profile);
  static SyncFileSystemServiceFactory* GetInstance();

  static std::unique_ptr<SyncFileSystemService>
  BuildWithRemoteFileSyncServiceForTest(
      content::BrowserContext* context,
      std::unique_ptr<RemoteFileSyncService> mock_remote_service);

 private:
  friend base::NoDestructor<SyncFileSystemServiceFactory>;
  SyncFileSystemServiceFactory();
  ~SyncFileSystemServiceFactory() override;

  // BrowserContextKeyedServiceFactory overrides.
  std::unique_ptr<KeyedService> BuildServiceInstanceForBrowserContext(
      content::BrowserContext* context) const override;
};

}  // namespace sync_file_system

#endif  // CHROME_BROWSER_SYNC_FILE_SYSTEM_SYNC_FILE_SYSTEM_SERVICE_FACTORY_H_
