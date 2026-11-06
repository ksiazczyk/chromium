// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Pinset class implementation
// summary: Implements the Pinset class, adding named static and bad static SPKI hashes to a pinset.
// ---

#include "net/tools/transport_security_state_generator/pinset.h"

namespace net::transport_security_state {

Pinset::Pinset(std::string name) : name_(name) {}

Pinset::~Pinset() = default;

void Pinset::AddStaticSPKIHash(const std::string& hash_name) {
  static_spki_hashes_.push_back(hash_name);
}

void Pinset::AddBadStaticSPKIHash(const std::string& hash_name) {
  bad_static_spki_hashes_.push_back(hash_name);
}

}  // namespace net::transport_security_state
