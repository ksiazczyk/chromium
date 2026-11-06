// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//

// ---docerion
// type: test
// title: buffer_handle_test_util.h
// summary: Declares the CreateValidLookingBufferHandle helper for creating test buffer handle file descriptors.
// ---

#ifndef MEDIA_MOJO_MOJOM_BUFFER_HANDLE_TEST_UTIL_H_
#define MEDIA_MOJO_MOJOM_BUFFER_HANDLE_TEST_UTIL_H_

#include "base/files/scoped_file.h"

namespace media {
base::ScopedFD CreateValidLookingBufferHandle(size_t size);
}  // namespace media

#endif  // MEDIA_MOJO_MOJOM_BUFFER_HANDLE_TEST_UTIL_H_
