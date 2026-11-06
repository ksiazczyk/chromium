// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Fake OAuth token getter for tests
// summary: Declares a fake OAuthTokenGetter that returns a preset token status and info, for use in tests.
// ---

#ifndef REMOTING_BASE_FAKE_OAUTH_TOKEN_GETTER_H_
#define REMOTING_BASE_FAKE_OAUTH_TOKEN_GETTER_H_

#include "base/functional/callback.h"
#include "remoting/base/oauth_token_getter.h"

namespace remoting {

class FakeOAuthTokenGetter : public OAuthTokenGetter {
 public:
  FakeOAuthTokenGetter(Status status, const OAuthTokenInfo& token_info);
  ~FakeOAuthTokenGetter() override;

  // OAuthTokenGetter interface.
  void CallWithToken(TokenCallback on_access_token) override;
  void InvalidateCache() override;
  base::WeakPtr<OAuthTokenGetter> GetWeakPtr() override;

 private:
  Status status_;
  OAuthTokenInfo token_info_;
  base::WeakPtrFactory<FakeOAuthTokenGetter> weak_factory_{this};
};

}  // namespace remoting

#endif  // REMOTING_BASE_FAKE_OAUTH_TOKEN_GETTER_H_
