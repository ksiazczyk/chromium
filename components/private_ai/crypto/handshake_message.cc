// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Implementation of the HandshakeMessage struct
// summary: Provides constructors, destructor, and move operations for the handshake message holding an ephemeral public key and ciphertext.
// ---

#include "components/private_ai/crypto/handshake_message.h"

#include <stdint.h>

#include "components/private_ai/crypto/constants.h"

namespace private_ai {

HandshakeMessage::HandshakeMessage() = default;

HandshakeMessage::HandshakeMessage(
    std::array<uint8_t, kP256X962Length> ephemeral_public_key,
    std::vector<uint8_t> ciphertext)
    : ephemeral_public_key(ephemeral_public_key), ciphertext(ciphertext) {}

HandshakeMessage::~HandshakeMessage() = default;

HandshakeMessage::HandshakeMessage(HandshakeMessage&&) = default;

HandshakeMessage& HandshakeMessage::operator=(HandshakeMessage&&) = default;

}  // namespace private_ai
