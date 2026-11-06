// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Backend task runner implementation
// summary: Provides GetBackendTaskRunner, returning the extension file task runner used for storage backend work, and IsOnBackendSequence to verify the current sequence.
// ---

#include "extensions/browser/api/storage/backend_task_runner.h"

#include "base/task/sequenced_task_runner.h"
#include "extensions/browser/extension_file_task_runner.h"

namespace extensions {

// TODO(stanisc): consider switching all calls of GetBackendTaskRunner() to
// GetExtensionFileTaskRunner().
scoped_refptr<base::SequencedTaskRunner> GetBackendTaskRunner() {
  return GetExtensionFileTaskRunner();
}

bool IsOnBackendSequence() {
  return GetBackendTaskRunner()->RunsTasksInCurrentSequence();
}

}  // namespace extensions
