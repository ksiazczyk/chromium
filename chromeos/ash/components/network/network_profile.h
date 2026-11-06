// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: NetworkProfile struct for Shill network profiles
// summary: Defines the NetworkProfile struct holding a Shill profile path and user hash, with a type distinguishing shared and per-user profiles.
// ---

#ifndef CHROMEOS_ASH_COMPONENTS_NETWORK_NETWORK_PROFILE_H_
#define CHROMEOS_ASH_COMPONENTS_NETWORK_NETWORK_PROFILE_H_

#include <string>

#include "base/component_export.h"

namespace ash {

struct COMPONENT_EXPORT(CHROMEOS_NETWORK) NetworkProfile {
  enum Type {
    TYPE_SHARED,  // Shared by all users on the device.
    TYPE_USER     // Not visible to other users.
  };

  NetworkProfile(const std::string& profile_path,
                 const std::string& user_hash)
      : path(profile_path),
        userhash(user_hash) {
  }

  std::string path;
  std::string userhash;  // Only set for user profiles.

  Type type() const {
    return userhash.empty() ? TYPE_SHARED : TYPE_USER;
  }

  std::string ToDebugString() const;
};

}  // namespace ash

#endif  // CHROMEOS_ASH_COMPONENTS_NETWORK_NETWORK_PROFILE_H_
