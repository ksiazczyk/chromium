// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Chrome client-side detection service delegate
// summary: Declares the Chrome-specific delegate for the client-side detection service that supplies prefs and URL loader factory access.
// ---

#ifndef CHROME_BROWSER_SAFE_BROWSING_CHROME_CLIENT_SIDE_DETECTION_SERVICE_DELEGATE_H_
#define CHROME_BROWSER_SAFE_BROWSING_CHROME_CLIENT_SIDE_DETECTION_SERVICE_DELEGATE_H_

#include "base/memory/raw_ptr.h"
#include "components/safe_browsing/content/browser/client_side_detection_service.h"

class Profile;

namespace content {
class BrowserContext;
}

namespace safe_browsing {

// Delegate class which implements chrome specific bits for configuring
// the ClientSideDetectionService class.
class ChromeClientSideDetectionServiceDelegate
    : public ClientSideDetectionService::Delegate {
 public:
  explicit ChromeClientSideDetectionServiceDelegate(Profile* profile);

  ChromeClientSideDetectionServiceDelegate(
      const ChromeClientSideDetectionServiceDelegate&) = delete;
  ChromeClientSideDetectionServiceDelegate& operator=(
      const ChromeClientSideDetectionServiceDelegate&) = delete;

  ~ChromeClientSideDetectionServiceDelegate() override;

  // ClientSideDetectionService::Delegate implementation.
  PrefService* GetPrefs() override;
  scoped_refptr<network::SharedURLLoaderFactory>
  GetSafeBrowsingURLLoaderFactory() override;
  bool ShouldSendModelToBrowserContext(
      content::BrowserContext* context) override;

 private:
  raw_ptr<Profile> profile_;
};

}  // namespace safe_browsing

#endif  // CHROME_BROWSER_SAFE_BROWSING_CHROME_CLIENT_SIDE_DETECTION_SERVICE_DELEGATE_H_
