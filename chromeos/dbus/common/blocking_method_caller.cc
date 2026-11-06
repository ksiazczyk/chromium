// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: BlockingMethodCaller implementation
// summary: Implements BlockingMethodCaller::CallMethodAndBlock, which runs a D-Bus method call on the D-Bus task runner and blocks the calling thread until a response or error arrives.
// ---

#include "chromeos/dbus/common/blocking_method_caller.h"

#include "base/functional/bind.h"
#include "base/functional/callback_helpers.h"
#include "base/location.h"
#include "base/task/sequenced_task_runner.h"
#include "base/task/task_runner.h"
#include "base/threading/thread_restrictions.h"
#include "dbus/bus.h"
#include "dbus/error.h"
#include "dbus/object_proxy.h"

namespace chromeos {

namespace {

// This function is a part of CallMethodAndBlock implementation.
void CallMethodAndBlockInternal(
    dbus::ObjectProxy* proxy,
    dbus::MethodCall* method_call,
    base::expected<std::unique_ptr<dbus::Response>, dbus::Error>* result) {
  *result = proxy->CallMethodAndBlock(method_call,
                                      dbus::ObjectProxy::TIMEOUT_USE_DEFAULT);
}

}  // namespace

BlockingMethodCaller::BlockingMethodCaller(dbus::Bus* bus,
                                           dbus::ObjectProxy* proxy)
    : bus_(bus), proxy_(proxy) {}

BlockingMethodCaller::~BlockingMethodCaller() = default;

base::expected<std::unique_ptr<dbus::Response>, dbus::Error>
BlockingMethodCaller::CallMethodAndBlock(dbus::MethodCall* method_call) {
  base::WaitableEvent on_complete;
  base::expected<std::unique_ptr<dbus::Response>, dbus::Error> result;
  bus_->GetDBusTaskRunner()->PostTask(
      FROM_HERE,
      base::BindOnce(&CallMethodAndBlockInternal, base::Unretained(proxy_),
                     base::Unretained(method_call), base::Unretained(&result))
          // After the Callback is called, signal `on_complete` to unblock
          // this thread.
          .Then(base::BindOnce(&base::WaitableEvent::Signal,
                               base::Unretained(&on_complete))));

  // http://crbug.com/125360
  base::ScopedAllowBaseSyncPrimitivesOutsideBlockingScope allow_wait;
  on_complete.Wait();
  return result;
}

}  // namespace chromeos
