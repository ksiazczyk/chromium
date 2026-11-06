// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Ozone OS exchange data provider factory implementation
// summary: Implements static instance storage and setter for the Ozone provider factory singleton.
// ---

#include "ui/base/dragdrop/os_exchange_data_provider_factory_ozone.h"

namespace ui {

OSExchangeDataProviderFactoryOzone*
    OSExchangeDataProviderFactoryOzone::instance_ = nullptr;

// static
void OSExchangeDataProviderFactoryOzone::SetInstance(
    OSExchangeDataProviderFactoryOzone* instance) {
  instance_ = instance;
}

}  // namespace ui
