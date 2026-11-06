// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Common helper implementations for forwarder2
// summary: Implements shared helpers such as a Chromium-logging perror wrapper and safe file descriptor closing for forwarder2.
// ---

#include "tools/android/forwarder2/common.h"

#include <errno.h>
#include <unistd.h>

#include "base/logging.h"
#include "base/posix/eintr_wrapper.h"
#include "base/posix/safe_strerror.h"

namespace forwarder2 {

void PError(const char* msg) {
  PLOG(ERROR) << msg;
}

void CloseFD(int fd) {
  const int errno_copy = errno;
  if (IGNORE_EINTR(close(fd)) < 0) {
    PError("close");
    errno = errno_copy;
  }
}

}  // namespace forwarder2
