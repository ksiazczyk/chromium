// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Fake password generation driver implementation
// summary: Implements the fake PasswordGenerationDriver Mojo receiver used to bind and flush test messages.
// ---

#include "chrome/renderer/autofill/fake_password_generation_driver.h"

#include <utility>

FakePasswordGenerationDriver::FakePasswordGenerationDriver() = default;

FakePasswordGenerationDriver::~FakePasswordGenerationDriver() = default;

void FakePasswordGenerationDriver::BindReceiver(
    mojo::PendingAssociatedReceiver<autofill::mojom::PasswordGenerationDriver>
        receiver) {
  receiver_.Bind(std::move(receiver));
}

void FakePasswordGenerationDriver::Flush() {
  if (receiver_.is_bound())
    receiver_.FlushForTesting();
}
