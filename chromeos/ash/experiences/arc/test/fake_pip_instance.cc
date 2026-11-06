// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Fake PipInstance implementation
// summary: Implements a fake PipInstance Mojo interface that counts ClosePip calls and stores PiP suppression status.
// ---

#include "chromeos/ash/experiences/arc/test/fake_pip_instance.h"

#include <utility>

namespace arc {

FakePipInstance::FakePipInstance() = default;

FakePipInstance::~FakePipInstance() = default;

void FakePipInstance::Init(mojo::PendingRemote<mojom::PipHost> host_remote,
                           InitCallback callback) {
  host_remote_.reset();
  host_remote_.Bind(std::move(host_remote));
  std::move(callback).Run();
}

void FakePipInstance::ClosePip() {
  num_closed_++;
}

void FakePipInstance::SetPipSuppressionStatus(bool suppressed) {
  suppressed_ = suppressed;
}

}  // namespace arc
