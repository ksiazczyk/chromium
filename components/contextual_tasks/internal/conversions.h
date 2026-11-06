// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Thread type conversion header
// summary: Declares ToThreadType, which converts a sync protocol AI thread type into a contextual task ThreadType.
// ---

#ifndef COMPONENTS_CONTEXTUAL_TASKS_INTERNAL_CONVERSIONS_H_
#define COMPONENTS_CONTEXTUAL_TASKS_INTERNAL_CONVERSIONS_H_

#include "components/contextual_tasks/public/contextual_task.h"
#include "components/sync/protocol/ai_thread_specifics.pb.h"

namespace contextual_tasks {

// Converts a sync_pb::AiThreadSpecifics::ThreadType to a
// contextual_tasks::ThreadType.
ThreadType ToThreadType(sync_pb::AiThreadSpecifics::ThreadType proto_type);

}  // namespace contextual_tasks

#endif  // COMPONENTS_CONTEXTUAL_TASKS_INTERNAL_CONVERSIONS_H_
