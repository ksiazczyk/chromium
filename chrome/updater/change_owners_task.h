// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Change owners task header
// summary: Declares MakeChangeOwnersTask, a factory that builds a callback task for a given updater scope and persisted data.
// ---

#ifndef CHROME_UPDATER_CHANGE_OWNERS_TASK_H_
#define CHROME_UPDATER_CHANGE_OWNERS_TASK_H_

#include "base/functional/callback_forward.h"
#include "base/memory/scoped_refptr.h"
#include "chrome/updater/updater_scope.h"

namespace updater {

class PersistedData;

base::OnceCallback<void(base::OnceClosure)> MakeChangeOwnersTask(
    scoped_refptr<PersistedData> config,
    UpdaterScope scope);

}  // namespace updater

#endif  // CHROME_UPDATER_CHANGE_OWNERS_TASK_H_
