// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: InjectionHost base implementation
// summary: Implements the InjectionHost base class constructor and destructor, storing the host identifier used for script injection.
// ---

#include "extensions/renderer/injection_host.h"

InjectionHost::InjectionHost(const extensions::mojom::HostID& host_id)
    : id_(host_id) {}

InjectionHost::~InjectionHost() {
}
