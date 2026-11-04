// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: MockOidcAuthenticationSigninInterceptor implementation
// summary: Implements the mock OIDC sign-in interceptor, defaulting MaybeInterceptOidcAuthentication to the real interceptor behavior for tests.
// ---

#include "chrome/browser/enterprise/signin/mock_oidc_authentication_signin_interceptor.h"

MockOidcAuthenticationSigninInterceptor::
    MockOidcAuthenticationSigninInterceptor(
        Profile* profile,
        std::unique_ptr<WebSigninInterceptor::Delegate> delegate)
    : OidcAuthenticationSigninInterceptor(profile, std::move(delegate)) {
  ON_CALL(*this, MaybeInterceptOidcAuthentication)
      .WillByDefault([this](content::WebContents* intercepted_contents,
                            const ProfileManagementOidcTokens& oidc_tokens,
                            const std::string& issuer_id,
                            const std::string& subject_id,
                            const std::string& email,
                            OidcInterceptionCallback oidc_callback) {
        return OidcAuthenticationSigninInterceptor::
            MaybeInterceptOidcAuthentication(intercepted_contents, oidc_tokens,
                                             issuer_id, subject_id, email,
                                             std::move(oidc_callback));
      });
}

MockOidcAuthenticationSigninInterceptor::
    ~MockOidcAuthenticationSigninInterceptor() = default;
