// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Cast ignored network interfaces API
// summary: Declares GetIgnoredInterfaces(), which returns the network interfaces that should not be used for internet connectivity.
// ---

#ifndef CHROMECAST_NET_NET_UTIL_CAST_H_
#define CHROMECAST_NET_NET_UTIL_CAST_H_

#include <string>

#include "third_party/abseil-cpp/absl/container/flat_hash_set.h"

namespace chromecast {

// Gets the list of interfaces that should be ignored. The interfaces returned
// by this function will not be used to connect to the internet.
absl::flat_hash_set<std::string> GetIgnoredInterfaces();

}  // namespace chromecast

#endif  // CHROMECAST_NET_NET_UTIL_CAST_H_
