// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Keyboard UKM recorder implementation
// summary: Implements recording of virtual keyboard show events as UKM entries with the text input type, ignoring invalid source IDs.
// relations:
//   - depends_on /ash/keyboard/ui/keyboard_ukm_recorder.h
//   - depends_on /ui/base/ui_base_features.h
// ---

#include "ash/keyboard/ui/keyboard_ukm_recorder.h"

#include "services/metrics/public/cpp/ukm_builders.h"
#include "ui/base/ui_base_features.h"

namespace keyboard {

void RecordUkmKeyboardShown(ukm::SourceId source,
                            const ui::TextInputType& input_type) {
  if (source == ukm::kInvalidSourceId)
    return;

  ukm::builders::VirtualKeyboard_Open(source)
      .SetTextInputType(input_type)
      .Record(ukm::UkmRecorder::Get());
}

}  // namespace keyboard
