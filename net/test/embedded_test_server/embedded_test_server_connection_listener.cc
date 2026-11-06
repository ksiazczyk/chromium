// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: EmbeddedTestServerConnectionListener implementation
// summary: Defines the constructor and destructor of the connection listener interface used by the embedded test server.
// ---

#include "net/test/embedded_test_server/embedded_test_server_connection_listener.h"

namespace net::test_server {

EmbeddedTestServerConnectionListener::EmbeddedTestServerConnectionListener() =
    default;

EmbeddedTestServerConnectionListener::~EmbeddedTestServerConnectionListener() =
    default;

}  // namespace net::test_server
