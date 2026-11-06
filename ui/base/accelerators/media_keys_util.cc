// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Media hardware key action metrics recording
// summary: Records media hardware key actions to the Media.HardwareKeyPressed UMA histogram.
// ---

#include "ui/base/accelerators/media_keys_util.h"

#include "base/metrics/histogram_macros.h"

namespace ui {

void RecordMediaHardwareKeyAction(ui::MediaHardwareKeyAction action) {
  UMA_HISTOGRAM_ENUMERATION(kMediaHardwareKeyActionHistogramName, action);
}

}  // namespace ui
