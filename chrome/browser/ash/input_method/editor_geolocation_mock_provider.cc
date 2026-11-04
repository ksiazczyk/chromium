// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Editor geolocation mock provider implementation
// summary: Implements a mock geolocation provider that returns a fixed country code supplied at construction, for editor testing.
// ---

#include "chrome/browser/ash/input_method/editor_geolocation_mock_provider.h"

namespace ash::input_method {

EditorGeolocationMockProvider::EditorGeolocationMockProvider(
    std::string_view country_code)
    : country_code_(country_code) {}

std::string EditorGeolocationMockProvider::GetCountryCode() {
  return country_code_;
}

}  // namespace ash::input_method
