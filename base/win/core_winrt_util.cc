// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: WinRT activation utility implementation
// summary: Wraps RoGetActivationFactory and RoActivateInstance to avoid propagating CoreWinRT delay-loading to other modules in component builds.
// ---

#include "base/win/core_winrt_util.h"

namespace base::win {

HRESULT RoGetActivationFactory(HSTRING class_id,
                               const IID& iid,
                               void** out_factory) {
  return ::RoGetActivationFactory(class_id, iid, out_factory);
}

HRESULT RoActivateInstance(HSTRING class_id, IInspectable** instance) {
  return ::RoActivateInstance(class_id, instance);
}

}  // namespace base::win
