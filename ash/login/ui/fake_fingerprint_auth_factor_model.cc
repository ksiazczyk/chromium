// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Fake fingerprint auth factor model implementation
// summary: Implements FakeFingerprintAuthFactorModel and a factory that creates it, providing a test stand-in for the fingerprint auth factor model.
// relations:
//   - implements /ash/login/ui/fake_fingerprint_auth_factor_model.h
//   - depends_on /ash/login/ui/fingerprint_auth_factor_model.h
// ---

#include "ash/login/ui/fake_fingerprint_auth_factor_model.h"

namespace ash {
FakeFingerprintAuthFactorModel::FakeFingerprintAuthFactorModel(
    FingerprintState state)
    : FingerprintAuthFactorModel(state) {}

FakeFingerprintAuthFactorModel::~FakeFingerprintAuthFactorModel() = default;

std::unique_ptr<FingerprintAuthFactorModel>
FakeFingerprintAuthFactorModelFactory::CreateInstance(FingerprintState state) {
  return std::make_unique<FakeFingerprintAuthFactorModel>(state);
}

}  // namespace ash
