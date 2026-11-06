// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Global instance management for the WiFi polling policy
// summary: Implements Initialize, Shutdown, Get and IsInitialized for the global WifiPollingPolicy singleton.
// ---

#include "services/device/geolocation/wifi_polling_policy.h"

namespace device {

namespace {
WifiPollingPolicy* g_wifi_polling_policy;
}  // namespace

// static
void WifiPollingPolicy::Initialize(std::unique_ptr<WifiPollingPolicy> policy) {
  DCHECK(!g_wifi_polling_policy);
  g_wifi_polling_policy = policy.release();
}

// static
void WifiPollingPolicy::Shutdown() {
  if (g_wifi_polling_policy)
    delete g_wifi_polling_policy;
  g_wifi_polling_policy = nullptr;
}

// static
WifiPollingPolicy* WifiPollingPolicy::Get() {
  DCHECK(g_wifi_polling_policy);
  return g_wifi_polling_policy;
}

// static
bool WifiPollingPolicy::IsInitialized() {
  return g_wifi_polling_policy != nullptr;
}

}  // namespace device
