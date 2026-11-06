// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: UploadElementReader implementation
// summary: Provides the default IsInMemory implementation returning false for the upload element reader interface.
// ---

#include "net/base/upload_element_reader.h"

namespace net {

bool UploadElementReader::IsInMemory() const {
  return false;
}

}  // namespace net
