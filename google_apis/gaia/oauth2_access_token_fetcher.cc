// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: OAuth2 access token fetcher base implementation
// summary: Implements the base OAuth2AccessTokenFetcher helpers that forward token success and failure results to the registered consumer.
// ---

#include "google_apis/gaia/oauth2_access_token_fetcher.h"

OAuth2AccessTokenFetcher::OAuth2AccessTokenFetcher(
    OAuth2AccessTokenConsumer* consumer)
    : consumer_(consumer) {}

OAuth2AccessTokenFetcher::~OAuth2AccessTokenFetcher() {}

void OAuth2AccessTokenFetcher::FireOnGetTokenSuccess(
    const OAuth2AccessTokenConsumer::TokenResponse& token_response) {
  consumer_->OnGetTokenSuccess(token_response);
}

void OAuth2AccessTokenFetcher::FireOnGetTokenFailure(
    const GoogleServiceAuthError& error) {
  consumer_->OnGetTokenFailure(error);
}
