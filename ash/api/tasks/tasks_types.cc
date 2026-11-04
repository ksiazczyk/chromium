// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Task and task list type implementations
// summary: Implements the constructors and destructors for the TaskList and Task data structures.
// relations:
//   - depends_on /ash/api/tasks/tasks_types.h
//   - depends_on /base/time/time.h
//   - depends_on /url/gurl.h
// ---

#include "ash/api/tasks/tasks_types.h"

#include <optional>
#include <string>

#include "base/time/time.h"
#include "url/gurl.h"

namespace ash::api {

// ----------------------------------------------------------------------------
// TaskList:

TaskList::TaskList(const std::string& id,
                   const std::string& title,
                   const base::Time& updated)
    : id(id), title(title), updated(updated) {}

TaskList::~TaskList() = default;

// ----------------------------------------------------------------------------
// Task:

Task::Task(const std::string& id,
           const std::string& title,
           const std::optional<base::Time>& due,
           bool completed,
           bool has_subtasks,
           bool has_email_link,
           bool has_notes,
           const base::Time& updated,
           const GURL& web_view_link,
           OriginSurfaceType origin_surface_type)
    : id(id),
      title(title),
      due(due),
      completed(completed),
      has_subtasks(has_subtasks),
      has_email_link(has_email_link),
      has_notes(has_notes),
      updated(updated),
      web_view_link(web_view_link),
      origin_surface_type(origin_surface_type) {}

Task::~Task() = default;

}  // namespace ash::api
