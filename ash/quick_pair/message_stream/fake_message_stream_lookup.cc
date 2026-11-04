// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Fake message stream lookup implementation for tests
// summary: Implements a fake MessageStreamLookup that stores streams per device address and can notify observers of connected streams.
// relations:
//   - implements /ash/quick_pair/message_stream/fake_message_stream_lookup.h
// ---

#include "ash/quick_pair/message_stream/fake_message_stream_lookup.h"

namespace ash {
namespace quick_pair {

FakeMessageStreamLookup::FakeMessageStreamLookup() = default;

FakeMessageStreamLookup::~FakeMessageStreamLookup() = default;

MessageStream* FakeMessageStreamLookup::GetMessageStream(
    const std::string& device_address) {
  auto it = message_streams_.find(device_address);

  if (it == message_streams_.end())
    return nullptr;

  return it->second;
}

void FakeMessageStreamLookup::AddObserver(Observer* observer) {
  observers_.AddObserver(observer);
}

void FakeMessageStreamLookup::RemoveObserver(Observer* observer) {
  observers_.RemoveObserver(observer);
}

void FakeMessageStreamLookup::NotifyMessageStreamConnected(
    const std::string& device_address,
    MessageStream* message_stream) {
  for (auto& observer : observers_)
    observer.OnMessageStreamConnected(device_address, message_stream);
}

void FakeMessageStreamLookup::AddMessageStream(
    const std::string& device_address,
    MessageStream* message_stream) {
  const auto pair = message_streams_.emplace(device_address, message_stream);
  DCHECK(pair.second);
}

void FakeMessageStreamLookup::RemoveMessageStream(
    const std::string& device_address) {
  message_streams_.erase(device_address);
}

}  // namespace quick_pair
}  // namespace ash
