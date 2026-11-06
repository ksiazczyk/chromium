// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: TestQuicCryptoClientConfigHandle implementation
// summary: Implements a test handle that wraps a provided QuicCryptoClientConfig pointer and returns it on demand.
// ---

#include "net/quic/test_quic_crypto_client_config_handle.h"

namespace net {

TestQuicCryptoClientConfigHandle::TestQuicCryptoClientConfigHandle(
    quic::QuicCryptoClientConfig* crypto_config)
    : crypto_config_(crypto_config) {}

TestQuicCryptoClientConfigHandle::~TestQuicCryptoClientConfigHandle() = default;

quic::QuicCryptoClientConfig* TestQuicCryptoClientConfigHandle::GetConfig()
    const {
  return crypto_config_;
}

}  // namespace net
