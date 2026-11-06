// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: HWND debugger command header
// summary: Declares the HwndCommand class, a ChromeExtsCommand subclass that displays information about a Windows window handle.
// ---

#ifndef TOOLS_WIN_CHROME_EXTS_COMMANDS_HWND_COMMAND_H_
#define TOOLS_WIN_CHROME_EXTS_COMMANDS_HWND_COMMAND_H_

#include "tools/win/chromeexts/chrome_exts_command.h"

namespace tools {
namespace win {
namespace chromeexts {

class HwndCommand : public ChromeExtsCommand {
 public:
  HwndCommand();

  HwndCommand(const HwndCommand&) = delete;
  HwndCommand& operator=(const HwndCommand&) = delete;

  ~HwndCommand() override;

 protected:
  HRESULT Execute() override;
};

}  // namespace chromeexts
}  // namespace win
}  // namespace tools

#endif  // TOOLS_WIN_CHROME_EXTS_COMMANDS_HWND_COMMAND_H_
