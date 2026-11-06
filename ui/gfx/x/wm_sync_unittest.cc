// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: WmSync unit tests
// summary: Unit tests for the WmSync helper, verifying synchronization with the X server and window manager via a Connection.
// ---

#include "ui/gfx/x/wm_sync.h"

#include "testing/gtest/include/gtest/gtest.h"
#include "ui/gfx/x/connection.h"

namespace x11 {

TEST(WmSyncTest, Basic) {
  Connection* connection = Connection::Get();

  bool synced = false;
  WmSync wm_sync(connection,
                 base::BindOnce([](bool* synced) { *synced = true; }, &synced));
  while (!synced) {
    connection->DispatchAll();
  }
}

TEST(WmSyncTest, SyncWithServer) {
  Connection* connection = Connection::Get();

  bool synced = false;
  WmSync wm_sync(connection,
                 base::BindOnce([](bool* synced) { *synced = true; }, &synced),
                 false);
  while (!synced) {
    connection->DispatchAll();
  }
}

TEST(WmSyncTest, SyncWithWm) {
  Connection* connection = Connection::Get();

  bool synced = false;
  WmSync wm_sync(connection,
                 base::BindOnce([](bool* synced) { *synced = true; }, &synced),
                 true);
  while (!synced) {
    connection->DispatchAll();
  }
}

}  // namespace x11
