// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: FakeUrlForwarderConfigurator implementation
// summary: Implements a fake UrlForwarderConfigurator that reports the forwarder as not set up and fails setup requests, for use in tests.
// ---

#include "remoting/host/remote_open_url/fake_url_forwarder_configurator.h"

namespace remoting {

FakeUrlForwarderConfigurator::FakeUrlForwarderConfigurator() = default;

FakeUrlForwarderConfigurator::~FakeUrlForwarderConfigurator() = default;

void FakeUrlForwarderConfigurator::IsUrlForwarderSetUp(
    IsUrlForwarderSetUpCallback callback) {
  std::move(callback).Run(false);
}

void FakeUrlForwarderConfigurator::SetUpUrlForwarder(
    const SetUpUrlForwarderCallback& callback) {
  callback.Run(
      protocol::UrlForwarderControl::SetUpUrlForwarderResponse::FAILED);
}

}  // namespace remoting
