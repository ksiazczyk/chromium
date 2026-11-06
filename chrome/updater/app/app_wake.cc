// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: AppWake app implementation
// summary: Implements the wake app, a client that dials the same-versioned updater server via the UpdateServiceInternal RPC and then shuts down.
// ---

#include "chrome/updater/app/app_wake.h"

#include "base/functional/bind.h"
#include "base/memory/scoped_refptr.h"
#include "chrome/updater/app/app.h"
#include "chrome/updater/constants.h"
#include "chrome/updater/service_proxy_factory.h"
#include "chrome/updater/update_service_internal.h"

namespace updater {

// AppWake is a simple client which dials the same-versioned server via RPC.
// This is done via the UpdateServiceInternal interface.
class AppWake : public App {
 private:
  ~AppWake() override = default;

  // Overrides for App.
  void FirstTaskRun() override;
};

void AppWake::FirstTaskRun() {
  CreateUpdateServiceInternalProxy(updater_scope())
      ->Run(base::BindOnce(&AppWake::Shutdown, this, kErrorOk));
}

scoped_refptr<App> MakeAppWake() {
  return base::MakeRefCounted<AppWake>();
}

}  // namespace updater
