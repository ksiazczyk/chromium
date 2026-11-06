// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Immediate-error OAuth2 access token fetcher implementation
// summary: Implements a fetcher that skips network requests and posts an immediate failure with a preset GoogleServiceAuthError to the consumer.
// ---

#include "google_apis/gaia/oauth2_access_token_fetcher_immediate_error.h"

#include "base/functional/bind.h"
#include "base/task/single_thread_task_runner.h"
#include "google_apis/gaia/google_service_auth_error.h"

OAuth2AccessTokenFetcherImmediateError::OAuth2AccessTokenFetcherImmediateError(
    OAuth2AccessTokenConsumer* consumer,
    const GoogleServiceAuthError& error)
    : OAuth2AccessTokenFetcher(consumer),
      immediate_error_(error) {
  CHECK_NE(immediate_error_, GoogleServiceAuthError::AuthErrorNone());
}

OAuth2AccessTokenFetcherImmediateError::
    ~OAuth2AccessTokenFetcherImmediateError() {
  CancelRequest();
}

void OAuth2AccessTokenFetcherImmediateError::CancelRequest() {}

void OAuth2AccessTokenFetcherImmediateError::Start(
    const std::string& client_id,
    const std::string& client_secret,
    const std::vector<std::string>& scopes) {
  base::SingleThreadTaskRunner::GetCurrentDefault()->PostTask(
      FROM_HERE, base::BindOnce(&OAuth2AccessTokenFetcherImmediateError::Fail,
                                weak_ptr_factory_.GetWeakPtr()));
}

void OAuth2AccessTokenFetcherImmediateError::Fail() {
  // The call below will likely destruct this object.  We have to make a copy
  // of the error into a local variable because the class member thus will
  // be destroyed after which the copy-passed-by-reference will cause a
  // memory violation when accessed.
  GoogleServiceAuthError error_copy = immediate_error_;
  FireOnGetTokenFailure(error_copy);
}
