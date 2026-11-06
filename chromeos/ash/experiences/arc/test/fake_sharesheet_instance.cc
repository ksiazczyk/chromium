// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Fake ARC sharesheet instance implementation
// summary: Implements FakeSharesheetInstance, a fake Mojo SharesheetInstance that counts Init calls and binds the sharesheet host remote.
// ---

#include "chromeos/ash/experiences/arc/test/fake_sharesheet_instance.h"

#include <utility>

namespace arc {

FakeSharesheetInstance::FakeSharesheetInstance() = default;
FakeSharesheetInstance::~FakeSharesheetInstance() = default;

void FakeSharesheetInstance::Init(
    mojo::PendingRemote<mojom::SharesheetHost> host_remote,
    InitCallback callback) {
  ++num_init_called_;
  host_remote_.reset();
  host_remote_.Bind(std::move(host_remote));
  std::move(callback).Run();
}

}  // namespace arc
