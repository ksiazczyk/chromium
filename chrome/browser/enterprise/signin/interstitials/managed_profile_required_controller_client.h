// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Managed profile required interstitial controller client header
// summary: Declares the ManagedProfileRequiredControllerClient class that extends the security interstitial controller client to handle user commands such as going back.
// ---

#ifndef CHROME_BROWSER_ENTERPRISE_SIGNIN_INTERSTITIALS_MANAGED_PROFILE_REQUIRED_CONTROLLER_CLIENT_H_
#define CHROME_BROWSER_ENTERPRISE_SIGNIN_INTERSTITIALS_MANAGED_PROFILE_REQUIRED_CONTROLLER_CLIENT_H_

#include "components/security_interstitials/content/security_interstitial_controller_client.h"
#include "url/gurl.h"

namespace content {
class WebContents;
}  // namespace content

class ManagedProfileRequiredControllerClient
    : public security_interstitials::SecurityInterstitialControllerClient {
 public:
  ManagedProfileRequiredControllerClient(content::WebContents* web_contents,
                                         const GURL& request_url);

  ManagedProfileRequiredControllerClient(
      const ManagedProfileRequiredControllerClient&) = delete;
  ManagedProfileRequiredControllerClient& operator=(
      const ManagedProfileRequiredControllerClient&) = delete;

  ~ManagedProfileRequiredControllerClient() override;

  // security_interstitials::ControllerClient overrides.
  void GoBack() override;

 private:
  const GURL request_url_;
};

#endif  // CHROME_BROWSER_ENTERPRISE_SIGNIN_INTERSTITIALS_MANAGED_PROFILE_REQUIRED_CONTROLLER_CLIENT_H_
