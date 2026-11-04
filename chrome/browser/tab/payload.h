// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Payload serialization interface
// summary: Declares the Payload interface for serializing package data into a byte array for storage.
// ---

#ifndef CHROME_BROWSER_TAB_PAYLOAD_H_
#define CHROME_BROWSER_TAB_PAYLOAD_H_

#include <cstdint>
#include <vector>

namespace tabs {

// Interface for a payload that can be serialized for storage.
class Payload {
 public:
  virtual ~Payload() = default;

  // Serializes the data contained within this package into a byte array for
  // storage.
  virtual std::vector<uint8_t> SerializePayload() const = 0;
};

}  // namespace tabs

#endif  // CHROME_BROWSER_TAB_PAYLOAD_H_
