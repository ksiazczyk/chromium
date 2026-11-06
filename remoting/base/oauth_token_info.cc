// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: OAuth token info implementation
// summary: Implements the OAuthTokenInfo constructors that store an access token and an optional user email.
// ---

#include "remoting/base/oauth_token_info.h"

namespace remoting {

OAuthTokenInfo::OAuthTokenInfo(const std::string& access_token)
    : access_token_(access_token), user_email_("") {}

OAuthTokenInfo::OAuthTokenInfo(const std::string& access_token,
                               const std::string& user_email)
    : access_token_(access_token), user_email_(user_email) {}

}  // namespace remoting
