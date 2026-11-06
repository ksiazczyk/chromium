// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: TaskParameters implementation
// summary: Implements the constructor and destructor of the TaskParameters struct.
// ---

#include "components/background_task_scheduler/task_parameters.h"

namespace background_task {

TaskParameters::TaskParameters() : task_id(0) {}

TaskParameters::~TaskParameters() = default;

}  // namespace background_task
