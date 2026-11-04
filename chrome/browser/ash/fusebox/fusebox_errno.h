// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Errno conversion API
// summary: Declares FileErrorToErrno and NetErrorToErrno helpers that translate Chrome error codes into POSIX errno codes.
// ---

#ifndef CHROME_BROWSER_ASH_FUSEBOX_FUSEBOX_ERRNO_H_
#define CHROME_BROWSER_ASH_FUSEBOX_FUSEBOX_ERRNO_H_

#include "base/files/file.h"

namespace fusebox {

// Returns errno code for a base::File::Error |error| code.
int FileErrorToErrno(base::File::Error error);

// Returns errno code for a net:: |error| code.
int NetErrorToErrno(int error);

}  // namespace fusebox

#endif  // CHROME_BROWSER_ASH_FUSEBOX_FUSEBOX_ERRNO_H_
