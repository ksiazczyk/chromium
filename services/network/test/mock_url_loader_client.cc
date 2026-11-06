// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: MockURLLoaderClient implementation
// summary: Implements the constructor and destructor of the gmock MockURLLoaderClient used to fake URLLoaderClient behaviour in network service tests.
// ---

#include "services/network/test/mock_url_loader_client.h"

namespace network {

MockURLLoaderClient::MockURLLoaderClient() = default;
MockURLLoaderClient::~MockURLLoaderClient() = default;

}  // namespace network
