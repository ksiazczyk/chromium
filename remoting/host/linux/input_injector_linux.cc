// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Linux input injector factory
// summary: Factory that creates an X11-based InputInjector for Linux hosts and reports that touch events are unsupported.
// ---

#include "remoting/host/input_injector.h"

#include "remoting/host/linux/input_injector_x11.h"

namespace remoting {

// static
std::unique_ptr<InputInjector> InputInjector::Create(
    scoped_refptr<base::SingleThreadTaskRunner> main_task_runner,
    scoped_refptr<base::SingleThreadTaskRunner> ui_task_runner) {
  auto injector = std::make_unique<InputInjectorX11>(main_task_runner);
  injector->Init();
  return std::move(injector);
}

// static
bool InputInjector::SupportsTouchEvents() {
  return false;
}

}  // namespace remoting
