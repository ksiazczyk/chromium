// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: IwaClient Singleton Implementation
// summary: Implements the IwaClient singleton by storing and checking the single global instance and providing GetInstance access for the embedder bridge.
// ---

#include "components/webapps/isolated_web_apps/client.h"

namespace web_app {

namespace {
IwaClient* g_instance = nullptr;
}  // namespace

IwaClient::IwaClient() {
  CHECK(!g_instance);
  g_instance = this;
}

IwaClient::~IwaClient() {
  CHECK(g_instance);
  g_instance = nullptr;
}

// static
IwaClient* IwaClient::GetInstance() {
  CHECK(g_instance) << "IwaClient must be initialized by the time "
                       "of the call to GetInstance()";
  return g_instance;
}

}  // namespace web_app
