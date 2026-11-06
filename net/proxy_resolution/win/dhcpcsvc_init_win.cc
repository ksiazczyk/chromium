// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: DHCP client service initialization for Windows
// summary: Ensures the Windows DHCP client service library is initialized before any DHCP API calls, deliberately leaking the singleton at shutdown.
// ---

#include "net/proxy_resolution/win/dhcpcsvc_init_win.h"

#include <windows.h>

#include <dhcpcsdk.h>
#include <dhcpv6csdk.h>

#include <type_traits>

#include "base/check_op.h"

namespace {

class DhcpcsvcInitSingleton {
 public:
  DhcpcsvcInitSingleton() {
    DWORD version = 0;
    DWORD err = DhcpCApiInitialize(&version);
    DCHECK(err == ERROR_SUCCESS);  // DCHECK_EQ complains of unsigned mismatch.
  }
};

}  // namespace

namespace net {

void EnsureDhcpcsvcInit() {
  // Worker pool threads that use the DHCP API may still be running at shutdown.
  // Leak instance and skip cleanup.
  static_assert(std::is_trivially_destructible<DhcpcsvcInitSingleton>::value);
  static DhcpcsvcInitSingleton instance;
}

}  // namespace net
