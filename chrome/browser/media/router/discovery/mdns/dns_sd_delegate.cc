// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: DnsSdService struct definitions
// summary: Defines the constructors and destructor for the DnsSdService struct that describes a discovered DNS-SD service.
// ---

#include "chrome/browser/media/router/discovery/mdns/dns_sd_delegate.h"

namespace media_router {

DnsSdService::DnsSdService() = default;
DnsSdService::DnsSdService(const DnsSdService& other) = default;
DnsSdService::~DnsSdService() = default;

}  // namespace media_router
