// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Fake keyboard backlight provider implementation for tests
// summary: Implements a fake KeyboardBacklightProvider that binds the mojom receiver for use in personalization app tests.
// ---

#include "ash/webui/personalization_app/test/fake_personalization_app_keyboard_backlight_provider.h"
#include "ash/webui/personalization_app/mojom/personalization_app.mojom.h"

namespace ash::personalization_app {

FakePersonalizationAppKeyboardBacklightProvider::
    FakePersonalizationAppKeyboardBacklightProvider(content::WebUI* web_ui) {}

FakePersonalizationAppKeyboardBacklightProvider::
    ~FakePersonalizationAppKeyboardBacklightProvider() = default;

void FakePersonalizationAppKeyboardBacklightProvider::BindInterface(
    mojo::PendingReceiver<personalization_app::mojom::KeyboardBacklightProvider>
        receiver) {
  ambient_receiver_.reset();
  ambient_receiver_.Bind(std::move(receiver));
}

}  // namespace ash::personalization_app
