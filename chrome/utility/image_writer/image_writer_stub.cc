// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ImageWriter stub implementation for unsupported platforms
// summary: Default stub version of the platform-specific ImageWriter methods, returning not-implemented errors so new platforms can be added by replacing it.
// ---

#include "chrome/utility/image_writer/image_writer.h"

#include "base/notimplemented.h"

// This file contains the default version of the platform-specific methods of
// the ImageWriter.  Add new platforms by creating a new version of these
// methods and updating the compliation rules appropriately.
namespace image_writer {

bool ImageWriter::IsValidDevice() {
  NOTIMPLEMENTED();
  return false;
}

void ImageWriter::UnmountVolumes(base::OnceClosure continuation) {
  NOTIMPLEMENTED();
  return;
}

bool ImageWriter::OpenDevice() {
  device_file_.Initialize(device_path_,
                          base::File::FLAG_OPEN | base::File::FLAG_READ |
                              base::File::FLAG_WRITE |
                              base::File::FLAG_WIN_EXCLUSIVE_READ |
                              base::File::FLAG_WIN_EXCLUSIVE_WRITE);
  return device_file_.IsValid();
}

}  // namespace image_writer
