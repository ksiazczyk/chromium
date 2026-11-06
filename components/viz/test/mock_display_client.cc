// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock display client implementation
// summary: Implements the mock DisplayClient, providing a bound mojo remote for use in display tests.
// ---

#include "components/viz/test/mock_display_client.h"

namespace viz {

MockDisplayClient::MockDisplayClient() = default;

MockDisplayClient::~MockDisplayClient() = default;

mojo::PendingRemote<mojom::DisplayClient> MockDisplayClient::BindRemote() {
  return receiver_.BindNewPipeAndPassRemote();
}

}  // namespace viz
