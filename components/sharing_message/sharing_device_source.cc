// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Sharing device source implementation
// summary: Implements ready-callback management for the SharingDeviceSource base class, running queued callbacks once the source is ready.
// ---

#include "components/sharing_message/sharing_device_source.h"

#include "base/functional/callback.h"

SharingDeviceSource::SharingDeviceSource() = default;

SharingDeviceSource::~SharingDeviceSource() = default;

void SharingDeviceSource::AddReadyCallback(base::OnceClosure callback) {
  ready_callbacks_.push_back(std::move(callback));
  MaybeRunReadyCallbacks();
}

void SharingDeviceSource::MaybeRunReadyCallbacks() {
  if (!IsReady()) {
    return;
  }

  for (auto& callback : ready_callbacks_) {
    std::move(callback).Run();
  }

  ready_callbacks_.clear();
}
