// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Multi-round HTTP auth challenge parsing header
// summary: Declares functions to parse first and later round authentication challenges for multi-round HTTP authentication schemes.
// ---

#ifndef NET_HTTP_HTTP_AUTH_MULTI_ROUND_PARSE_H_
#define NET_HTTP_HTTP_AUTH_MULTI_ROUND_PARSE_H_

#include <string>

#include "net/base/net_export.h"
#include "net/http/http_auth.h"

namespace net {

class HttpAuthChallengeTokenizer;

NET_EXPORT_PRIVATE HttpAuth::AuthorizationResult ParseFirstRoundChallenge(
    HttpAuth::Scheme scheme,
    HttpAuthChallengeTokenizer* challenge);

NET_EXPORT_PRIVATE HttpAuth::AuthorizationResult ParseLaterRoundChallenge(
    HttpAuth::Scheme scheme,
    HttpAuthChallengeTokenizer* challenge,
    std::string* encoded_token,
    std::string* decoded_token);

}  // namespace net

#endif  // NET_HTTP_HTTP_AUTH_MULTI_ROUND_PARSE_H_
