// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Multi-round HTTP auth challenge parsing
// summary: Implements parsing of first and later round authentication challenges for multi-round schemes, validating the scheme and Base64 tokens.
// ---

#include "net/http/http_auth_multi_round_parse.h"

#include <string_view>

#include "base/base64.h"
#include "base/strings/string_util.h"
#include "net/http/http_auth_challenge_tokenizer.h"

namespace net {

namespace {

// Check that the scheme in the challenge matches the expected scheme
bool SchemeIsValid(HttpAuth::Scheme scheme,
                   HttpAuthChallengeTokenizer* challenge) {
  return challenge->auth_scheme() == HttpAuth::SchemeToString(scheme);
}

}  // namespace

HttpAuth::AuthorizationResult ParseFirstRoundChallenge(
    HttpAuth::Scheme scheme,
    HttpAuthChallengeTokenizer* challenge) {
  if (!SchemeIsValid(scheme, challenge))
    return HttpAuth::AUTHORIZATION_RESULT_INVALID;

  std::string_view encoded_auth_token = challenge->base64_param();
  if (!encoded_auth_token.empty()) {
    return HttpAuth::AUTHORIZATION_RESULT_INVALID;
  }
  return HttpAuth::AUTHORIZATION_RESULT_ACCEPT;
}

HttpAuth::AuthorizationResult ParseLaterRoundChallenge(
    HttpAuth::Scheme scheme,
    HttpAuthChallengeTokenizer* challenge,
    std::string* encoded_token,
    std::string* decoded_token) {
  if (!SchemeIsValid(scheme, challenge))
    return HttpAuth::AUTHORIZATION_RESULT_INVALID;

  *encoded_token = challenge->base64_param();
  if (encoded_token->empty())
    return HttpAuth::AUTHORIZATION_RESULT_REJECT;

  if (!base::Base64Decode(*encoded_token, decoded_token))
    return HttpAuth::AUTHORIZATION_RESULT_INVALID;
  return HttpAuth::AUTHORIZATION_RESULT_ACCEPT;
}

}  // namespace net
