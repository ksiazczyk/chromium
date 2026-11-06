// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Input event tracing macro
// summary: Header defining TRACE_EXO_INPUT_EVENT, a trace macro that logs input event type and timestamp in the exo trace category.
// ---

#ifndef COMPONENTS_EXO_INPUT_TRACE_H_
#define COMPONENTS_EXO_INPUT_TRACE_H_

#include "base/time/time.h"
#include "ui/events/event.h"

#define TRACE_EXO_INPUT_EVENT(event)                                \
  TRACE_EVENT2("exo", "Input::OnInputEvent", "type", event->type(), \
               "timestamp",                                         \
               (event->time_stamp() - base::TimeTicks()).InMicroseconds());

#endif  // COMPONENTS_EXO_INPUT_TRACE_H_
