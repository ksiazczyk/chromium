// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: TimeToClickRecorder implementation
// summary: Implements a pre-target event handler that records TimeToClick metrics when mouse presses or gesture taps occur on a target view.
// ---

#include "ash/system/tray/time_to_click_recorder.h"

#include "ui/events/event.h"
#include "ui/views/view.h"

namespace ash {

TimeToClickRecorder::TimeToClickRecorder(Delegate* delegate,
                                         views::View* target_view)
    : delegate_(delegate) {
  target_view->AddPreTargetHandler(this);
}

void TimeToClickRecorder::OnEvent(ui::Event* event) {
  // Ignore if the event is neither click nor tap.
  if (event->type() != ui::EventType::kMousePressed &&
      event->type() != ui::EventType::kGestureTap) {
    return;
  }

  delegate_->RecordTimeToClick();
}

}  // namespace ash
