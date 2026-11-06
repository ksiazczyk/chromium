// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Command ID classification implementation
// summary: Implements CommandId checks that classify DevTools command IDs as belonging to ChromeDriver when positive or to the client when negative.
// ---

#include "chrome/test/chromedriver/net/command_id.h"

bool CommandId::IsChromeDriverCommandId(int command_id) {
  return command_id > 0;
}

bool CommandId::IsClientCommandId(int command_id) {
  return command_id < 0;
}
