// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Patch worker app header
// summary: Declares MakeAppPatchWorker, the factory function that creates the updater patch worker app.
// ---

#ifndef CHROME_UPDATER_APP_APP_PATCH_WORKER_H_
#define CHROME_UPDATER_APP_APP_PATCH_WORKER_H_

#include "base/memory/scoped_refptr.h"

namespace updater {

class App;

// Creates an unzip worker app.
scoped_refptr<App> MakeAppPatchWorker();

}  // namespace updater

#endif  // CHROME_UPDATER_APP_APP_PATCH_WORKER_H_
