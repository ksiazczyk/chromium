// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Fake OAuth token getter for tests
// summary: Provides a fake OAuthTokenGetter that posts a preset token status and info to callbacks, intended for use in tests.
// ---

#include "remoting/base/fake_oauth_token_getter.h"

#include "base/functional/bind.h"
#include "base/location.h"
#include "base/notimplemented.h"
#include "base/task/single_thread_task_runner.h"

namespace remoting {

FakeOAuthTokenGetter::FakeOAuthTokenGetter(Status status,
                                           const OAuthTokenInfo& token_info)
    : status_(status), token_info_(token_info) {}

FakeOAuthTokenGetter::~FakeOAuthTokenGetter() = default;

void FakeOAuthTokenGetter::CallWithToken(TokenCallback on_access_token) {
  base::SingleThreadTaskRunner::GetCurrentDefault()->PostTask(
      FROM_HERE, base::BindOnce(std::move(on_access_token), status_,
                                OAuthTokenInfo(token_info_)));
}

void FakeOAuthTokenGetter::InvalidateCache() {
  NOTIMPLEMENTED();
}

base::WeakPtr<OAuthTokenGetter> FakeOAuthTokenGetter::GetWeakPtr() {
  return weak_factory_.GetWeakPtr();
}

}  // namespace remoting
