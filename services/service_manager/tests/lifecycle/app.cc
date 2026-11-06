// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Lifecycle test app service entry point
// summary: Entry point for the lifecycle unittest app service executable, which runs an AppClient service until termination.
// ---

#include "base/task/single_thread_task_executor.h"
#include "services/service_manager/public/cpp/service_executable/service_main.h"
#include "services/service_manager/tests/lifecycle/app_client.h"

void ServiceMain(
    mojo::PendingReceiver<service_manager::mojom::Service> receiver) {
  base::SingleThreadTaskExecutor main_task_executor;
  service_manager::test::AppClient(std::move(receiver)).RunUntilTermination();
}
