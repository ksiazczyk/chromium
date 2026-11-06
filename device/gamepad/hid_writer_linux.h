// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Linux HID output report writer declaration
// summary: Declares HidWriterLinux, a HidWriter implementation that writes output reports to a Linux HID device file descriptor.
// ---

#ifndef DEVICE_GAMEPAD_HID_WRITER_LINUX_H_
#define DEVICE_GAMEPAD_HID_WRITER_LINUX_H_

#include <stddef.h>
#include <stdint.h>

#include "base/containers/span.h"
#include "base/files/scoped_file.h"
#include "device/gamepad/hid_writer.h"

namespace device {

class HidWriterLinux final : public HidWriter {
 public:
  explicit HidWriterLinux(const base::ScopedFD& fd);
  ~HidWriterLinux() override;

  // HidWriter implementation.
  size_t WriteOutputReport(base::span<const uint8_t> report) override;

 private:
  // Not owned.
  int fd_;
};

}  // namespace device

#endif  // DEVICE_GAMEPAD_HID_WRITER_LINUX_H_
