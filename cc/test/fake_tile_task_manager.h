// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Fake tile task manager test double header
// summary: Declares FakeTileTaskManagerImpl, a TileTaskManager test double that cancels all scheduled work instead of running it.
// ---

#ifndef CC_TEST_FAKE_TILE_TASK_MANAGER_H_
#define CC_TEST_FAKE_TILE_TASK_MANAGER_H_

#include "cc/test/fake_raster_buffer_provider.h"
#include "cc/tiles/tile_task_manager.h"

namespace cc {

// This class immediately cancels the scheduled work, i.e. in ScheduleTasks()
// it cancels all the tasks.
class FakeTileTaskManagerImpl : public TileTaskManager {
 public:
  FakeTileTaskManagerImpl();
  ~FakeTileTaskManagerImpl() override;

  // Overridden from TileTaskManager:
  void ScheduleTasks(TaskGraph* graph) override;
  void CheckForCompletedTasks() override;
  void ExternalDependencyCompletedForTask(scoped_refptr<TileTask>) override;
  void Shutdown() override;

 protected:
  Task::Vector completed_tasks_;
};

}  // namespace cc

#endif  // CC_TEST_FAKE_TILE_TASK_MANAGER_H_
