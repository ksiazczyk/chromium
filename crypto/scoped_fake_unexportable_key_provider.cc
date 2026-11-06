// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Fake unexportable key provider scopes implementation
// summary: Implements scoped test helpers that install a fake software-based or null unexportable key provider for the duration of their scope.
// ---

#include "crypto/scoped_fake_unexportable_key_provider.h"

#include <vector>

#include "crypto/unexportable_key.h"

namespace crypto {

namespace {

std::unique_ptr<UnexportableKeyProvider> GetUnexportableKeyProviderFake() {
  return GetSoftwareUnsecureUnexportableKeyProvider();
}

std::unique_ptr<UnexportableKeyProvider> GetUnexportableKeyProviderNull() {
  return nullptr;
}

}  // namespace

ScopedFakeUnexportableKeyProvider::ScopedFakeUnexportableKeyProvider() {
  internal::SetUnexportableKeyProviderForTesting(
      GetUnexportableKeyProviderFake);
}

ScopedFakeUnexportableKeyProvider::~ScopedFakeUnexportableKeyProvider() {
  internal::SetUnexportableKeyProviderForTesting(nullptr);
}

ScopedNullUnexportableKeyProvider::ScopedNullUnexportableKeyProvider() {
  internal::SetUnexportableKeyProviderForTesting(
      GetUnexportableKeyProviderNull);
}

ScopedNullUnexportableKeyProvider::~ScopedNullUnexportableKeyProvider() {
  internal::SetUnexportableKeyProviderForTesting(nullptr);
}

}  // namespace crypto
