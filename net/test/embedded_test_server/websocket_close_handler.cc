// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: WebSocket close handshake handler implementation
// summary: Implements a WebSocket handler that starts a closing handshake when the client sends the text message Goodbye.
// ---

#include "net/test/embedded_test_server/websocket_close_handler.h"

namespace net::test_server {

WebSocketCloseHandler::WebSocketCloseHandler(
    scoped_refptr<WebSocketConnection> connection)
    : WebSocketHandler(std::move(connection)) {}

WebSocketCloseHandler::~WebSocketCloseHandler() = default;

void WebSocketCloseHandler::OnTextMessage(std::string_view message) {
  CHECK(connection());

  // If the message is "Goodbye", initiate a closing handshake.
  if (message == "Goodbye") {
    connection()->StartClosingHandshake(1000, "Goodbye");
  }
}

}  // namespace net::test_server
