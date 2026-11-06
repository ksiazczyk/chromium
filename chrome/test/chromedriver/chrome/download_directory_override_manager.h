// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Download directory override manager header
// summary: Declares DownloadDirectoryOverrideManager, which overrides the browser's default download directory via DevTools for the client's lifetime.
// ---

#ifndef CHROME_TEST_CHROMEDRIVER_CHROME_DOWNLOAD_DIRECTORY_OVERRIDE_MANAGER_H_
#define CHROME_TEST_CHROMEDRIVER_CHROME_DOWNLOAD_DIRECTORY_OVERRIDE_MANAGER_H_

#include <memory>
#include <string>

#include "base/memory/raw_ptr.h"
#include "chrome/test/chromedriver/chrome/browser_info.h"
#include "chrome/test/chromedriver/chrome/devtools_event_listener.h"

class DevToolsClient;
class Status;

// Overrides the default download directory, if requested, for the duration
// of the given |DevToolsClient|'s lifetime.
class DownloadDirectoryOverrideManager : public DevToolsEventListener {
 public:
  explicit DownloadDirectoryOverrideManager(DevToolsClient* client);
  ~DownloadDirectoryOverrideManager() override;

  Status OverrideDownloadDirectoryWhenConnected(
      const std::string& new_download_directory);

  // Overridden from DevToolsEventListener:
  Status OnConnected(DevToolsClient* client) override;

 private:
  Status ApplyOverride();
  raw_ptr<DevToolsClient> client_;
  bool is_connected_;
  std::unique_ptr<std::string> download_directory_;
};

#endif  // CHROME_TEST_CHROMEDRIVER_CHROME_DOWNLOAD_DIRECTORY_OVERRIDE_MANAGER_H_
