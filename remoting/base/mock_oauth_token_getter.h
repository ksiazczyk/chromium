// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock OAuth token getter
// summary: GMock-based mock of OAuthTokenGetter stubbing CallWithToken, InvalidateCache, and GetWeakPtr for tests.
// ---

#ifndef REMOTING_BASE_MOCK_OAUTH_TOKEN_GETTER_H_
#define REMOTING_BASE_MOCK_OAUTH_TOKEN_GETTER_H_

#include "remoting/base/oauth_token_getter.h"
#include "testing/gmock/include/gmock/gmock.h"

namespace remoting {

class MockOAuthTokenGetter : public OAuthTokenGetter {
 public:
  MockOAuthTokenGetter();
  ~MockOAuthTokenGetter() override;

  MOCK_METHOD(void, CallWithToken, (TokenCallback), (override));
  MOCK_METHOD(void, InvalidateCache, (), (override));
  MOCK_METHOD(base::WeakPtr<OAuthTokenGetter>, GetWeakPtr, (), (override));
};

}  // namespace remoting

#endif  // REMOTING_BASE_MOCK_OAUTH_TOKEN_GETTER_H_
