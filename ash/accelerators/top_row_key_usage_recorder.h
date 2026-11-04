// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: TopRowKeyUsageRecorder class header
// summary: Declares the Ash TopRowKeyUsageRecorder class, a ui::EventHandler that observes key events for top-row key usage recording.
// relations:
//   - depends_on /ash/ash_export.h
//   - depends_on /ui/events/event_handler.h
//   - implemented_by /ash/accelerators/top_row_key_usage_recorder.cc
// ---

#ifndef ASH_ACCELERATORS_TOP_ROW_KEY_USAGE_RECORDER_H_
#define ASH_ACCELERATORS_TOP_ROW_KEY_USAGE_RECORDER_H_

#include "ash/ash_export.h"
#include "ui/events/event_handler.h"

namespace ash {

class ASH_EXPORT TopRowKeyUsageRecorder : public ui::EventHandler {
 public:
  TopRowKeyUsageRecorder();
  TopRowKeyUsageRecorder(const TopRowKeyUsageRecorder&) = delete;
  TopRowKeyUsageRecorder& operator=(const TopRowKeyUsageRecorder&) = delete;
  ~TopRowKeyUsageRecorder() override;

  // ui::EventHandler:
  void OnKeyEvent(ui::KeyEvent* event) override;
};

}  // namespace ash

#endif  // ASH_ACCELERATORS_TOP_ROW_KEY_USAGE_RECORDER_H_
