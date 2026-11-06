// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Pipe read-write error helper declaration
// summary: Declares IsPipeReadWriteError, a helper that decides whether a mojo result indicates a data pipe read or write error.
// ---

#ifndef MEDIA_MOJO_COMMON_MOJO_PIPE_READ_WRITE_UTIL_H_
#define MEDIA_MOJO_COMMON_MOJO_PIPE_READ_WRITE_UTIL_H_

#include "mojo/public/c/system/types.h"

namespace media {
namespace mojo_pipe_read_write_util {

bool IsPipeReadWriteError(MojoResult result);

}  // namespace mojo_pipe_read_write_util
}  // namespace media

#endif  // MEDIA_MOJO_COMMON_MOJO_PIPE_READ_WRITE_UTIL_H_
