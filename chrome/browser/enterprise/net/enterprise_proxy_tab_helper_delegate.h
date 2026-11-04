// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Enterprise proxy tab helper delegate header
// summary: Declares the Chrome browser-level implementation of EnterpriseProxyTabHelper::Delegate that handles sign-in for enterprise proxy flows.
// ---

#ifndef CHROME_BROWSER_ENTERPRISE_NET_ENTERPRISE_PROXY_TAB_HELPER_DELEGATE_H_
#define CHROME_BROWSER_ENTERPRISE_NET_ENTERPRISE_PROXY_TAB_HELPER_DELEGATE_H_

#include "components/enterprise/net/content/enterprise_proxy_tab_helper.h"

namespace content {
class WebContents;
}  // namespace content

namespace enterprise_net {

// Chrome browser-level implementation of EnterpriseProxyTabHelper::Delegate.
class EnterpriseProxyTabHelperDelegate
    : public EnterpriseProxyTabHelper::Delegate {
 public:
  EnterpriseProxyTabHelperDelegate();
  EnterpriseProxyTabHelperDelegate(const EnterpriseProxyTabHelperDelegate&) =
      delete;
  EnterpriseProxyTabHelperDelegate& operator=(
      const EnterpriseProxyTabHelperDelegate&) = delete;
  ~EnterpriseProxyTabHelperDelegate() override;

  // EnterpriseProxyTabHelper::Delegate:
  void SignIn(content::WebContents* web_contents) override;
};

}  // namespace enterprise_net

#endif  // CHROME_BROWSER_ENTERPRISE_NET_ENTERPRISE_PROXY_TAB_HELPER_DELEGATE_H_
