// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: UserData base class for ref-counted message payloads
// summary: Declares the UserData base class that user message payloads derive from, providing ref-counted lifetime management.
// ---

#ifndef CHROMEOS_ASH_COMPONENTS_MOJO_PROXY_MOJO_CORE_CORE_PORTS_USER_DATA_H_
#define CHROMEOS_ASH_COMPONENTS_MOJO_PROXY_MOJO_CORE_CORE_PORTS_USER_DATA_H_

#include "base/memory/ref_counted.h"

namespace mojo_legacy {
namespace core {
namespace ports {

class UserData : public base::RefCountedThreadSafe<UserData> {
 protected:
  friend class base::RefCountedThreadSafe<UserData>;

  virtual ~UserData() = default;
};

}  // namespace ports
}  // namespace core
}  // namespace mojo_legacy

#endif  // CHROMEOS_ASH_COMPONENTS_MOJO_PROXY_MOJO_CORE_CORE_PORTS_USER_DATA_H_
